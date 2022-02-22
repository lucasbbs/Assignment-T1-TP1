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
  const std::string NOME_VALIDO = "John D. Doe";
  const std::string NOME_INVALIDO = "John D.. Doe";
  const std::string EMAIL_VALIDO = "john@doe.com";
  const std::string EMAIL_INVALIDO = "john.@doe.com";
  const std::string SENHA_VALIDA = "asd4WQ";
  const std::string SENHA_INVALIDA = "aaa4WQ";
  Usuario *usuario;            // Referência para unidade em teste.
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
// Declaração de classe para teste de unidade de classe Avaliacao. matrícula: 17/0149374

class TUAvaliacao
{
private:
  const std::string CODIGO_VALIDO = "9870452";
  const std::string CODIGO_INVALIDO = "9870458";
  const int NOTA_VALIDA = 5;    // Definição de constante para evitar número mágico.
  const int NOTA_INVALIDA = 10; // Definição de constante para evitar número mágico.
  const std::string DESCRICAO_VALIDA = "Um exemplo valido de descricao";
  const std::string DESCRICAO_INVALIDA = "Um   exemplo valido de descricao";
  Avaliacao *avaliacao;        // Referência para unidade em teste.
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
// Declaração de classe para teste de unidade de classe Excursão. matrícula: 17/0149374

class TUExcursao
{
private:
  const std::string CODIGO_VALIDO = "3835436";
  const std::string CODIGO_INVALIDO = "3835430";
  const std::string TITULO_VALIDO = "Uma Grande Excursao.";
  const std::string TITULO_INVALIDO = "Uma Grande Excur...";
  const int NOTA_VALIDA = 5;
  const int NOTA_INVALIDA = 10;
  const std::string CIDADE_VALIDA = "Nova Iorque";
  const std::string CIDADE_INVALIDA = "Moscow";
  const int DURACAO_VALIDA = 60;
  const int DURACAO_INVALIDA = 150;
  const std::string DESCRICAO_VALIDA = "A melhor excursao da sua vida";
  const std::string DESCRICAO_INVALIDA = "A melhor excursao da sua...";
  const std::string ENDERECO_VALIDO = "Rua Av. Brasil, 45";
  const std::string ENDERECO_INVALIDO = "Rua Av. Brasil, 45  ";
  Excursao *excursao;          // Referência para unidade em teste.
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
// Declaração de classe para teste de unidade de classe Sessão. matrícula: 15/0016999

class TUSessao
{
private:
  const std::string CODIGO_VALIDO{"5789458"};
  const std::string CODIGO_INVALIDO{"5789450"};
  const std::string DATA_VALIDA{"29-Fev-2020"};
  const std::string DATA_INVALIDA{"29-Fev-2021"};
  const std::string HORARIO_VALIDO{"04:58"};
  const std::string HORARIO_INVALIDO{"24:98"};
  const std::string IDIOMA_VALIDO{"Russo"};
  const std::string IDIOMA_INVALIDO{"Chines"};
  Sessao *sessao;              // Referência para unidade em teste.
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

#endif // TESTES_ENTIDADES_H_INCLUDED
