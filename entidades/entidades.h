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

    void setNome(std::string);
    inline Nome getNome() { return nome; }
    void setEmail(std::string);
    inline Email getEmail() { return email; }
    void setSenha(std::string);
    inline Senha getSenha() { return senha; }

    Usuario();
    Usuario(std::string, std::string, std::string);
    ~Usuario();
};

#endif // ENTIDADES_H_INCLUDED
