/*
Classe Base pessoa (Classe Abstrata)
Atributos:
contador (static)
nome (string): Nome completo da pessoa.
idade (int): Idade da pessoa.
Métodos:
Construtor que inicializa os atributos com valores padrão.
Gets e sets para os atributos privados.
Método virtual void exibir_informacoes() (virtual puro) para exibir as informações
da pessoa (exibido em classes derivadas), (exibido em classes derivadas).

Sobrecarga do operador == para comparar pessoas com base no nome e idade.
*/

#ifndef PESSOA_H
#define PESSOA_H

#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

class Person {
    // Atributos de Pessoa
    static int counter;
    string name;
    int age;
public:
    // Construtor
    Person(const string& n, int a);
    Person();

    // Destrutor
    ~Person();

    // Get e set de name
    void set_name(const string& n);

    string get_name() const;

    // Get e set de age
    void set_age(int a);

    int get_age() const;

    // Retorna o valor de contador, para saber quantas pessoas foram instanciadas
    static int get_counter();

    // Metodo virtual puro para tornar a classe abstrata
    virtual void show_info() const = 0;

    // Sobrecarga do operador == para comparar pessoas com base no nome e idade.
    bool operator==(const Person& p);
};


#endif