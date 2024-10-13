/*Classe tecnico_jogador (Herança Múltipla de jogador e tecnico com Herança Virtual)
Atributos:
bonus_duplo_papel (double): Bônus por atuar como técnico e jogador ao mesmo tempo.
Métodos:
Construtor que inicializa os atributos.
Gets e sets para os atributos privados.
Implementação de calcular_salario() que retorna jogador::calcular_salario()
+ tecnico::calcular_salario() + bonus_duplo_papel.
Sobrecarga do operador << para exibir informações detalhadas do tecnico_jogador.*/

#ifndef TECNICO_JOGADOR_H
#define TECNICO_JOGADOR_H

#include "Jogador.h"
#include "Tecnico.h"

class Manager_Player : public Manager, public Player {
    // Atributos
    double double_role_bonus;
public:
    // Construtor
    Manager_Player(const string& n, int a, double s, int e, const string& p, int g, double d_r_b);

    // Get e set double_role_bonus
    void set_double_role(double d);

    double get_double_role() const;

    // Sobreescrevendo para a classe não ser abstrata
    double calculates_salary() const override;

    // Sobreescrevendo para a classe não ser abstrata
    void show_info() const override;

    // Sobrecarga operador <<
    friend std::ostream& operator<<(std::ostream& out, const Manager_Player& m_p);
};

#endif