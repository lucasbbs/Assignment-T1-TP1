#include "testesEntidades.h"

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade.

/*
void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}


void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade.

void TUProjeto::setUp(){
    projeto = new Projeto();
    estado = SUCESSO;
}

void TUProjeto::tearDown(){
    delete projeto;
}

void TUProjeto::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO);
    projeto->setCodigo(codigo);
    if(projeto->getCodigo().getValor() != VALOR_VALIDO)
        estado = FALHA;

    Prioridade prioridade;
    prioridade.setValor(VALOR_VALIDO);
    projeto->setPrioridade(prioridade);
    if(projeto->getPrioridade().getValor() != VALOR_VALIDO)
        estado = FALHA;
}

int TUProjeto::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

*/
