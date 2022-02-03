// Diretivas de compila��o para controlar processo de inclus�o.

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

// Incluir cabe�alhos.

#include "../dominios/dominios.h"
#include "../entidades/entidades.h"

using namespace std;

// --------------------------------------------------------------------------
// Exemplo de declara��o de classe para teste de unidade de classe dom�nio.

class TUCodigo
{
private:
    const static int VALOR_VALIDO = 20;   // Defini��o de constante para evitar n�mero m�gico.
    const static int VALOR_INVALIDO = 30; // Defini��o de constante para evitar n�mero m�gico.
    Codigo *codigo;                       // Refer�ncia para unidade em teste.
    int estado;                           // Estado do teste.
    void setUp();                         // M�todo para criar unidade em teste.
    void tearDown();                      // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();          // Cen�rio de teste.
    void testarCenarioFalha();            // Cen�rio de teste.

public:
    const static int SUCESSO = 0; // Defini��o de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Defini��o de constante para reportar resultado de teste.
    int run();                    // M�todo para executar teste.
};

// --------------------------------------------------------------------------
// Exemplo de declara��o de classe para teste de unidade de classe entidade.

class TUProjeto
{
    // private:
    //     const static int VALOR_VALIDO   = 20;   // Defini��o de constante para evitar n�mero m�gico.
    //     Projeto *projeto;                       // Refer�ncia para unidade em teste.
    //     int estado;                             // Estado do teste.
    //     void setUp();                           // M�todo para criar unidade em teste.
    //     void tearDown();                        // M�todo para destruir unidade em teste.
    //     void testarCenarioSucesso();            // Cen�rio de teste.
    // public:
    //     const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    //     const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    //     int run();                              // M�todo para executar teste.
};

#endif // TESTES_H_INCLUDED
