#include "testesDominios.h"

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade do domínio código.

void TUCodigo::setUp()
{
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown()
{
    delete codigo;
}

void TUCodigo::testarCenarioSucesso()
{
    try
    {
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha()
{
    try
    {
        codigo->setCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        if (codigo->getCodigo() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade do domínio cidade.

void TUCidade::setUp()
{
    cidade = new Cidade();
    estado = SUCESSO;
}

void TUCidade::tearDown()
{
    delete cidade;
}

void TUCidade::testarCenarioSucesso()
{
    try
    {
        cidade->setCidade(VALOR_VALIDO);
        if (cidade->getCidade() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUCidade::testarCenarioFalha()
{
    try
    {
        cidade->setCidade(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        if (cidade->getCidade() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCidade::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade do domínio Data.

void TUData::setUp()
{
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown()
{
    delete data;
}

void TUData::testarCenarioSucesso()
{
    try
    {
        data->setData(VALOR_VALIDO);
        if (data->getData() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha()
{
    try
    {
        data->setData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        if (data->getData() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUData::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade do domínio Descricao.

void TUDescricao::setUp()
{
    descricao = new Descricao();
    estado = SUCESSO;
}

void TUDescricao::tearDown()
{
    delete descricao;
}

void TUDescricao::testarCenarioSucesso()
{
    try
    {
        descricao->setDescricao(VALOR_VALIDO);
        if (descricao->getDescricao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUDescricao::testarCenarioFalha()
{
    try
    {
        descricao->setDescricao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        if (descricao->getDescricao() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUDescricao::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade do domínio Duracao.

void TUDuracao::setUp()
{
    duracao = new Duracao();
    estado = SUCESSO;
}

void TUDuracao::tearDown()
{
    delete duracao;
}

void TUDuracao::testarCenarioSucesso()
{
    try
    {
        duracao->setDuracao(VALOR_VALIDO);
        if (duracao->getDuracao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUDuracao::testarCenarioFalha()
{
    try
    {
        duracao->setDuracao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        if (duracao->getDuracao() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUDuracao::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade do domínio Email.

void TUEmail::setUp()
{
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown()
{
    delete email;
}

void TUEmail::testarCenarioSucesso()
{
    try
    {
        email->setEmail(VALOR_VALIDO);
        if (email->getEmail() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha()
{
    try
    {
        email->setEmail(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        if (email->getEmail() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUEmail::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade do domínio Endereco.

void TUEndereco::setUp()
{
    endereco = new Endereco();
    estado = SUCESSO;
}

void TUEndereco::tearDown()
{
    delete endereco;
}

void TUEndereco::testarCenarioSucesso()
{
    try
    {
        endereco->setEndereco(VALOR_VALIDO);
        if (endereco->getEndereco() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUEndereco::testarCenarioFalha()
{
    try
    {
        endereco->setEndereco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        if (endereco->getEndereco() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUEndereco::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade do domínio Horario.

void TUHorario::setUp()
{
    horario = new Horario();
    estado = SUCESSO;
}

void TUHorario::tearDown()
{
    delete horario;
}

void TUHorario::testarCenarioSucesso()
{
    try
    {
        horario->setHorario(VALOR_VALIDO);
        if (horario->getHorario() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUHorario::testarCenarioFalha()
{
    try
    {
        horario->setHorario(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        if (horario->getHorario() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUHorario::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade do domínio Nome.

void TUNome::setUp()
{
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown()
{
    delete nome;
}

void TUNome::testarCenarioSucesso()
{
    try
    {
        nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha()
{
    try
    {
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        if (nome->getNome() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNome::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade do domínio Nota.

void TUNota::setUp()
{
    nota = new Nota();
    estado = SUCESSO;
}

void TUNota::tearDown()
{
    delete nota;
}

void TUNota::testarCenarioSucesso()
{
    try
    {
        nota->setNota(VALOR_VALIDO);
        if (nota->getNota() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUNota::testarCenarioFalha()
{
    try
    {
        nota->setNota(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        if (nota->getNota() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNota::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade do domínio Senha.

void TUSenha::setUp()
{
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown()
{
    delete senha;
}

void TUSenha::testarCenarioSucesso()
{
    try
    {
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha()
{
    try
    {
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        if (senha->getSenha() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSenha::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade do domínio Titulo.

void TUTitulo::setUp()
{
    titulo = new Titulo();
    estado = SUCESSO;
}

void TUTitulo::tearDown()
{
    delete titulo;
}

void TUTitulo::testarCenarioSucesso()
{
    try
    {
        titulo->setTitulo(VALOR_VALIDO);
        if (titulo->getTitulo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUTitulo::testarCenarioFalha()
{
    try
    {
        titulo->setTitulo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        if (titulo->getTitulo() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUTitulo::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade do domínio Idioma.

void TUIdioma::setUp()
{
    idioma = new Idioma();
    estado = SUCESSO;
}

void TUIdioma::tearDown()
{
    delete idioma;
}

void TUIdioma::testarCenarioSucesso()
{
    try
    {
        idioma->setIdioma(VALOR_VALIDO);
        if (idioma->getIdioma() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUIdioma::testarCenarioFalha()
{
    try
    {
        idioma->setIdioma(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (std::invalid_argument &excecao)
    {
        if (idioma->getIdioma() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUIdioma::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
