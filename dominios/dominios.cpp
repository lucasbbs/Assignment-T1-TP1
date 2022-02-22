#include "dominios.h"
#include <set>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sstream>
#include <regex>

// Definições de métodos da classe Cidade.

std::string Cidade::cidades[16]{
    "Hong Kong",
    "Bangkok",
    "Macau",
    "Singapura",
    "Londres",
    "Paris",
    "Dubai",
    "Delhi",
    "Istambul",
    "Kuala",
    "Lumpur",
    "Nova Iorque",
    "Antalya",
    "Mumbai",
    "Shenzen",
    "Phuket"};

void Cidade::setCidade(std::string cidade)
{
    validar(cidade);
    this->cidade = cidade;
}

void Cidade::validar(std::string cidade)
{
    if (std::find(std::begin(cidades), std::end(cidades), cidade) == std::end(cidades))
    {
        throw std::invalid_argument("Informe uma cidade valida");
    }
}

Cidade::Cidade(){};

Cidade::Cidade(std::string cidade) : cidade{cidade}
{
    validar(cidade);
};
Cidade::~Cidade() {}

// Definições de métodos da classe C&oacute;digo.

int Codigo::contador{0};

void Codigo::validar(std::string codigo)
{
    std::regex str_expr("^(?:(?![0]{7})([0-9]{7}))$");
    if (!regex_match(codigo, str_expr))
    {
        throw std::invalid_argument("Informe um codigo valido");
    }
    int soma_numeros_pares{};
    int soma_numeros_impares{};
    int soma_total{};
    int numero_dobrado{};
    int resto{};

    for (std::string::size_type i = 0; i < codigo.size(); ++i)
    {
        if ((i + 1) % 2 == 0)
        {
            numero_dobrado = ((int)codigo[i] - 48) * 2;
            if (numero_dobrado > 9)
            {
                numero_dobrado -= 9;
            }
            soma_numeros_pares += numero_dobrado;
        }
        else
        {
            soma_numeros_impares += (int)codigo[i] - 48;
        }
    }

    if ((soma_numeros_impares + soma_numeros_pares) % 10 != 0)
    {
        throw std::invalid_argument("Informe um codigo valido");
    }
}

void Codigo::setCodigo(std::string codigo)
{
    validar(codigo);
    this->codigo = codigo;
};

Codigo::Codigo() {}

Codigo::Codigo(std::string codigo)
{
    validar(codigo);
    this->codigo = codigo;
}

Codigo::~Codigo() {}

// Definições de métodos da classe Data.
std::string Data::nomes_meses[12]{
    "Jan",
    "Fev",
    "Mar",
    "Abr",
    "Mai",
    "Jun",
    "Jul",
    "Ago",
    "Set",
    "Out",
    "Nov",
    "Dez"};

void Data::validar(std::string data)
{
    std::regex str_expr("^(?:(\\d\\d)\\-([A-Z][a-z]{2})\\-(\\d{4}))$");
    if (!regex_match(data, str_expr))
    {
        throw std::invalid_argument("Informe uma data v&aacute;lida");
    }

    std::stringstream ss_ano, ss_dia;
    std::string partes_data[3]{};
    std::string delimitador = "-";
    size_t posicao = 0;
    int i{0};

    while ((posicao = data.find(delimitador)) != std::string::npos)
    {
        partes_data[i] = data.substr(0, posicao);
        data.erase(0, posicao + delimitador.length());
        ++i;
    }

    partes_data[i] = data;
    int ano{};
    ss_ano << partes_data[2];
    ss_ano >> ano;

    int mes{};
    auto itr = std::find(Data::nomes_meses, Data::nomes_meses + 12, partes_data[1]);

    if (itr == std::end(Data::nomes_meses))
    {
        throw std::invalid_argument("Informe uma data valida");
    }

    mes = std::distance(Data::nomes_meses, itr) + 1;

    int dia{};
    ss_dia << partes_data[0];
    ss_dia >> dia;
    if (ano > ANO_MAX_VALIDO || ano < ANO_MIN_VALIDO)
        throw std::invalid_argument("Informe uma data valida");

    if (mes < 1 && mes > 12)
        throw std::invalid_argument("Informe uma data valida");

    if (dia < 1 && dia > 31)
        throw std::invalid_argument("Informe uma data valida");

    if (mes == 2)
    {
        if (ehAnoBissexto(ano))
        {
            if (!(dia <= 29))
                throw std::invalid_argument("Informe uma data valida");
        }
        else if (!(dia <= 28))
            throw std::invalid_argument("Informe uma data valida");
    }

    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && !(dia <= 30))
        throw std::invalid_argument("Informe uma data valida");
}

