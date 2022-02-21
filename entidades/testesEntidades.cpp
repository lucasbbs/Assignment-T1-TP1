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

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade.

void TUAvaliacao::setUp()
{
  avaliacao = new Avaliacao();
  estado = SUCESSO;
}

void TUAvaliacao::tearDown()
{
  delete avaliacao;
}

void TUAvaliacao::testarCenarioSucesso()
{
  Codigo codigo;
  codigo.setCodigo(CODIGO_VALIDO);
  avaliacao->setCodigo(codigo);
  if (avaliacao->getCodigo().getCodigo() != CODIGO_VALIDO)
    estado = FALHA;

  Nota nota;
  nota.setNota(NOTA_VALIDA);
  avaliacao->setNota(nota);
  if (avaliacao->getNota().getNota() != NOTA_VALIDA)
    estado = FALHA;

  Descricao descricao;
  descricao.setDescricao(DESCRICAO_VALIDA);
  avaliacao->setDescricao(descricao);
  if (avaliacao->getDescricao().getDescricao() != DESCRICAO_VALIDA)
    estado = FALHA;
}

void TUAvaliacao::testarCenarioFalha()
{
  try
  {
    Codigo codigo;
    codigo.setCodigo(CODIGO_INVALIDO);
    avaliacao->setCodigo(codigo);
    estado = FALHA;
  }
  catch (invalid_argument &excecao)
  {
    if (avaliacao->getCodigo().getCodigo() == CODIGO_INVALIDO)
      estado = FALHA;
  }

  try
  {
    Nota nota;
    nota.setNota(NOTA_INVALIDA);
    avaliacao->setNota(nota);
    estado = FALHA;
  }
  catch (invalid_argument &excecao)
  {
    if (avaliacao->getNota().getNota() == NOTA_INVALIDA)
      estado = FALHA;
  }

  try
  {
    Descricao senha;
    senha.setDescricao(DESCRICAO_INVALIDA);
    avaliacao->setDescricao(senha);
    estado = FALHA;
  }
  catch (invalid_argument &excecao)
  {
    if (avaliacao->getDescricao().getDescricao() == DESCRICAO_INVALIDA)
      estado = FALHA;
  }
}

