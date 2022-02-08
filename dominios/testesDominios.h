// Diretivas de compila��o para controlar processo de inclus�o.

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

// Incluir cabeçalhos.

#include "../dominios/dominios.h"

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade da classe Código. matrícula: 17/0149374

class TUCodigo
{
private:
    std::string VALOR_VALIDO = "0000026";   // Definição de constante para evitar número mágico.
    std::string VALOR_INVALIDO = "0000020"; // Definição de constante para evitar número mágico.
    Codigo *codigo;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO = 0; // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definição de constante para reportar resultado de teste.
    int run();                    // Método para executar teste.
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade da classe Cidade. matrícula: 17/0149374
class TUCidade
{
private:
    std::string VALOR_VALIDO = "Hong Kong";  // Definição de constante para evitar número mágico.
    std::string VALOR_INVALIDO = "Brasília"; // Definição de constante para evitar número mágico.
    Cidade *cidade;                          // Referência para unidade em teste.
    int estado;                              // Estado do teste.
    void setUp();                            // Método para criar unidade em teste.
    void tearDown();                         // Método para destruir unidade em teste.
    void testarCenarioSucesso();             // Cenário de teste.
    void testarCenarioFalha();               // Cenário de teste.

public:
    const static int SUCESSO = 0; // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definição de constante para reportar resultado de teste.
    int run();                    // Método para executar teste.
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade da classe Data. matrícula: 17/0149374
class TUData
{
private:
    std::string VALOR_VALIDO = "29/Fev/2020";   // Definição de constante para evitar número mágico.
    std::string VALOR_INVALIDO = "29/Fev/2022"; // Definição de constante para evitar número mágico.
    Data *data;                                 // Referência para unidade em teste.
    int estado;                                 // Estado do teste.
    void setUp();                               // Método para criar unidade em teste.
    void tearDown();                            // Método para destruir unidade em teste.
    void testarCenarioSucesso();                // Cenário de teste.
    void testarCenarioFalha();                  // Cenário de teste.

public:
    const static int SUCESSO = 0; // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definição de constante para reportar resultado de teste.
    int run();                    // Método para executar teste.
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade da classe Descricao. matrícula: 17/0149374
class TUDescricao
{
private:
    std::string VALOR_VALIDO = "Este eh um exemplo descricao.";           // Definição de constante para evitar número mágico.
    std::string VALOR_INVALIDO = "Este não é um exemplo de descrição..."; // Definição de constante para evitar número mágico.
    Descricao *descricao;                                                 // Referência para unidade em teste.
    int estado;                                                           // Estado do teste.
    void setUp();                                                         // Método para criar unidade em teste.
    void tearDown();                                                      // Método para destruir unidade em teste.
    void testarCenarioSucesso();                                          // Cenário de teste.
    void testarCenarioFalha();                                            // Cenário de teste.

public:
    const static int SUCESSO = 0; // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definição de constante para reportar resultado de teste.
    int run();                    // Método para executar teste.
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade da classe Email. matrícula: 17/0149374
class TUEmail
{
private:
    std::string VALOR_VALIDO = "john@doe.com";     // Definição de constante para evitar número mágico.
    std::string VALOR_INVALIDO = "john.@doe..com"; // Definição de constante para evitar número mágico.
    Email *email;                                  // Referência para unidade em teste.
    int estado;                                    // Estado do teste.
    void setUp();                                  // Método para criar unidade em teste.
    void tearDown();                               // Método para destruir unidade em teste.
    void testarCenarioSucesso();                   // Cenário de teste.
    void testarCenarioFalha();                     // Cenário de teste.

public:
    const static int SUCESSO = 0; // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definição de constante para reportar resultado de teste.
    int run();                    // Método para executar teste.
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade da classe Endereco. matrícula: 17/0149374
class TUEndereco
{
private:
    std::string VALOR_VALIDO = "Rua Brasil, No. 80";        // Definição de constante para evitar número mágico.
    std::string VALOR_INVALIDO = "Rua Brasil  número 80.."; // Definição de constante para evitar número mágico.
    Endereco *endereco;                                     // Referência para unidade em teste.
    int estado;                                             // Estado do teste.
    void setUp();                                           // Método para criar unidade em teste.
    void tearDown();                                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();                            // Cenário de teste.
    void testarCenarioFalha();                              // Cenário de teste.

public:
    const static int SUCESSO = 0; // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definição de constante para reportar resultado de teste.
    int run();                    // Método para executar teste.
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade da classe Senha. matrícula: 17/0149374
class TUSenha
{
private:
    std::string VALOR_VALIDO = "asd45E";   // Definição de constante para evitar número mágico.
    std::string VALOR_INVALIDO = "aaa$5E"; // Definição de constante para evitar número mágico.
    Senha *senha;                          // Referência para unidade em teste.
    int estado;                            // Estado do teste.
    void setUp();                          // Método para criar unidade em teste.
    void tearDown();                       // Método para destruir unidade em teste.
    void testarCenarioSucesso();           // Cenário de teste.
    void testarCenarioFalha();             // Cenário de teste.

public:
    const static int SUCESSO = 0; // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definição de constante para reportar resultado de teste.
    int run();                    // Método para executar teste.
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade da classe Titulo. matrícula: 17/0149374
class TUTitulo
{
private:
    std::string VALOR_VALIDO = "Ex. de Titulo valido";      // Definição de constante para evitar número mágico.
    std::string VALOR_INVALIDO = "Ex.. de Titulo invalido"; // Definição de constante para evitar número mágico.
    Titulo *titulo;                                         // Referência para unidade em teste.
    int estado;                                             // Estado do teste.
    void setUp();                                           // Método para criar unidade em teste.
    void tearDown();                                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();                            // Cenário de teste.
    void testarCenarioFalha();                              // Cenário de teste.

public:
    const static int SUCESSO = 0; // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definição de constante para reportar resultado de teste.
    int run();                    // Método para executar teste.
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade da classe Nome. matrícula: 17/0149374
class TUNome
{
private:
    std::string VALOR_VALIDO = "John D. Doe";    // Definição de constante para evitar número mágico.
    std::string VALOR_INVALIDO = "John D. D.oe"; // Definição de constante para evitar número mágico.
    Nome *nome;                                  // Referência para unidade em teste.
    int estado;                                  // Estado do teste.
    void setUp();                                // Método para criar unidade em teste.
    void tearDown();                             // Método para destruir unidade em teste.
    void testarCenarioSucesso();                 // Cenário de teste.
    void testarCenarioFalha();                   // Cenário de teste.

public:
    const static int SUCESSO = 0; // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definição de constante para reportar resultado de teste.
    int run();                    // Método para executar teste.
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade da classe Horario. matrícula: 17/0149374
class TUHorario
{
private:
    std::string VALOR_VALIDO = "04:58";   // Definição de constante para evitar número mágico.
    std::string VALOR_INVALIDO = "04:65"; // Definição de constante para evitar número mágico.
    Horario *horario;                     // Referência para unidade em teste.
    int estado;                           // Estado do teste.
    void setUp();                         // Método para criar unidade em teste.
    void tearDown();                      // Método para destruir unidade em teste.
    void testarCenarioSucesso();          // Cenário de teste.
    void testarCenarioFalha();            // Cenário de teste.

public:
    const static int SUCESSO = 0; // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definição de constante para reportar resultado de teste.
    int run();                    // Método para executar teste.
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade da classe Nota. matrícula: 17/0149374
class TUNota
{
private:
    std::string VALOR_VALIDO = "5";   // Definição de constante para evitar número mágico.
    std::string VALOR_INVALIDO = "9"; // Definição de constante para evitar número mágico.
    Nota *nota;                       // Referência para unidade em teste.
    int estado;                       // Estado do teste.
    void setUp();                     // Método para criar unidade em teste.
    void tearDown();                  // Método para destruir unidade em teste.
    void testarCenarioSucesso();      // Cenário de teste.
    void testarCenarioFalha();        // Cenário de teste.

public:
    const static int SUCESSO = 0; // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definição de constante para reportar resultado de teste.
    int run();                    // Método para executar teste.
};
#endif // TESTES_H_INCLUDED
