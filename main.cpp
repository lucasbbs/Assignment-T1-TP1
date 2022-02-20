#include <iostream>
#include <ctime>
#include <vector>
#include "dominios/dominios.h"
#include "dominios/testesDominios.h"
#include "entidades/entidades.h"
#include "entidades/testesEntidades.h"
#include <regex>

using namespace std;

vector<Codigo *> Codigo::codigos;

// vector<Usuario *> Usuario::usuarios;

int main()
{
     //-----------------------------------------------------------------------
     // Exemplo de teste de classe domínio.

     // Instanciar classe de teste do domínio código.

     TUCodigo testeCodigo;

     // Invocar método e apresentar mensagem acerca do resultado do teste.

     switch (testeCodigo.run())
     {
     case TUCodigo::SUCESSO:
          cout << "SUCESSO - CODIGO" << endl;
          break;
     case TUCodigo::FALHA:
          cout << "FALHA   - CODIGO" << endl;
          break;
     }

     // Instanciar classe de teste do domínio cidade.

     TUCidade testeCidade;

     // Invocar método e apresentar mensagem acerca do resultado do teste.

     switch (testeCidade.run())
     {
     case TUCidade::SUCESSO:
          cout << "SUCESSO - CIDADE" << endl;
          break;
     case TUCidade::FALHA:
          cout << "FALHA   - CIDADE" << endl;
          break;
     }

     // Instanciar classe de teste do domínio Data.

     TUData testeData;

     // Invocar método e apresentar mensagem acerca do resultado do teste.

     switch (testeData.run())
     {
     case TUData::SUCESSO:
          cout << "SUCESSO - DATA" << endl;
          break;
     case TUData::FALHA:
          cout << "FALHA   - DATA" << endl;
          break;
     }

     // Instanciar classe de teste do domínio Descricao.

     TUDescricao testeDescricao;

     // Invocar método e apresentar mensagem acerca do resultado do teste.

     switch (testeDescricao.run())
     {
     case TUDescricao::SUCESSO:
          cout << "SUCESSO - DESCRICAO" << endl;
          break;
     case TUDescricao::FALHA:
          cout << "FALHA   - DESCRICAO" << endl;
          break;
     }

     // Instanciar classe de teste do domínio Email.

     TUEmail testeEmail;

     // Invocar método e apresentar mensagem acerca do resultado do teste.

     switch (testeEmail.run())
     {
     case TUEmail::SUCESSO:
          cout << "SUCESSO - EMAIL" << endl;
          break;
     case TUEmail::FALHA:
          cout << "FALHA   - EMAIL" << endl;
          break;
     }

     // Instanciar classe de teste do domínio Endereco.

     TUEndereco testeEndereco;

     // Invocar método e apresentar mensagem acerca do resultado do teste.

     switch (testeEndereco.run())
     {
     case TUEndereco::SUCESSO:
          cout << "SUCESSO - ENDERECO" << endl;
          break;
     case TUEndereco::FALHA:
          cout << "FALHA   - ENDERECO" << endl;
          break;
     }

     // Instanciar classe de teste do domínio Horario.

     TUHorario testeHorario;

     // Invocar método e apresentar mensagem acerca do resultado do teste.

     switch (testeHorario.run())
     {
     case TUHorario::SUCESSO:
          cout << "SUCESSO - HORARIO" << endl;
          break;
     case TUHorario::FALHA:
          cout << "FALHA   - HORARIO" << endl;
          break;
     }

     // Instanciar classe de teste do domínio Nome.

     TUNome testeNome;

     // Invocar método e apresentar mensagem acerca do resultado do teste.

     switch (testeNome.run())
     {
     case TUNome::SUCESSO:
          cout << "SUCESSO - NOME" << endl;
          break;
     case TUNome::FALHA:
          cout << "FALHA   - NOME" << endl;
          break;
     }

     // Instanciar classe de teste do domínio Nota.

     TUNota testeNota;

     // Invocar método e apresentar mensagem acerca do resultado do teste.

     switch (testeNota.run())
     {
     case TUNota::SUCESSO:
          cout << "SUCESSO - NOTA" << endl;
          break;
     case TUNota::FALHA:
          cout << "FALHA   - NOTA" << endl;
          break;
     }

     // Instanciar classe de teste do domínio Senha.

     TUSenha testeSenha;

     // Invocar método e apresentar mensagem acerca do resultado do teste.

     switch (testeSenha.run())
     {
     case TUSenha::SUCESSO:
          cout << "SUCESSO - SENHA" << endl;
          break;
     case TUSenha::FALHA:
          cout << "FALHA   - SENHA" << endl;
          break;
     }

     // Instanciar classe de teste do domínio Titulo.

     TUTitulo testeTitulo;

     // Invocar método e apresentar mensagem acerca do resultado do teste.

     switch (testeTitulo.run())
     {
     case TUTitulo::SUCESSO:
          cout << "SUCESSO - TITULO" << endl;
          break;
     case TUTitulo::FALHA:
          cout << "FALHA   - TITULO" << endl;
          break;
     }

     TUIdioma testeIdioma;

     switch (testeIdioma.run())
     {
     case TUIdioma::SUCESSO:
          cout << "SUCESSO - IDIOMA" << endl;
          break;
     case TUIdioma::FALHA:
          cout << "FALHA - IDIOMA" << endl;
          break;
     }

     TUUsuario testeUsuario;

     switch (testeUsuario.run())
     {
     case TUUsuario::SUCESSO:
          cout << "SUCESSO - USUARIO" << endl;
          break;

     case TUUsuario::FALHA:
          cout << "FALHA - USUARIO" << endl;
          break;
     }

    // Instanciar classe de teste de entidade Sessao
    TUSessao testeSessao;

    // Invocar método e apressentar mensagem acerca do resultado do teste.
    switch (testeSessao.run())
    {
        case TUSessao::SUCESSO:
            cout << "SUCESSO - SESSAO" << endl;
            break;
        case TUSessao::FALHA:
            cout << "FALHA - SESSAO" << endl;
            break;
    }


     // string opcao{"0"};
     // std::regex str_expr("^[1-4]$");
     // while (!regex_match(opcao, str_expr))
     // {
     //      cout << "Voce deve escolher uma das seguintes opcoes: " << endl
     //           << "1 - Listar excursões disponíveis" << endl
     //           << "2 - Cadastrar" << endl
     //           << "3 - Fazer login" << endl
     //           << "4 - Sair" << endl;
     //      getline(cin, opcao);
     // }
     // if (opcao == "1")
     // {
     // }
     // else if (opcao == "2")
     // {
     //      std::string nome_string;
     //      while (true)
     //      {
     //           cout << "Para cadastrar um novo usuário você deve informar:" << endl
     //                << "nome: ";
     //           getline(cin, nome_string);
     //           try
     //           {
     //                Nome nome{nome_string};
     //                break;
     //           }
     //           catch (const std::exception &e)
     //           {
     //                std::cerr << e.what() << '\n';
     //           }
     //      }

     //      std::string email_string{};
     //      while (true)
     //      {
     //           cout << "Para cadastrar um novo usuário você deve informar:" << endl
     //                << "email: ";
     //           getline(cin, email_string);
     //           try
     //           {
     //                Email email{email_string};
     //                break;
     //           }
     //           catch (const std::exception &e)
     //           {
     //                std::cerr << e.what() << '\n';
     //           }
     //      }
     //      std::string senha_string{};
     //      while (true)
     //      {

     //           cout << "Para cadastrar um novo usuário você deve informar:" << endl
     //                << "senha: ";
     //           getline(cin, senha_string);
     //           try
     //           {
     //                Senha senha{senha_string};
     //                break;
     //           }
     //           catch (const std::exception &e)
     //           {
     //                std::cerr << e.what() << '\n';
     //           }
     //      }
     //      Usuario user{nome_string, email_string, senha_string};

     //      user.getNome();
     // }

     return 0;
}