int TUAvaliacao::run()
{
  setUp();
  testarCenarioSucesso();
  testarCenarioFalha();
  tearDown();
  return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade.

void TUExcursao::setUp()
{
  excursao = new Excursao();
  estado = SUCESSO;
}

void TUExcursao::tearDown()
{
  delete excursao;
}

void TUExcursao::testarCenarioSucesso()
{
  Codigo codigo;
  codigo.setCodigo(CODIGO_VALIDO);
  excursao->setCodigo(codigo);
  if (excursao->getCodigo().getCodigo() != CODIGO_VALIDO)
    estado = FALHA;

  Titulo titulo;
  titulo.setTitulo(TITULO_VALIDO);
  excursao->setTitulo(titulo);
  if (excursao->getTitulo().getTitulo() != TITULO_VALIDO)
    estado = FALHA;

  Nota nota;
  nota.setNota(NOTA_VALIDA);
  excursao->setNota(nota);
  if (excursao->getNota().getNota() != NOTA_VALIDA)
    estado = FALHA;

  Cidade cidade;
  cidade.setCidade(CIDADE_VALIDA);
  excursao->setCidade(cidade);
  if (excursao->getCidade().getCidade() != CIDADE_VALIDA)
    estado = FALHA;

  Duracao duracao;
  duracao.setDuracao(DURACAO_VALIDA);
  excursao->setDuracao(duracao);
  if (excursao->getDuracao().getDuracao() != DURACAO_VALIDA)
    estado = FALHA;

  Descricao descricao;
  descricao.setDescricao(DESCRICAO_VALIDA);
  excursao->setDescricao(descricao);
  if (excursao->getDescricao().getDescricao() != DESCRICAO_VALIDA)
    estado = FALHA;

  Endereco endereco;
  endereco.setEndereco(ENDERECO_VALIDO);
  excursao->setEndereco(endereco);
  if (excursao->getEndereco().getEndereco() != ENDERECO_VALIDO)
    estado = FALHA;
}

void TUExcursao::testarCenarioFalha()
{
  try
  {
    Codigo codigo;
    codigo.setCodigo(CODIGO_INVALIDO);
    excursao->setCodigo(codigo);
    estado = FALHA;
  }
  catch (invalid_argument &excecao)
  {
    if (excursao->getCodigo().getCodigo() == CODIGO_INVALIDO)
      estado = FALHA;
  }

  try
  {
    Titulo titulo;
    titulo.setTitulo(TITULO_INVALIDO);
    excursao->setTitulo(titulo);
    estado = FALHA;
  }
  catch (invalid_argument &excecao)
  {
    if (excursao->getTitulo().getTitulo() == TITULO_INVALIDO)
      estado = FALHA;
  }

  try
  {
    Nota nota;
    nota.setNota(NOTA_INVALIDA);
    excursao->setNota(nota);
    estado = FALHA;
  }
  catch (invalid_argument &excecao)
  {
    if (excursao->getNota().getNota() == NOTA_INVALIDA)
      estado = FALHA;
  }

  try
  {
    Cidade cidade;
    cidade.setCidade(CIDADE_INVALIDA);
    excursao->setCidade(cidade);
    estado = FALHA;
  }
  catch (invalid_argument &excecao)
  {
    if (excursao->getCidade().getCidade() == CIDADE_INVALIDA)
      estado = FALHA;
  }

  try
  {
    Duracao duracao;
    duracao.setDuracao(DURACAO_INVALIDA);
    excursao->setDuracao(duracao);
    estado = FALHA;
  }
  catch (invalid_argument &excecao)
  {
    if (excursao->getDuracao().getDuracao() == DURACAO_INVALIDA)
      estado = FALHA;
  }

  try
  {
    Descricao descricao;
    descricao.setDescricao(DESCRICAO_INVALIDA);
    excursao->setDescricao(descricao);
    estado = FALHA;
  }
  catch (invalid_argument &excecao)
  {
    if (excursao->getDescricao().getDescricao() == DESCRICAO_INVALIDA)
      estado = FALHA;
  }

  try
  {
    Endereco endereco;
    endereco.setEndereco(ENDERECO_INVALIDO);
    excursao->setEndereco(endereco);
    estado = FALHA;
  }
  catch (invalid_argument &excecao)
  {
    if (excursao->getEndereco().getEndereco() == ENDERECO_INVALIDO)
      estado = FALHA;
  }
}

int TUExcursao::run()
{
  setUp();
  testarCenarioSucesso();
  testarCenarioFalha();
  tearDown();
  return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade.

void TUSessao::setUp()
{
  sessao = new Sessao();
  estado = SUCESSO;
}

void TUSessao::tearDown()
{
  delete sessao;
}

void TUSessao::testarCenarioSucesso()
{
  Codigo codigo;
  codigo.setCodigo(VALOR_VALIDO_CODIGO);
  sessao->setCodigo(codigo);
  if (sessao->getCodigo().getCodigo() != VALOR_VALIDO_CODIGO)
    estado = FALHA;

  Data data;
  data.setData(VALOR_VALIDO_DATA);
  sessao->setData(data);
  if (sessao->getData().getData() != VALOR_VALIDO_DATA)
    estado = FALHA;

  Horario horario;
  horario.setHorario(VALOR_VALIDO_HORARIO);
  sessao->setHorario(horario);
  if (sessao->getHorario().getHorario() != VALOR_VALIDO_HORARIO)
    estado = FALHA;

  Idioma idioma;
  idioma.setIdioma(VALOR_VALIDO_IDIOMA);
  sessao->setIdioma(idioma);
  if (sessao->getIdioma().getIdioma() != VALOR_VALIDO_IDIOMA)
    estado = FALHA;

  // Prioridade prioridade;
  // prioridade.setValor(VALOR_VALIDO);
  // projeto->setPrioridade(prioridade);
  // if(projeto->getPrioridade().getValor() != VALOR_VALIDO)
  //   estado = FALHA;
}

int TUSessao::run()
{
  setUp();
  testarCenarioSucesso();
  tearDown();
  return estado;
}
