#include "dominios.h"
#include <set>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sstream>
#include <regex>

// using namespace std;

// Definições de métodos da classe Cidade.

void Cidade::setCidade(std::string cidade)
{
    validar(cidade);
    this->cidade = cidade;
}

void Cidade::validar(std::string cidade)
{
    if (std::find(cidades.begin(), cidades.end(), cidade) == cidades.end())
    {
        throw std::invalid_argument("Informe um valor válido para cidade");
    }
}

Cidade::Cidade(){};

Cidade::Cidade(std::string cidade) : cidade{cidade}
{
    this->cidades.push_back(this->cidade);
};

std::vector<std::string> Cidade::getCidades() { return cidades; }
Cidade::~Cidade() {}

// Definições de métodos da classe C&oacute;digo.

int Codigo::contador{0};

std::string Codigo::gerarCodigo(int number)
{
    std::stringstream str;
    int n{6};
    int evenSum{};
    int oddSum{};
    int totalSum{};
    int doubleNumber{};
    int rest{};
    std::string code{};

    code += std::to_string(number);
    code.insert(code.begin(), 6 - code.length(), '0');

    for (std::string::size_type i = 0; i < code.size(); ++i)
    {
        if ((i + 1) % 2 == 0)
        {
            doubleNumber = ((int)code[i] - 48) * 2;
            if (doubleNumber > 9)
            {
                doubleNumber -= 9;
            }
            evenSum += doubleNumber;
        }
        else
        {
            oddSum += (int)code[i] - 48;
        }
    }
    totalSum = oddSum + evenSum;

    rest = totalSum % 10;
    if (rest != 0)
    {
        rest = 10 - rest;
    }
    code += std::to_string(rest);
    // cout << code << " This is the number being displayed" << endl;
    return code;
}

void Codigo::validar(std::string codigo)
{
    std::stringstream str;
    int n{6};
    int evenSum{};
    int oddSum{};
    int totalSum{};
    int doubleNumber{};
    int rest{};
    std::string code{};

    for (std::string::size_type i = 0; i < codigo.size(); ++i)
    {
        if ((i + 1) % 2 == 0)
        {
            doubleNumber = ((int)codigo[i] - 48) * 2;
            if (doubleNumber > 9)
            {
                doubleNumber -= 9;
            }
            evenSum += doubleNumber;
        }
        else
        {
            oddSum += (int)codigo[i] - 48;
        }
    }

    if ((oddSum + evenSum) % 10 != 0)
    {
        throw std::invalid_argument("Informe um código correto");
    }
}
std::vector<Codigo *> Codigo::getCodigos() { return codigos; }

void Codigo::setCodigo(std::string codigo)
{
    validar(codigo);
    this->codigo = codigo;
    ++contador;
    codigos.push_back(this);
};

Codigo::Codigo()
{
    this->codigo = gerarCodigo(contador + 1);
    ++contador;
    codigos.push_back(this);
}

Codigo::Codigo(const Codigo &src) : codigo{src.codigo}
{
    this->codigo = gerarCodigo(contador + 1);
    codigos.push_back(this);
    ++contador;
}

Codigo::Codigo(Codigo &&src) : codigo{std::move(src.codigo)}
{
    this->codigo = gerarCodigo(contador + 1);
    codigos.push_back(this);
    ++contador;
}

Codigo::~Codigo()
{
    //codigos.erase(std::find(codigos.begin(), codigos.end(), this));
}

