#ifndef _DATA_H_
#define _DATA_H_
#include <string>
#include <stdexcept>
#include <vector>
#include <array>

// Declaração da classe Cidade. matrícula: 17/0149374

///
/// Padrão para representação de cliente.
///
/// Regras de formato:
///
/// - Cidade é válida caso <b>seja informado</b> um valor dentro os seguintes: "Hong Kong", "Bangkok", "Macau", "Singapura", "Londres", "Paris", "Dubai", "Delhi", "Istambul", "Kuala", "Lumpur", "Nova Iorque", "Antalya", "Mumbai", "Shenzen", "Phuket".
/// - A classe também pode ser instanciada sem ter um valor definido, caso em que o atributo cidade não será instanciado
///
class Cidade
{
private:
    std::string cidade;
    void validar(std::string);
    static std::string cidades[16];

public:
    static std::vector<std::string> getCidades();

    ///
    /// Armazena o valor de cidade.
    ///
    /// @param cidade Cidade.
    ///
    /// @return void
    ///
    /// Lança exceção caso a cidade informada seja inválida.
    ///

    void setCidade(std::string cidade);
    ///
    /// Retorna cidade.
    ///
    /// @return Cidade.
    ///
    std::string getCidade() { return cidade; }
    ///
    /// Inicializa o objeto sem um valor definido para cidade.
    ///
    Cidade();
    ///
    /// Inicializa o objeto com a cidade informada caso a mesma seja válida.
    ///
    /// Lança exceção caso a cidade informada seja inválida.
    ///
    /// @param cidade Cidade.
    ///
    /// @throw invalid_argument
    ///
    Cidade(std::string cidade);
    ///
    /// Destrói o objeto instanciado
    ///
    ~Cidade();
};

// Declaração da classe Codigo. matrícula: 17/0149374

///
/// Padrão para representação de Código.
///
/// Regras de formato:
///
/// - Código é válido caso:
///     - seja uma string composta por <b>sete</b> dígitos
///     - seja diferente de 0000000
///     - atenda ao Algoritmo de Luhn, onde o último digito representa o dígito verificador.
///
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

    ///
    /// Armazena o valor de código.
    ///
    /// @param codigo Código.
    ///
    /// @return void
    ///
    /// Lança exceção caso o código informado seja inválido.
    ///
    void setCodigo(std::string codigo);
    ///
    /// Inicializa o objeto com um valor definido para o código, levando-se em consideração a quantidade de códigos existentes e o Algoritmo de Luhn.
    ///
    Codigo();
    ///
    /// Destrói o objeto instanciado
    ///
    ~Codigo();
};

// Declaração da classe Data. matrícula: 17/0149374

///
/// Padrão para representação de Data.
///
/// Regras de formato:
///
///- Data é válida caso seja uma string composta da seguinte forma <b>DD-MES-AAAA</b>:
///    - DD representa uma string numérica com valores de 01 a 31
///    - MES representa uma string com os valores de meses escritos na seguinte forma: "Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"
///    - AA representa uma inteiro com valores de 2000 a 9999
///- A classe também pode ser instanciada sem ter um valor definido, caso em que o atributo data não será instanciado
///
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
    ///
    /// Armazena o valor de data.
    ///
    /// @param data Data.
    ///
    /// @return void
    ///
    /// Lança exceção caso a data informada seja inválida.
    ///
    void setData(std::string);
    ///
    /// Retorna data.
    ///
    /// @return Data.
    ///
    inline std::string getData() { return data; }
    ///
    /// Inicializa o objeto sem um valor definido para data.
    ///
    Data();
    ///
    /// Inicializa o objeto com a data informada caso a mesma seja válida.
    ///
    /// Lança exceção caso a data informada seja inválida.
    ///
    /// @param data Data.
    ///
    /// @throw invalid_argument
    ///
    Data(std::string);
    ///
    /// Destrói o objeto instanciado
    ///
    ~Data();
};

// Declaração da classe Email. matrícula: 17/0149374

