#ifndef CODIGO_H
#define CODIGO_H

#include <string>

class Codigo
{
private:
  std::string codigo;
  std::string gerarCodigo(int);

public:
  Codigo(int codigo);
  ~Codigo();
};

#endif // CODIGO_H