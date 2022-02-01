#include "entidades.h"

#include <string>
std::string Usuario::getNome() { return nome.getNome(); }

Usuario::Usuario(std::string nome, std::string email, std::string senha) : nome{nome}, email{email}, senha{senha}
{
  usuarios.push_back(this);
}
Usuario::~Usuario() {}