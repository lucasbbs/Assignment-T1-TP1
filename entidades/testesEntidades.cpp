#include "testesEntidades.h"

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade.

void TUUsuario::setUp()
{
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown()
{
    delete usuario;
}

void TUUsuario::testarCenarioSucesso()
{
    Nome nome;
    nome.setNome(NOME_VALIDO);
    usuario->setNome(nome);
    if (usuario->getNome().getNome() != NOME_VALIDO)
        estado = FALHA;

    Email email;
    email.setEmail(EMAIL_VALIDO);
    usuario->setEmail(email);
    if (usuario->getEmail().getEmail() != EMAIL_VALIDO)
        estado = FALHA;

    Senha senha;
    senha.setSenha(SENHA_VALIDA);
    usuario->setSenha(senha);
    if (usuario->getSenha().getSenha() != SENHA_VALIDA)
        estado = FALHA;
}

void TUUsuario::testarCenarioFalha()
{
    try
    {
        Nome nome;
        nome.setNome(NOME_INVALIDO);
        usuario->setNome(nome);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (usuario->getNome().getNome() == NOME_INVALIDO)
            estado = FALHA;
    }

    try
    {
        Email email;
        email.setEmail(EMAIL_INVALIDO);
        usuario->setEmail(email);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (usuario->getEmail().getEmail() == EMAIL_INVALIDO)
            estado = FALHA;
    }

    try
    {
        Senha senha;
        senha.setSenha(EMAIL_INVALIDO);
        usuario->setSenha(senha);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (usuario->getSenha().getSenha() == EMAIL_INVALIDO)
            estado = FALHA;
    }
}

int TUUsuario::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}




void TUSessao::setUp(){
  sessao = new Sessao();
  estado = SUCESSO;
}

void TUSessao::tearDown(){
  delete sessao;
}

void TUSessao::testarCenarioSucesso(){
  Codigo codigo;
  codigo.setCodigo(VALOR_VALIDO_CODIGO);
  sessao->setCodigo(codigo);
  if(sessao->getCodigo().getCodigo() != VALOR_VALIDO_CODIGO)
    estado = FALHA;

  Data data;
  data.setData(VALOR_VALIDO_DATA);
  sessao->setData(data);
  if(sessao->getData().getData() != VALOR_VALIDO_DATA)
    estado = FALHA;

  Horario horario;
  horario.setHorario(VALOR_VALIDO_HORARIO);
  sessao->setHorario(horario);
  if(sessao->getHorario().getHorario() != VALOR_VALIDO_HORARIO)
    estado = FALHA;

  Idioma idioma;
  idioma.setIdioma(VALOR_VALIDO_IDIOMA);
  sessao->setIdioma(idioma);
  if(sessao->getIdioma().getIdioma() != VALOR_VALIDO_IDIOMA)
    estado = FALHA;

  // Prioridade prioridade;
  // prioridade.setValor(VALOR_VALIDO);
  // projeto->setPrioridade(prioridade);
  // if(projeto->getPrioridade().getValor() != VALOR_VALIDO)
  //   estado = FALHA;
}

int TUSessao::run(){
  setUp();
  testarCenarioSucesso();
  tearDown();
  return estado;
}