///
/// Padrão para representação de Email.
///
/// Regras de formato:
///
///- Email é válido caso seja uma string composta da seguinte forma <i>parte-local@domínio</i>:
///     - parte-local é composta por até 64 caracteres e possui as seguintes caracterísitcas:
///         - Caractere de parte local pode ser letra maiúscula (A-Z) ou minúscula (a-z).
///         - Caractere de parte local pode ser dígito (0-9).
///         - Caractere de parte local pode ser ! # $ % & ' * + - / = ? ^ _ ` { | } ~
///         - Caractere de parte local pode ser ponto (.) desde que não seja o primeiro ou o último caractere e que não ocorra em sequência.
///     - domínio é composto por até 253 caracteres e possui as seguintes caracterísitcas:
///         - Caractere de domínio pode ser letra maiúscula (A-Z) ou minúscula (a-z).
///         - Caractere de domínio pode ser dígito (0-9).
///         - Caractere de domínio pode ser hífen (-).
///         - Caractere de domínio pode ser ponto (.) desde que não seja o primeiro caractere e não ocorra em sequência.
///- A classe também pode ser instanciada sem ter um valor definido, caso em que o atributo email não será instanciado
///
class Email
{
private:
    std::string email;
    void validar(std::string);

public:
    ///
    /// Armazena o valor de email.
    ///
    /// @param email Email.
    ///
    /// @return void
    ///
    /// Lança exceção caso a email informada seja inválido.
    ///
    void setEmail(std::string);
    ///
    /// Retorna email.
    ///
    /// @return Email.
    ///
    inline std::string getEmail() { return email; }
    ///
    /// Inicializa o objeto sem um valor definido para email.
    ///
    Email();
    ///
    /// Inicializa o objeto com o email informado caso a mesmo seja válido.
    ///
    /// Lança exceção caso o email informado seja inválido.
    ///
    /// @param email Email.
    ///
    /// @throw invalid_argument
    ///
    Email(std::string);
    ///
    /// Destrói o objeto instanciado
    ///
    ~Email();
};

// Declaração da classe Endereco. matrícula: 17/0149374

///
/// Padrão para representação de Endereco.
///
/// Regras de formato:
///
///- Endereco é válido caso:
///     - seja uma string composta de 0 a 20 caracteres;
///     - Não haja espaços em branco em sequência.
///     - Não haja pontos (.) em sequência.
///- A classe também pode ser instanciada sem ter um valor definido, caso em que o atributo endereco não será instanciado
///

class Endereco
{
private:
    std::string endereco;
    void validar(std::string);

public:
    ///
    /// Armazena o valor de endereço.
    ///
    /// @param endereco Endereco.
    ///
    /// @return void
    ///
    /// Lança exceção caso o endereço informado seja inválido.
    ///
    void setEndereco(std::string);
    ///
    /// Retorna endereco.
    ///
    /// @return Endereco.
    ///
    inline std::string getEndereco() { return endereco; }
    ///
    /// Inicializa o objeto sem um valor definido para endereco.
    ///
    Endereco();
    ///
    /// Inicializa o objeto com o endereco informado caso o mesmo seja válido.
    ///
    /// Lança exceção caso o endereço informado seja inválido.
    ///
    /// @param endereco Endereco.
    ///
    /// @throw invalid_argument
    ///
    Endereco(std::string);
    ///
    /// Destrói o objeto instanciado
    ///
    ~Endereco();
};

// Declaração da classe Descricao. matrícula: 17/0149374

