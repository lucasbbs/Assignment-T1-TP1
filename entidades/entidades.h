#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "../dominios/dominios.h"

#include <string>
#include <vector>

class Usuario
{
private:
    // static std::vector<Usuario *> usuarios;

    Nome nome;
    Email email;
    Senha senha;

public:
    // inline static std::vector<Usuario *> getUsuarios() { return usuarios; };

    void setNome(const Nome &nome);
    Nome getNome();
    void setEmail(const Email &email);
    Email getEmail();
    void setSenha(const Senha &senha);
    Senha getSenha();

    Usuario();
    Usuario(std::string, std::string, std::string);
    ~Usuario();
};

#endif // ENTIDADES_H_INCLUDED
