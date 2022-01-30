#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"

#include <string>

using namespace std;

// Declara��es de classes que modelam resultados.


class Resultado {

protected:
    int valor;

public:

    // Declara��es de poss�veis resultados.

    const static int SUCESSO = 0;
    const static int FALHA   = 1;

    void setValor(int valor){
        this->valor = valor;
    }

    int getValor() const {
        return valor;
    }
};

class ResultadoAutenticacao:public Resultado {

private:
    Matricula matricula;

public:
    void setMatricula(const Matricula &matricula){      // passagem por refer�ncia.
        this->matricula = matricula;
    }

    Matricula getMatricula() const {
        return matricula;
    }
};

#endif // ENTIDADES_H_INCLUDED
