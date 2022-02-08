#include "entidades.h"

#include <string>
Nome Usuario::getNome() { return nome; }
Email Usuario::getEmail() { return email; }
Senha Usuario::getSenha() { return senha; }

Usuario::Usuario() {}
Usuario::Usuario(std::string nome, std::string email, std::string senha) : nome{nome}, email{email}, senha{senha}
{
  // usuarios.push_back(this);
}
Usuario::~Usuario() {}