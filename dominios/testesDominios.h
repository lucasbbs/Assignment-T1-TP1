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
    const std::string VALOR_VALIDO = "0000026";
    const std::string VALOR_INVALIDO = "0000000";
    Codigo *codigo;              // Referência para unidade em teste.
    int estado;                  // Estado do teste.
    void setUp();                // Método para criar unidade em teste.
    void tearDown();             // Método para destruir unidade em teste.
    void testarCenarioSucesso(); // Cenário de teste.
    void testarCenarioFalha();   // Cenário de teste.

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
    const std::string VALOR_VALIDO = "Hong Kong";
    const std::string VALOR_INVALIDO = "Brasília";
    Cidade *cidade;              // Referência para unidade em teste.
    int estado;                  // Estado do teste.
    void setUp();                // Método para criar unidade em teste.
    void tearDown();             // Método para destruir unidade em teste.
    void testarCenarioSucesso(); // Cenário de teste.
    void testarCenarioFalha();   // Cenário de teste.

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
    const std::string VALOR_VALIDO = "15-Fev-2020";
    const std::string VALOR_INVALIDO = "30-Fev-2022";
    Data *data;                  // Referência para unidade em teste.
    int estado;                  // Estado do teste.
    void setUp();                // Método para criar unidade em teste.
    void tearDown();             // Método para destruir unidade em teste.
    void testarCenarioSucesso(); // Cenário de teste.
    void testarCenarioFalha();   // Cenário de teste.

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
    const std::string VALOR_VALIDO = "Este eh um exemplo descricao.";
    const std::string VALOR_INVALIDO = "Este não é um exemplo de descrição...";
    Descricao *descricao;        // Referência para unidade em teste.
    int estado;                  // Estado do teste.
    void setUp();                // Método para criar unidade em teste.
    void tearDown();             // Método para destruir unidade em teste.
    void testarCenarioSucesso(); // Cenário de teste.
    void testarCenarioFalha();   // Cenário de teste.

public:
    const static int SUCESSO = 0; // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definição de constante para reportar resultado de teste.
    int run();                    // Método para executar teste.
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade da classe Duracao. matrícula: 17/0149374
class TUDuracao
{
private:
    const int VALOR_VALIDO = 180;   // Definição de constante para evitar número mágico.
    const int VALOR_INVALIDO = 240; // Definição de constante para evitar número mágico.
    Duracao *duracao;               // Referência para unidade em teste.
    int estado;                     // Estado do teste.
    void setUp();                   // Método para criar unidade em teste.
    void tearDown();                // Método para destruir unidade em teste.
    void testarCenarioSucesso();    // Cenário de teste.
    void testarCenarioFalha();      // Cenário de teste.

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
    const std::string VALOR_VALIDO = "john@doe.com";
    const std::string VALOR_INVALIDO = "john.@doe..com";
    Email *email;                // Referência para unidade em teste.
    int estado;                  // Estado do teste.
    void setUp();                // Método para criar unidade em teste.
    void tearDown();             // Método para destruir unidade em teste.
    void testarCenarioSucesso(); // Cenário de teste.
    void testarCenarioFalha();   // Cenário de teste.

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
    const std::string VALOR_VALIDO = "Rua Brasil, No. 80";
    const std::string VALOR_INVALIDO = "Rua Brasil  número 80..";
    Endereco *endereco;          // Referência para unidade em teste.
    int estado;                  // Estado do teste.
    void setUp();                // Método para criar unidade em teste.
    void tearDown();             // Método para destruir unidade em teste.
    void testarCenarioSucesso(); // Cenário de teste.
    void testarCenarioFalha();   // Cenário de teste.

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
    const std::string VALOR_VALIDO = "asd45E";
    const std::string VALOR_INVALIDO = "aaa$5E";
    Senha *senha;                // Referência para unidade em teste.
    int estado;                  // Estado do teste.
    void setUp();                // Método para criar unidade em teste.
    void tearDown();             // Método para destruir unidade em teste.
    void testarCenarioSucesso(); // Cenário de teste.
    void testarCenarioFalha();   // Cenário de teste.

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
    const std::string VALOR_VALIDO = "Ex. de Titulo valido";
    const std::string VALOR_INVALIDO = "Ex.. de Titulo invalido";
    Titulo *titulo;              // Referência para unidade em teste.
    int estado;                  // Estado do teste.
    void setUp();                // Método para criar unidade em teste.
    void tearDown();             // Método para destruir unidade em teste.
    void testarCenarioSucesso(); // Cenário de teste.
    void testarCenarioFalha();   // Cenário de teste.

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
    const std::string VALOR_VALIDO = "John D. Doe";
    const std::string VALOR_INVALIDO = "John D. D.oe";
    Nome *nome;                  // Referência para unidade em teste.
    int estado;                  // Estado do teste.
    void setUp();                // Método para criar unidade em teste.
    void tearDown();             // Método para destruir unidade em teste.
    void testarCenarioSucesso(); // Cenário de teste.
    void testarCenarioFalha();   // Cenário de teste.

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
    const std::string VALOR_VALIDO = "04:58";
    const std::string VALOR_INVALIDO = "04:65";
    Horario *horario;            // Referência para unidade em teste.
    int estado;                  // Estado do teste.
    void setUp();                // Método para criar unidade em teste.
    void tearDown();             // Método para destruir unidade em teste.
    void testarCenarioSucesso(); // Cenário de teste.
    void testarCenarioFalha();   // Cenário de teste.

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
    const int VALOR_VALIDO = 5;   // Definição de constante para evitar número mágico.
    const int VALOR_INVALIDO = 9; // Definição de constante para evitar número mágico.
    Nota *nota;                   // Referência para unidade em teste.
    int estado;                   // Estado do teste.
    void setUp();                 // Método para criar unidade em teste.
    void tearDown();              // Método para destruir unidade em teste.
    void testarCenarioSucesso();  // Cenário de teste.
    void testarCenarioFalha();    // Cenário de teste.

public:
    const static int SUCESSO = 0; // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definição de constante para reportar resultado de teste.
    int run();                    // Método para executar teste.
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade da classe Idioma. matrícula: 15/0016999

class TUIdioma
{
private:
    const std::string VALOR_VALIDO = "Chines Mandarim";
    const std::string VALOR_INVALIDO = "Chines";
    Idioma *idioma;              // Referência para unidade em teste.
    int estado;                  // Estado do teste.
    void setUp();                // Método para criar unidade em teste.
    void tearDown();             // Método para destruir unidade em teste.
    void testarCenarioSucesso(); // Cenário de teste.
    void testarCenarioFalha();   // Cenário de teste.

public:
    const static int SUCESSO = 0; // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definição de constante para reportar resultado de teste.
    int run();                    // Método para executar teste.
};

#endif // TESTES_H_INCLUDED
