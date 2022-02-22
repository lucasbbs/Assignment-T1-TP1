#include "entidades.h"

#include <string>

// Métodos da classe de Entidade Usuario

Nome Usuario::getNome() { return nome; }

Email Usuario::getEmail() { return email; }

Senha Usuario::getSenha() { return senha; }

void Usuario::setNome(const Nome &nome)
{
  this->nome = nome;
};
void Usuario::setEmail(const Email &email)
{
  this->email = email;
};
void Usuario::setSenha(const Senha &senha)
{
  this->senha = senha;
};

Usuario::Usuario() {}

Usuario::Usuario(std::string nome, std::string email, std::string senha)
    : nome{nome}, email{email}, senha{senha}
{
}

Usuario::~Usuario() {}

// Métodos da classe de Entidade Sessao

Codigo Sessao::getCodigo() const { return codigo; }

Data Sessao::getData() const { return data; }

Horario Sessao::getHorario() const { return horario; }

Idioma Sessao::getIdioma() const { return idioma; }

void Sessao::setCodigo(const Codigo &codigo)
{
  this->codigo = codigo;
}

void Sessao::setData(const Data &data)
{
  this->data = data;
}

void Sessao::setHorario(const Horario &horario)
{
  this->horario = horario;
}

void Sessao::setIdioma(const Idioma &idioma)
{
  this->idioma = idioma;
}

Sessao::Sessao() {}

Sessao::Sessao(std::string codigo, std::string data, std::string horario, std::string idioma)
    : codigo{codigo}, data{data}, horario{horario}, idioma{idioma}
{
}

Sessao::~Sessao() {}

// Métodos da classe de Entidade Avaliacao

Codigo Avaliacao::getCodigo() const { return codigo; }

Nota Avaliacao::getNota() const { return nota; }

Descricao Avaliacao::getDescricao() const { return descricao; }

void Avaliacao::setCodigo(const Codigo &codigo)
{
  this->codigo = codigo;
}

void Avaliacao::setNota(const Nota &nota)
{
  this->nota = nota;
}

void Avaliacao::setDescricao(const Descricao &descricao)
{
  this->descricao = descricao;
}

Avaliacao::Avaliacao() {}

Avaliacao::Avaliacao(std::string codigo, int nota, std::string descricao)
    : codigo{codigo}, nota{nota}, descricao{descricao}
{
}

Avaliacao::~Avaliacao() {}
// Métodos da classe de Entidade Excursao

Codigo Excursao::getCodigo() { return codigo; }

Titulo Excursao::getTitulo() { return titulo; }

Nota Excursao::getNota() { return nota; }

Cidade Excursao::getCidade() { return cidade; }

Duracao Excursao::getDuracao() { return duracao; }

Descricao Excursao::getDescricao() { return descricao; }

Endereco Excursao::getEndereco() { return endereco; }

void Excursao::setCodigo(const Codigo &codigo)
{
  this->codigo = codigo;
};
void Excursao::setTitulo(const Titulo &titulo)
{
  this->titulo = titulo;
};
void Excursao::setNota(const Nota &nota)
{
  this->nota = nota;
};
void Excursao::setCidade(const Cidade &cidade)
{
  this->cidade = cidade;
};
void Excursao::setDuracao(const Duracao &duracao)
{
  this->duracao = duracao;
};
void Excursao::setDescricao(const Descricao &descricao)
{
  this->descricao = descricao;
};
void Excursao::setEndereco(const Endereco &endereco)
{
  this->endereco = endereco;
};

Excursao::Excursao() {}

Excursao::Excursao(std::string codigo, std::string titulo, int nota, std::string cidade, int duracao, std::string descricao)
    : codigo{codigo}, titulo{titulo}, nota{nota}, cidade{cidade}, duracao{duracao}, descricao{descricao}, endereco{endereco}
{
}
Excursao::~Excursao() {}