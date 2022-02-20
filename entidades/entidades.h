#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "../dominios/dominios.h"

#include <string>
#include <vector>

// Declaração da classe Usuário. matrícula: 17/0149374

///
/// Classe que representa entidade Usuário e guarda instâncias de unidades Nome, Email e Senha
///
class Usuario
{
private:
    Nome nome;
    Email email;
    Senha senha;

public:
    ///
    /// Armazena instância de unidade Nome
    ///
    /// @param nome
    ///
    void setNome(const Nome &nome);

    ///
    /// Retorna instância armazenada de unidade Codigo
    ///
    /// @return Nome
    ///
    Nome getNome();
    ///
    /// Armazena instância de unidade Email
    ///
    /// @param nome
    ///
    void setEmail(const Email &email);
    ///
    /// Retorna instância armazenada de unidade Email
    ///
    /// @return Email
    ///
    Email getEmail();
    ///
    /// Armazena instância de unidade Senha
    ///
    /// @param nome
    ///
    void setSenha(const Senha &senha);
    ///
    /// Retorna instância armazenada de unidade Senha
    ///
    /// @return Senha
    ///
    Senha getSenha();

    Usuario();
    Usuario(std::string, std::string, std::string);
    ~Usuario();
};

// Declaração da classe Sessão. matrícula: 15/0016999

///
/// Classe que representa entidade Sessão e guarda instâncias de unidades Codigo, Data, Horario, Idioma
///

class Sessao
{
private:
    Codigo codigo;
    Data data;
    Horario horario;
    Idioma idioma;

public:
    ///
    /// Armazena instância de unidade Codigo
    ///
    /// @param codigo
    ///

    void setCodigo(const Codigo &);

    ///
    /// Retorna instância armazenada de unidade Codigo
    ///
    /// @return Codigo
    ///

    Codigo getCodigo() const;

    ///
    /// Armazena instância de unidade Data
    ///
    /// @param data
    ///

    void setData(const Data &);

    ///
    /// Retorna instância armazenada de unidade Data
    ///
    /// @return Data
    ///

    Data getData() const;

    ///
    /// Armazena instância de unidade Horario
    ///
    /// @param horario
    ///

    void setHorario(const Horario &);

    ///
    /// Retorna instância armazenada de unidade Horario
    ///
    /// @return Horario
    ///

    Horario getHorario() const;

    ///
    /// Armazena instância de unidade Idioma
    ///
    /// @param idioma
    ///

    void setIdioma(const Idioma &);

    ///
    /// Retorna instância armazenada de unidade Idioma
    ///
    /// @return Idioma
    ///

    Idioma getIdioma() const;
};

inline void Sessao::setCodigo(const Codigo &codigo)
{
    this->codigo = codigo;
}

inline Codigo Sessao::getCodigo() const
{
    return codigo;
}

inline void Sessao::setData(const Data &data)
{
    this->data = data;
}

inline Data Sessao::getData() const
{
    return data;
}

inline void Sessao::setHorario(const Horario &horario)
{
    this->horario = horario;
}

inline Horario Sessao::getHorario() const
{
    return horario;
}

inline void Sessao::setIdioma(const Idioma &idioma)
{
    this->idioma = idioma;
}

inline Idioma Sessao::getIdioma() const
{
    return idioma;
}
// Declaração de classe Avaliação

class Avaliacao
{
private:
	Codigo codigo; 
	Nota nota;
	Descricao descricao;

public:
	void setCodigo(const Codigo &codigo);
	Codigo getCodigo() const;
	
	void setNota(const Nota &nota);
	Nota getNota() const;
	
	void setDescricao(const Descricao &descricao);
	Descricao getDescricao() const;
};

inline void Avaliacao::setCodigo(const Codigo& codigo){
	this -> codigo = codigo;
}
inline codigo Avaliacao::getCodigo() const {
	return codigo;
}

inline void Avaliacao::setNota(const Nota& nota){
	this -> nota = nota;
}
inline codigo Avaliacao::getNota() const {
	return nota;
}

inline void Avaliacao::setDescricao(const Descricao& descricao){
	this -> Descricao = Descricao;
}
inline codigo Avaliacao::getDescricao() const {
	return descricao;
}

#endif // ENTIDADES_H_INCLUDED