///
/// Padrão para representação de Descricao.
///
/// Regras de formato:
///
///- Descricao é válido caso:
///  - seja uma string composta de 0 a 30 caracteres;
///  - Não haja espaços em branco em sequência.
///  - Não haja pontos (.) em sequência.
///- A classe também pode ser instanciada sem ter um valor definido, caso em que o atributo descricao não será instanciado
///
class Descricao
{
private:
    std::string descricao;
    void validar(std::string);

public:
    ///
    /// Armazena o valor de descrição.
    ///
    /// @param descricao Descricao.
    ///
    /// @return void
    ///
    /// Lança exceção caso a descrição informado seja inválida.
    ///
    void setDescricao(std::string);
    ///
    /// Retorna descrição.
    ///
    /// @return Descricao.
    ///
    inline std::string getDescricao() { return descricao; }
    ///
    /// Inicializa o objeto sem um valor definido para descricao.
    ///
    Descricao();
    ///
    /// Inicializa o objeto com a descrição informada caso a mesma seja válida.
    ///
    /// Lança exceção caso a descrição informada seja inválida.
    ///
    /// @param descricao Descricao.
    ///
    /// @throw invalid_argument
    ///
    Descricao(std::string descricao);
    ///
    /// Destrói o objeto instanciado
    ///
    ~Descricao();
};

// Declaração da classe Senha. matrícula: 17/0149374

///
/// Padrão para representação de Senha.
///
/// Regras de formato:
///
///- Senha é válida caso seja uma string com o formato XXXXXX:
///  - Cada caractere X é letra (A-Z ou a-z) ou dígito (0-9).
///  - Não existe caractere repetido.
///  - Existe pelo menos uma letra maiúscula, uma letra minúscula e um dígito.
///- A classe também pode ser instanciada sem ter um valor definido, caso em que o atributo senha não será instanciado
///
class Senha
{
private:
    std::string senha;
    void validar(std::string);

public:
    ///
    /// Armazena o valor de descrição.
    ///
    /// @param senha Senha.
    ///
    /// @return void
    ///
    /// Lança exceção caso a senha informado seja inválido.
    ///
    void setSenha(std::string);
    ///
    /// Retorna senha.
    ///
    /// @return Senha.
    ///
    inline std::string getSenha() { return senha; }
    ///
    /// Inicializa o objeto sem um valor definido para senha.
    ///
    Senha();
    ///
    /// Inicializa o objeto com a senha informada caso a mesma seja válida.
    ///
    /// Lança exceção caso a senha informada seja inválida.
    ///
    /// @param senha Senha.
    ///
    /// @throw invalid_argument
    ///
    Senha(std::string senha);
    ///
    /// Destrói o objeto instanciado
    ///
    ~Senha();
};

// Declaração da classe Titulo. matrícula: 17/0149374
///
/// Padrão para representação de Titulo.
///
/// Regras de formato:
///
///- Titulo é válido caso:
///  - Seja uma string composta de 5 a 20 letras [A-Za-z].
///  - Não haja espaços em branco em sequência.
///  - Não haja pontos (.) em sequência.
///- A classe também pode ser instanciada sem ter um valor definido, caso em que o atributo titulo não será instanciado
///
class Titulo
{
private:
    std::string titulo;
    void validar(std::string);

public:
    ///
    /// Armazena o valor de titulo.
    ///
    /// @param titulo Titulo.
    ///
    /// @return void
    ///
    /// Lança exceção caso o título informado seja inválido.
    ///
    void setTitulo(std::string);
    ///
    /// Retorna título.
    ///
    /// @return Titulo.
    ///
    inline std::string getTitulo() { return titulo; }
    ///
    /// Inicializa o objeto sem um valor definido para titulo.
    ///
    Titulo();
    ///
    /// Inicializa o objeto com o titulo informado caso o mesmo seja válido.
    ///
    /// Lança exceção caso o titulo informado seja inválido.
    ///
    /// @param titulo Titulo.
    ///
    /// @throw invalid_argument
    ///
    Titulo(std::string);
    ///
    /// Destrói o objeto instanciado
    ///
    ~Titulo();
};

// Declaração da classe Nome. matrícula: 17/0149374

