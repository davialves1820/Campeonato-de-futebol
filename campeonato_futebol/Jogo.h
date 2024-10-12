/*. Classe jogo
Atributos:
time_casa (ponteiro para time): Time jogando em casa.
time_visitante (ponteiro para time): Time visitante.
juiz_principal (ponteiro para juiz): Juiz responsável pela partida.
gols_time_casa (int): Gols marcados pelo time da casa.
gols_time_visitante (int): Gols marcados pelo time visitante.
Métodos:
Construtor que inicializa os atributos.
Gets e sets para os atributos privados.
Método void registrar_resultado(int gols_casa, int gols_visitante) que
atualiza o resultado do jogo e ajusta a pontuação dos times envolvidos.
Implementação de exibir_informacoes() que exibe o resultado do jogo.
*/

#ifndef JOGO_H
#define JOGO_H

#include "Time.h"
#include "Juiz.h"
#include <memory>

using std::shared_ptr;

class Game {
    // Atributos de Game
    shared_ptr<Team> home_team;
    shared_ptr<Team> away_team;
    shared_ptr<Referee> referee;
    int home_goals;
    int away_goals;
public:
    // Construtor
    Game(shared_ptr<Team> h, shared_ptr<Team> a, shared_ptr<Referee>, int h_g = 0, int a_g = 0);
    Game();

    // Get e set home_goals
    void set_home(int g);

    int get_home() const;

    // Get e set away_goals
    void set_away(int g);

    int get_away() const;

    // Função que atualiza o resultado do jogo
    void register_result(int h, int a);

    // Exibe o placar e informações do jogo
    void show_info() const;
};

#endif