#ifndef _DATA_H_
#define _DATA_H_
#include <string>
#include <stdexcept>
#include <vector>

// Declara��o da classe Codigo.

// Declara��o da classe Senha.

class Senha
{

private:
    int valor;
    void validar(int); //throw(invalid_argument);

public:
    const static int SENHA_INVALIDA = 12345;

    void setValor(int); // trow(invalid_argument);

    int getValor() const
    {
        return valor;
    }
};
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
    void setData(std::string data);
    inline std::string getData() { return data; }
    Data(std::string data);
    ~Data();
};
#endif //_DATA_H_