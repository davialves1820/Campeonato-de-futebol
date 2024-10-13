/*
Classe Base membro_clube (Deriva de pessoa com Herança Virtual)
Atributos:
salario (double): Salário do membro do clube.
Métodos:
Construtor que inicializa os atributos.
Gets e sets para os atributos privados.
Método virtual double calcular_salario() = 0 (método puramente virtual).
Sobrecarga do operador << para exibir informações do membro do clube
*/

#ifndef MEMBRO_CLUBE_H
#define MEMBRO_CLUBE_H

#include "Pessoa.h"

class Club_member : public Person {
    // Atributos de Membro_clube
    double salary;
public:
    // Construtor
    Club_member(const string& name, int age, double s);
    Club_member();

    // Get e set de salary
    void set_salary(double s);

    double get_salary() const;

    // Sobreescrever show_info()
    void show_info() const override;

    // Metodo virtual puro que torna a class abstrata
    virtual double calculates_salary() const = 0;

    // Sobrecarga o operador <<
    friend std::ostream& operator<<(std::ostream& out, const Club_member& m);
};

#endif