/* Classe jogador (Deriva de membro_clube com Herança Pública)
Atributos:
posicao (string): Posição do jogador (goleiro, zagueiro, meio-campo, atacante).
POO-241-E002.md 2024-10-03
3 / 5
gols_marcados (int): Número total de gols marcados pelo jogador.
Métodos:
Construtor que inicializa os atributos.
Gets e sets para os atributos privados.
Implementação de calcular_salario() que retorna salario + (gols_marcados *
100).
Sobrecarga do operador < para comparar jogadores pelo número de gols.
*/

#ifndef JOGADOR_H
#define JOGADOR_H

#include "Membro_clube.h"

class Player : virtual public Club_member {
    // Atributos de Player
    string position;
    int goals_scored;
public:
    // Construtor
    Player(const string& n, int a, double s, const string& p, int g = 0); // Inicia a quantidade de gols em 0 por padrao
    Player();

    // Get e set position
    void set_position(const string& p);

    string get_position() const;

    // Get e set goals
    void set_goals(int g);

    int get_goals() const;

    // Sobreescreve para a classe não ser abstrata
    double calculates_salary() const override;
    
    // Sobreescreve para a classe não ser abstrata
    void show_info() const override;

    // Sobrecarga operador <
    bool operator<(const Player& p);
};

#endif