bool Data::ehAnoBissexto(int ano)
{
    return (((ano % 4 == 0) &&
             (ano % 100 != 0)) ||
            (ano % 400 == 0));
}

void Data::setData(std::string data)
{
    validar(data);
    this->data = data;
}

Data::Data(){};
Data::Data(std::string data) : data{data}
{
    validar(data);
}
Data::~Data() {}

// Definições de métode de classe Duração.
int Duracao::duracoes[5]{30, 60, 90, 120, 180};

void Duracao::setDuracao(int duracao)
{
    validar(duracao);
    this->duracao = duracao;
}

void Duracao::validar(int duracao)
{

    if (std::find(std::begin(duracoes), std::end(duracoes), duracao) == std::end(duracoes))
    {
        throw std::invalid_argument("Informe uma duracao valida");
    }
}

Duracao::Duracao(){};

Duracao::Duracao(int duracao) : duracao{duracao}
{
    validar(duracao);
};

Duracao::~Duracao() {}

// Definições de métodos da classe Email.
void Email::validar(std::string email)
{
    std::regex str_expr("^((?!\\.)(?!.*?\\.\\.)(?!.*?\\.\\@)[A-Za-z0-9\\.\\!\\#\\$\\%\\&\'\\*\\+\\-\\/\\=\?\\^\\_\\`\\{\\|\\}\\~]{1,64})@((?!\\.)(?!.*?\\.\\.)[A-Za-z0-9\\.\\-]{1,253})$");
    if (!regex_match(email, str_expr))
    {
        throw std::invalid_argument("Informe um email valido");
    }
};

void Email::setEmail(std::string email)
{
    validar(email);
    this->email = email;
};
Email::Email(std::string email) : email{email}
{
    validar(email);
};
Email::~Email(){};
Email::Email(){};

// Definições de métodos da classe Endereco.
void Endereco::validar(std::string endereco)
{
    std::regex str_expr("^(?:(?!.*[ ]{2})(?!.*[\\.]{2})(?:.{0,20}$))$");
    if (!regex_match(endereco, str_expr))
    {
        throw std::invalid_argument("Informe um endereco valido");
    }
};

void Endereco::setEndereco(std::string endereco)
{
    validar(endereco);
    this->endereco = endereco;
};
Endereco::Endereco(std::string endereco) : endereco{endereco}
{
    validar(endereco);
};
Endereco::~Endereco(){};
Endereco::Endereco(){};

// Definições de métodos da classe Descricao.
void Descricao::validar(std::string descricao)
{
    std::regex str_expr("^(?:(?!.*[ ][ ])(?!.*[\\.][\\.])(?:.{0,30}$))$");
    if (!regex_match(descricao, str_expr))
    {
        throw std::invalid_argument("Informe uma descricao valida");
    }
};

void Descricao::setDescricao(std::string descricao)
{
    validar(descricao);
    this->descricao = descricao;
};

Descricao::Descricao(){};

Descricao::Descricao(std::string descricao) : descricao{descricao}
{
    validar(descricao);
};
Descricao::~Descricao(){};

