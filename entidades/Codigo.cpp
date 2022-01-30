#include "Codigo.h"
#include <iostream>
#include <string>
std::string Codigo::gerarCodigo(int)
{
  int n{6};
  int evenSum{};
  int oddSum{};
  int totalSum{};
  int randomNumber{};
  int doubleNumber{};
  int rest{};
  std::string code{};

  srand(time(NULL));
  for (int i = 0; i < n; i++)
  {
    randomNumber = rand() % (10);
    code += std::to_string(randomNumber);
    if ((i + 1) % 2 == 0)
    {
      doubleNumber = randomNumber * 2;
      if (doubleNumber > 9)
      {
        doubleNumber -= 9;
      }
      evenSum += doubleNumber;
    }
    else
    {
      oddSum += randomNumber;
    }
  }
  totalSum = oddSum + evenSum;
  rest = totalSum % 10;
  if (rest != 0)
  {
    rest = 10 - rest;
  }

  code += std::to_string(rest);
  return code;
}
Codigo::Codigo(int codigo)
{

  this->codigo = gerarCodigo(counter + 1);
}

Codigo::~Codigo()
{
}