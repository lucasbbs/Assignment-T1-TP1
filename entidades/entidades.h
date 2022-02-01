#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "../dominios/dominios.h"

#include <string>
#include <vector>

class Usuario
{
private:
    Nome nome;
    Email email;
    Senha senha;
    static std::vector<Usuario *> usuarios;

public:
    Nome setNome(std::string);
    std::string getNome();
    inline static std::vector<Usuario *> getUsuarios() { return usuarios; };
    Email setEmail(std::string);
    std::string getEmail();

    Senha setSenha(std::string);
    std::string getSenha();

    Usuario();
    Usuario(std::string, std::string, std::string);
    ~Usuario();
};

#endif // ENTIDADES_H_INCLUDED
