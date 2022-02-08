#ifndef _DATA_H_
#define _DATA_H_
#include <string>
#include <stdexcept>
#include <vector>

// Declara��o da classe Cidade. matrícula: 17/0149374

class Cidade
{
private:
    std::string cidade;
    void validar(std::string);
    // static std::vector<std::string> cidades;
    static std::string cidades[16];

public:
    static std::vector<std::string> getCidades();
    void setCidade(std::string cidade);
    std::string getCidade() { return cidade; }
    Cidade();
    Cidade(std::string cidade);
    Cidade(std::string cidade, bool);
    ~Cidade();
};

// Declara��o da classe Codigo. matrícula: 17/0149374
class Codigo
{
private:
    static int contador;
    std::string codigo;
    void validar(std::string);
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

// Declara��o da classe Data. matrícula: 17/0149374

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
    Data();
    Data(std::string);
    ~Data();
};

// Declara��o da classe Email. matrícula: 17/0149374

class Email
{
private:
    std::string email;
    void validar(std::string);

public:
    void setEmail(std::string);
    inline std::string getEmail() { return email; }
    Email(std::string);
    ~Email();
    Email();
};

// Declara��o da classe Endereco. matrícula: 17/0149374

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
    Endereco();
};

// Declara��o da classe Descricao. matrícula: 17/0149374

class Descricao
{
private:
    std::string descricao;
    void validar(std::string);

public:
    void setDescricao(std::string);
    inline std::string getDescricao() { return descricao; }
    Descricao();
    Descricao(std::string);
    ~Descricao();
};

// Declara��o da classe Senha. matrícula: 17/0149374

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
    Senha();
};

// Declara��o da classe Titulo. matrícula: 17/0149374

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
    Titulo();
};

// Declara��o da classe Nome. matrícula: 17/0149374
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
    Nome();
};

// Declara��o da classe Horario. matrícula: 17/0149374

class Horario
{
private:
    std::string horario;
    void validar(std::string);

public:
    void setHorario(std::string);
    inline std::string getHorario() { return horario; }
    Horario(std::string);
    ~Horario();
    Horario();
};

// Declara��o da classe Nota. matrícula: 17/0149374

class Nota
{
private:
    std::string nota;
    void validar(std::string);

public:
    void setNota(std::string);
    inline std::string getNota() { return nota; }
    Nota(std::string);
    ~Nota();
    Nota();
};

#endif //_DATA_H_