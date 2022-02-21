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
    /// @param email
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
    /// @param senha
    ///
    void setSenha(const Senha &senha);
    ///
    /// Retorna instância armazenada de unidade Senha
    ///
    /// @return Senha
    ///
    Senha getSenha();
    ///
    /// Inicializa o objeto sem um valor definido para seus atributos.
    ///
    Usuario();
    ///
    /// Inicializa o objeto com o nome, email e senha informados caso os mesmos sejam válidos.
    ///
    /// Lança exceção caso algum dos dados informado não seja válido.
    ///
    /// @param nome Nome
    /// @param email Email
    /// @param senha Senha
    ///
    /// @throw invalid_argument
    ///
    Usuario(std::string nome, std::string email, std::string senha);
    ///
    /// Destrói o objeto instanciado
    ///
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
    ///
    /// Inicializa o objeto sem um valor definido para seus atributos.
    ///
    Sessao();
    ///
    /// Inicializa o objeto com a data, o horario e o idioma informados caso os mesmos sejam válidos.
    ///
    /// Lança exceção caso algum dos dados informado não seja válido.
    ///
    /// @param data Data
    /// @param horario Horario
    /// @param idioma Idioma
    ///
    /// @throw invalid_argument
    ///
    Sessao(std::string data, std::string horario, std::string idioma);
    ///
    /// Destrói o objeto instanciado
    ///
    ~Sessao();
};

// Declaração de classe Avaliação

class Avaliacao
{
private:
    Codigo codigo;
    Nota nota;
    Descricao descricao;

public:
    ///
    /// Armazena instância de unidade Codigo
    ///
    /// @param codigo
    ///
    void setCodigo(const Codigo &codigo);
    ///
    /// Retorna instância armazenada de unidade Codigo
    ///
    /// @return Codigo
    ///
    Codigo getCodigo() const;
    ///
    /// Armazena instância de unidade Nota
    ///
    /// @param nota
    ///
    void setNota(const Nota &nota);
    ///
    /// Retorna instância armazenada de unidade Nota
    ///
    /// @return Nota
    ///
    Nota getNota() const;
    ///
    /// Armazena instância de unidade Descricao
    ///
    /// @param descricao
    ///
    void setDescricao(const Descricao &descricao);
    ///
    /// Retorna instância armazenada de unidade Descricao
    ///
    /// @return Descricao
    ///
    Descricao getDescricao() const;
    ///
    /// Inicializa o objeto sem um valor definido para seus atributos.
    ///
    Avaliacao();
    ///
    /// Inicializa o objeto com a nota e a descricao informadas caso as mesmas sejam válidas.
    ///
    /// Lança exceção caso algum dos dados informado não seja válido.
    ///
    /// @param nota Nota
    /// @param descricao Descricao
    ///
    /// @throw invalid_argument
    ///
    Avaliacao(int nota, std::string descricao);
    ///
    /// Destrói o objeto instanciado
    ///
    ~Avaliacao();
};

// Declaração da classe Excursão. matrícula: 17/0149374

///
/// Classe que representa entidade Excursão e guarda instâncias de unidades Nome, Email e Senha
///
class Excursao
{
private:
    Codigo codigo;
    Titulo titulo;
    Nota nota;
    Cidade cidade;
    Duracao duracao;
    Descricao descricao;
    Endereco endereco;

public:
    ///
    /// Armazena instância de unidade Codigo
    ///
    /// @param codigo
    ///
    void setCodigo(const Codigo &codigo);
    ///
    /// Retorna instância armazenada de unidade Codigo
    ///
    /// @return Codigo
    ///
    Codigo getCodigo();
    ///
    /// Armazena instância de unidade Titulo
    ///
    /// @param titulo
    ///
    void setTitulo(const Titulo &titulo);
    ///
    /// Retorna instância armazenada de unidade Titulo
    ///
    /// @return Titulo
    ///
    Titulo getTitulo();
    ///
    /// Armazena instância de unidade Nota
    ///
    /// @param nota
    ///
    void setNota(const Nota &nota);
    ///
    /// Retorna instância armazenada de unidade Nota
    ///
    /// @return Nota
    ///
    Nota getNota();
    // Cidade
    ///
    /// Armazena instância de unidade Cidade
    ///
    /// @param cidade
    ///
    void setCidade(const Cidade &cidade);
    ///
    /// Retorna instância armazenada de unidade Cidade
    ///
    /// @return Cidade
    ///
    Cidade getCidade();
    // Duracao
    ///
    /// Armazena instância de unidade Duracao
    ///
    /// @param duracao
    ///
    void setDuracao(const Duracao &duracao);
    ///
    /// Retorna instância armazenada de unidade Duracao
    ///
    /// @return Duracao
    ///
    Duracao getDuracao();
    // Descricao
    ///
    /// Armazena instância de unidade Descricao
    ///
    /// @param descricao
    ///
    void setDescricao(const Descricao &descricao);
    ///
    /// Retorna instância armazenada de unidade Descricao
    ///
    /// @return Descricao
    ///
    Descricao getDescricao();
    // Endereco
    ///
    /// Armazena instância de unidade Endereco
    ///
    /// @param endereco
    ///
    void setEndereco(const Endereco &endereco);
    ///
    /// Retorna instância armazenada de unidade Endereco
    ///
    /// @return Endereco
    ///
    Endereco getEndereco();
    ///
    /// Inicializa o objeto sem um valor definido para seus atributos.
    ///
    Excursao();
    ///
    /// Inicializa o objeto com o titulo, a nota, a cidade, a duracao e a descricao informados caso os mesmos sejam válidos.
    ///
    /// Lança exceção caso algum dos dados informado não seja válido.
    ///
    /// @param titulo Titulo
    /// @param nota Nota
    /// @param cidade Cidade
    /// @param duracao Duracao
    /// @param descricao Descricao
    ///
    /// @throw invalid_argument
    ///
    Excursao(std::string titulo, int nota, std::string cidade, int duracao, std::string descricao);
    ///
    /// Destrói o objeto instanciado
    ///
    ~Excursao();
};

#endif // ENTIDADES_H_INCLUDED
