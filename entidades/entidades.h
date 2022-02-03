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
    void setNome(std::string);
    Nome getNome();
    inline static std::vector<Usuario *> getUsuarios() { return usuarios; };
    void setEmail(std::string);
    Email getEmail();

    void setSenha(std::string);
    Senha getSenha();

    Usuario();
    Usuario(std::string, std::string, std::string);
    ~Usuario();
};

#endif // ENTIDADES_H_INCLUDED
