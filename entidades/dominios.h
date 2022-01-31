#ifndef _DATA_H_
#define _DATA_H_
#include <string>
#include <stdexcept>
#include <vector>

// Declara��o da classe Cidade.

class Cidade
{
private:
    std::string nome;
    void validar(std::string);
    static std::vector<std::string> cidades;

public:
    static std::vector<std::string> getCidades();
    void setNome(std::string nome);
    std::string getNome() { return nome; }
    Cidade(std::string nome);
    ~Cidade();
};

// Declara��o da classe Codigo.
class Codigo
{
private:
    static int contador;
    std::string codigo;
    std::string gerarCodigo(int);
    static std::vector<Codigo *> codigos;

public:
    inline std::string getCodigo() { return codigo; }
    void setCodigo(std::string);
    static std::vector<Codigo *> getCodigos();
    Codigo();
    Codigo(const Codigo &src);
    Codigo(Codigo &&src);
    ~Codigo();
};

// Declara��o da classe Data.

class Data
{
private:
    std::string data;
    static const int ANO_MAX_VALIDO = 9999;
    static const int ANO_MIN_VALIDO = 2000;
    void validar(std::string);
    bool ehAnoBissexto(int);
    static std::string nomes_meses[12];

public:
    void setData(std::string);
    inline std::string getData() { return data; }
    Data(std::string);
    ~Data();
};

// Declara��o da classe Email.

class Email
{
private:
    std::string email_address;
    void validar(std::string);

public:
    void setEmail(std::string);
    inline std::string getEmail() { return email_address; }
    Email(std::string);
    ~Email();
};

// Declara��o da classe Endereco.

class Endereco
{
private:
    std::string endereco;
    void validar(std::string);

public:
    void setEndereco(std::string);
    inline std::string getEndereco() { return endereco; }
    Endereco(std::string);
    ~Endereco();
};

// Declara��o da classe Descricao.

class Descricao
{
private:
    std::string descricao;
    void validar(std::string);

public:
    void setDescricao(std::string);
    inline std::string getDescricao() { return descricao; }
    Descricao(std::string);
    ~Descricao();
};

// Declara��o da classe Senha.

class Senha
{
private:
    std::string senha;
    void validar(std::string);

public:
    void setSenha(std::string);
    inline std::string getSenha() { return senha; }
    Senha(std::string);
    ~Senha();
};

// Declara��o da classe Titulo.

class Titulo
{
private:
    std::string titulo;
    void validar(std::string);

public:
    void setTitulo(std::string);
    inline std::string getTitulo() { return titulo; }
    Titulo(std::string);
    ~Titulo();
};

// Declara��o da classe Nome.
class Nome
{
private:
    std::string nome;
    void validar(std::string);

public:
    void setNome(std::string);
    inline std::string getNome() { return nome; }
    Nome(std::string);
    ~Nome();
};

#endif //_DATA_H_