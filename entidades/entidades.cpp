#include "entidades.h"

#include <string>
Nome Usuario::getNome() { return nome; }
Email Usuario::getEmail() { return email; }
Senha Usuario::getSenha() { return senha; }

void Usuario::setNome(const Nome &nome)
{
  this->nome = nome;
};
void Usuario::setEmail(const Email &email)
{
  this->email = email;
};
void Usuario::setSenha(const Senha &senha)
{
  this->senha = senha;
};

Usuario::Usuario() {}
Usuario::Usuario(std::string nome, std::string email, std::string senha) : nome{nome}, email{email}, senha{senha}
{
  // usuarios.push_back(this);
}
Usuario::~Usuario() {}