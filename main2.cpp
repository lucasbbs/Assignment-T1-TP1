#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sstream>

int main()
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
    if ((i) % 2 == 0)
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
  std::stringstream int_code(code);
  int x;
  int_code >> x;
  std::cout << code << std::endl;
  return 0;
}