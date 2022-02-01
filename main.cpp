#include <iostream>
#include <ctime>
#include <vector>
#include "dominios/dominios.h"
#include "entidades/entidades.h"
#include <regex>

using namespace std;

vector<string> Cidade::cidades;
vector<Codigo *> Codigo::codigos;

vector<Usuario *> Usuario::usuarios;

void mostrar_usuarios()
{
     vector<Usuario *> usuarios = Usuario::getUsuarios();
     cout << usuarios.size() << endl;
}

int main()
{
     mostrar_usuarios();
     Cidade hongKong{"Hong Kong"}, bangkok{"Bangkok"}, macau{"Macau"}, singapura{"Singapura"}, londres{"Londres"}, paris{"Paris"}, dubai{"Dubai"}, delhi{"Delhi"}, istambul{"Istambul"}, kuala{"Kuala"}, lumpur{"Lumpur"}, novaIorque{"Nova Iorque"}, antalya{"Antalya"}, mumbai{"Mumbai"}, shenzen{"Shenzen"}, phuket{"Phuket"};

     string opcao{"0"};
     std::regex str_expr("^[1-4]$");
     while (!regex_match(opcao, str_expr))
     {
          cout << "Voce deve escolher uma das seguintes opcoes: " << endl
               << "1 - Listar excursões disponíveis" << endl
               << "2 - Cadastrar" << endl
               << "3 - Fazer login" << endl
               << "4 - Sair" << endl;
          getline(cin, opcao);
     }
     if (opcao == "1")
     {
     }
     else if (opcao == "2")
     {
          std::string nome_string;
          while (true)
          {
               cout << "Para cadastrar um novo usuário você deve informar:" << endl
                    << "nome: ";
               getline(cin, nome_string);
               try
               {
                    Nome nome{nome_string};
                    break;
               }
               catch (const std::exception &e)
               {
                    std::cerr << e.what() << '\n';
               }
          }

          std::string email_string{};
          while (true)
          {
               cout << "Para cadastrar um novo usuário você deve informar:" << endl
                    << "email: ";
               getline(cin, email_string);
               try
               {
                    Email email{email_string};
                    break;
               }
               catch (const std::exception &e)
               {
                    std::cerr << e.what() << '\n';
               }
          }
          std::string senha_string{};
          while (true)
          {

               cout << "Para cadastrar um novo usuário você deve informar:" << endl
                    << "senha: ";
               getline(cin, senha_string);
               try
               {
                    Senha senha{senha_string};
                    break;
               }
               catch (const std::exception &e)
               {
                    std::cerr << e.what() << '\n';
               }
          }
          Usuario user{nome_string, email_string, senha_string};

          user.getNome();
     }
     mostrar_usuarios();

     return 0;
}