// Defini��es de m�todos da classe Data.
std::string Data::nomes_meses[12]{"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};

void Data::validar(std::string data)
{
    std::regex str_expr("^(?:(\\d\\d)\\/([A-Z][a-z]{2})\\/(\\d{4})|([a-z]{3})\\/(\\d\\d)\\/(\\d{4}))$");
    if (!regex_match(data, str_expr))
    {
        throw std::invalid_argument("Informe uma data v&aacute;lida");
    }

    std::stringstream ss, ss_dia;
    std::string date_parts[3]{};
    std::string s = data;
    std::string delimiter = "/";
    size_t pos = 0;
    std::string token;
    int i{0};

    while ((pos = s.find(delimiter)) != std::string::npos)
    {
        token = s.substr(0, pos);
        date_parts[i] = token;
        s.erase(0, pos + delimiter.length());
        ++i;
    }

    date_parts[i] = s;
    int ano{};
    ss << date_parts[2];
    ss >> ano;

    int mes{};
    auto itr = std::find(Data::nomes_meses, Data::nomes_meses + 12, date_parts[1]);

    if (itr == std::end(Data::nomes_meses))
    {
        throw std::invalid_argument("Voc&ecirc; deve informar uma data v&aacute;lida");
    }

    mes = std::distance(Data::nomes_meses, itr) + 1;

    int dia{};
    ss_dia << date_parts[0];
    ss_dia >> dia;
    if (ano > ANO_MAX_VALIDO ||
        ano < ANO_MIN_VALIDO)

        throw std::invalid_argument("Informe uma data v&aacute;lida");
    if (mes < 1 && mes > 12)

        throw std::invalid_argument("Voc&ecirc; deve informar um m&ecirc;s v&aacute;lido");
    if (dia < 1 && dia > 31)

        throw std::invalid_argument("Voc&ecirc; deve informar um dia v&aacute;lido");

    if (mes == 2)
    {
        if (ehAnoBissexto(ano))
        {
            if (!(dia <= 29))
                throw std::invalid_argument("Informe uma data v&aacute;lida");
        }
        else if (!(dia <= 28))
            throw std::invalid_argument("Informe uma data v&aacute;lida");
    }

    if ((mes == 4 || mes == 6 ||
         mes == 9 || mes == 11) &&
        !(dia <= 30))
        throw std::invalid_argument("Informe uma data v&aacute;lida");
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

// Defini��es de m�todos da classe Email.

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

// Defini��es de m�todos da classe Endereco.

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

// Defini��es de m�todos da classe Descricao.

void Descricao::validar(std::string descricao)
{
    std::regex str_expr("^(?:(?!.*[ ][ ])(?!.*[\\.][\\.])(?:.{0,30}$))$");
    if (!regex_match(descricao, str_expr))
    {
        throw std::invalid_argument("Informe um descricao valido");
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

// Defini��es de m�todos da classe Senha.

void uniqueCharacters(std::string str)
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
    std::regex str_expr("(?=^[A-Za-z0-9]{6,6}$)((?=.*[0-9]))(?![.\n])(?=.*[A-Z])(?=.*[a-z]).*$");
    if (!regex_match(senha, str_expr))
    {
        throw std::invalid_argument(senha + " informe uma senha valida");
    }
    uniqueCharacters(senha);
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

// Defini��es de m�todos da classe Titulo.

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

// Defini��es de m�todos da classe Nome.

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

// Defini��es de m�todos da classe Horario.

void Horario::validar(std::string horario)
{
    std::regex str_expr("^([0-1]?[0-9]|2[0-3]):[0-5][0-9]$");
    if (!regex_match(horario, str_expr))
    {
        throw std::invalid_argument("Informe um horário valido");
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

void Nota::validar(std::string nota)
{
    std::regex str_expr("^[0-5]$");
    if (!regex_match(nota, str_expr))
    {
        throw std::invalid_argument("Informe um horário valido");
    }
};

void Nota::setNota(std::string nota)
{
    validar(nota);
    this->nota = nota;
};

Nota::Nota(std::string nota) : nota{nota}
{
    validar(nota);
};

Nota::Nota(){};
Nota::~Nota(){};


// Definições de métodos da classe Idioma

std::array<std::string, 10> Idioma::IDIOMAS = {"Ingles", "Chines Mandarim", "Hindi", "Espanhol", "Frances", "Arabe", "Bengali", "Russo", "Portugues", "Indonesio"};

void Idioma::validar(std::string idioma) {
    if (std::find(IDIOMAS.begin(), IDIOMAS.end(), idioma) == IDIOMAS.end()) {
        throw std::invalid_argument("Argumento Invalido");
    }
}

void Idioma::setIdioma(std::string idioma) {
    validar(idioma);
    this->idioma = idioma;
}