///
/// Padrão para representação de Nome.
///
/// Regras de formato:
///
///- Nome é válido caso:
///  - Cada caractere seja letra [A-Z] ou [a-z], ponto [.] ou espaço em branco.
///  - Ponto [.] seja precedido por letra.
///  - Ponto [.] seja último caractere ou seja seguido por um espaço em branco.
///  - Não haja espaços em branco em sequência.
///  - Primeira letra de cada termo seja letra maiúscula [A-Z].
///- A classe também pode ser instanciada sem ter um valor definido, caso em que o atributo nome não será instanciado
///
class Nome
{
private:
    std::string nome;
    void validar(std::string);

public:
    ///
    /// Armazena o valor de nome.
    ///
    /// @param nome Nome.
    ///
    /// @return void
    ///
    /// Lança exceção caso o nome informado seja inválido.
    ///
    void setNome(std::string);
    ///
    /// Retorna nome.
    ///
    /// @return Nome.
    ///
    inline std::string getNome() { return nome; }
    ///
    /// Inicializa o objeto sem um valor definido para nome.
    ///
    Nome();
    ///
    /// Inicializa o objeto com o nome informado caso o mesmo seja válido.
    ///
    /// Lança exceção caso o nome informado seja inválido.
    ///
    /// @param nome Nome.
    ///
    /// @throw invalid_argument
    ///
    Nome(std::string);
    ///
    /// Destrói o objeto instanciado
    ///
    ~Nome();
};

// Declaração da classe Horario. matrícula: 17/0149374

///
/// Padrão para representação de Horario.
///
/// Regras de formato:
///
///- Horario é válido caso seja uma string com o formato <b>HH:MM</b>, onde:
///     - HH representa uma string numérica com valores de 00 a 23
///     - MM representa uma string numérica com valroes de 00 a 59:
///- A classe também pode ser instanciada sem ter um valor definido, caso em que o atributo horario não será instanciado
///
class Horario
{
private:
    std::string horario;
    void validar(std::string);

public:
    ///
    /// Armazena o valor de horário.
    ///
    /// @param horario Horario.
    ///
    /// @return void
    ///
    /// Lança exceção caso o horario informado seja inválido.
    ///
    void setHorario(std::string);
    ///
    /// Retorna horário.
    ///
    /// @return Horario.
    ///
    inline std::string getHorario() { return horario; }
    ///
    /// Inicializa o objeto sem um valor definido para horario.
    ///
    Horario();
    ///
    /// Inicializa o objeto com o horario informado caso o mesmo seja válido.
    ///
    /// Lança exceção caso o horario informado seja inválido.
    ///
    /// @param horario Horario.
    ///
    /// @throw invalid_argument
    ///
    Horario(std::string horario);
    ///
    /// Destrói o objeto instanciado
    ///
    ~Horario();
};

// Declaração da classe Nota. matrícula: 17/0149374

///
/// Padrão para representação de Nota.
///
/// Regras de formato:
///
///- Nota é válida caso seja um valor inteiro entre 0 e 5:
///- A classe também pode ser instanciada sem ter um valor definido, caso em que o atributo nota não será instanciado
///
class Nota
{
private:
    std::string nota;
    void validar(std::string);

public:
    ///
    /// Armazena o valor de nota.
    ///
    /// @param nota Nota.
    ///
    /// @return void
    ///
    /// Lança exceção caso a nota informada seja inválida.
    ///
    void setNota(std::string);
    ///
    /// Retorna nota.
    ///
    /// @return Nota.
    ///
    inline std::string getNota() { return nota; }
    ///
    /// Inicializa o objeto sem um valor definido para nota.
    ///
    Nota();
    ///
    /// Inicializa o objeto com a nota informada caso a mesma seja válida.
    ///
    /// Lança exceção caso a nota informada seja inválida.
    ///
    /// @param horario Horario.
    ///
    /// @throw invalid_argument
    ///
    Nota(std::string);
    ///
    /// Destrói o objeto instanciado
    ///
    ~Nota();
};

// Declaração da classe Idioma - Matrícula: 15/0016999

class Idioma
{
private:
    static std::array<std::string, 10> idiomas;
    std::string idioma;
    void validar(std::string);

public:
    void setIdioma(std::string);
    inline std::string getIdioma(void)
    {
        return idioma;
    }
};

#endif //_DATA_H_
