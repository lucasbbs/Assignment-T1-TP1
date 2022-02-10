// Diretivas de compilação para controlar processo de inclusão.

#ifndef TESTES_ENTIDADES_H_INCLUDED
#define TESTES_ENTIDADES_H_INCLUDED

// Incluir cabeçalhos.

#include "../dominios/dominios.h"
#include "../entidades/entidades.h"

using namespace std;

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe Usuário. matrícula: 17/0149374

class TUUsuario
{
private:
    const std::string NOME_VALIDO = "John D. Doe";    // Defini��o de constante para evitar n�mero mágico.
    const std::string NOME_INVALIDO = "John D.. Doe"; // Defini��o de constante para evitar n�mero mágico.
    const std::string EMAIL_VALIDO = "john@doe.com";
    const std::string EMAIL_INVALIDO = "john.@doe.com";
    const std::string SENHA_VALIDA = "asd4WQ";
    const std::string SENHA_INVALIDA = "aaa4WQ";
    Usuario *usuario;            // Referência para unidade em teste.
    int estado;                  // Estado do teste.
    void setUp();                // Método para criar unidade em teste.
    void tearDown();             // Método para destruir unidade em teste.
    void testarCenarioSucesso(); // Cenário de teste.
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0; // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definição de constante para reportar resultado de teste.
    int run();                    // Método para executar teste.
};

#endif // TESTES_ENTIDADES_H_INCLUDED
