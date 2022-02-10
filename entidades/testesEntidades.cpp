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