// Definições de métodos da classe Senha.
void Senha::caractersUnicos(std::string str)
{
    std::set<char> char_set;

    for (char c : str)
    {
        char_set.insert(c);
    }
    if (char_set.size() == str.size())
    {
    }
    else
    {
        throw std::invalid_argument("Informe uma senha valida");
    }
}
void Senha::validar(std::string senha)
{
    std::regex str_expr("(?=^[A-Za-z0-9]{6}$)((?=.*[0-9]))(?![.\n])(?=.*[A-Z])(?=.*[a-z]).*$");
    if (!regex_match(senha, str_expr))
    {
        throw std::invalid_argument(senha + "Informe uma senha valida");
    }
    caractersUnicos(senha);
};

void Senha::setSenha(std::string senha)
{
    validar(senha);
    this->senha = senha;
};

Senha::Senha(std::string senha) : senha{senha}
{
    validar(senha);
};

Senha::~Senha(){};
Senha::Senha(){};

// Definições de métodos da classe Titulo.
void Titulo::validar(std::string titulo)
{
    std::regex str_expr("^(?:(?!.*[ ]{2})(?!.*[\\.]{2})(?=^.{5,20}$)(?=.*[A-Z])(?=.*[a-z]).*)$");
    if (!regex_match(titulo, str_expr))
    {
        throw std::invalid_argument("Informe um titulo valido");
    }
};

void Titulo::setTitulo(std::string titulo)
{
    validar(titulo);
    this->titulo = titulo;
};

Titulo::Titulo(std::string titulo) : titulo{titulo}
{
    validar(titulo);
};

Titulo::Titulo(){};
Titulo::~Titulo(){};

// Definições de métodos da classe Nome.
void Nome::validar(std::string nome)
{

    std::regex str_expr("(?=^.{5,20}$)^[A-Z](?:\\.|[a-z]+)(?: [A-Z](?:\\.|[a-z]+))*$");
    if (!regex_match(nome, str_expr))
    {
        throw std::invalid_argument("Informe um nome valido");
    }
};

void Nome::setNome(std::string nome)
{
    validar(nome);
    this->nome = nome;
};

Nome::Nome(std::string nome) : nome{nome}
{
    validar(nome);
};

Nome::Nome(){};
Nome::~Nome(){};

// Definições de métodos da classe Horário.
void Horario::validar(std::string horario)
{
    std::regex str_expr("^([0-1]?[0-9]|2[0-3]):[0-5][0-9]$");
    if (!regex_match(horario, str_expr))
    {
        throw std::invalid_argument("Informe um horario valido");
    }
};

void Horario::setHorario(std::string horario)
{
    validar(horario);
    this->horario = horario;
};

Horario::Horario(std::string horario) : horario{horario}
{
    validar(horario);
};

Horario::Horario(){};
Horario::~Horario(){};

// Definições de métodos da classe Nota.
int Nota::notas[6]{0, 1, 2, 3, 4, 5};
void Nota::validar(int nota)
{
    if (std::find(std::begin(notas), std::end(notas), nota) == std::end(notas))
    {
        throw std::invalid_argument("Informe uma nota valida");
    }
};

void Nota::setNota(int nota)
{
    validar(nota);
    this->nota = nota;
};

Nota::Nota(int nota) : nota{nota}
{
    validar(nota);
};

Nota::Nota(){};
Nota::~Nota(){};

// Definições de métodos da classe Idioma
std::string Idioma::idiomas[10]{
    "Ingles",
    "Chines Mandarim",
    "Hindi",
    "Espanhol",
    "Frances",
    "Arabe",
    "Bengali",
    "Russo",
    "Portugues",
    "Indonesio"};

void Idioma::validar(std::string idioma)
{
    if (std::find(std::begin(idiomas), std::end(idiomas), idioma) == std::end(idiomas))
    {
        throw std::invalid_argument("Informe um idioma valido");
    }
}

Idioma::Idioma(std::string idioma) : idioma{idioma}
{
    validar(idioma);
}

void Idioma::setIdioma(std::string idioma)
{
    validar(idioma);
    this->idioma = idioma;
}

Idioma::Idioma() {}
Idioma::~Idioma() {}
