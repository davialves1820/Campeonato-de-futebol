/*4. Classe tecnico (Deriva de membro_clube com Herança Pública)
Atributos:
experiencia (int): Anos de experiência como técnico.
Métodos:
Construtor que inicializa os atributos.
Gets e sets para os atributos privados.
Implementação de calcular_salario() que retorna salario + (experiencia *
200).*/

#ifndef TECNICO_H
#define TECNICO_H

#include "Membro_clube.h"

class Manager : virtual public Club_member {
    // Atributos
    int experience;
public:
    // Construtor
    Manager(const string& n, int a, double s,int e);
    
    // Get e set experience
    void set_experience(int experience);

    int get_experience() const;

    // Sobreescrevendo para a classe não ser abstrata
    double calculates_salary() const override;
    
    // Sobreescrevendo para a classe não ser abstrata
    void show_info() const override;

};

#endif