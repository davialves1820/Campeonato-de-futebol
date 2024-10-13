#include "Campeonato.h"

Tournament::Tournament(const string& n) : name(n), array_team(0) ,array_games(0) {}

void Tournament::set_name(const string& n) {
    name = n;
}

string Tournament::get_name() const {
    return name;
}

void Tournament::add_team(const shared_ptr<Team> t) {
    if (array_team < ARRAY_TEAMS_SIZE) { // Verifica se o numero de times no torneio chegou ao limite, caso nao adiciona um novo time
        teams[array_team] = t;
        array_team++;
    } else { // Exibe uma mensagem mostrando que o limite foi atingido
        cout << "Limit teams exceeded" << endl;
    }
}


void Tournament::add_game(const Game& g) {
    if (array_games < ARRAY_GAME_SIZE) { // Verrifica se o numero de jogos no torneio chegou ao limite
        games[array_games] = g;
        array_games++;
    } else { // Exibe uma mensagem mostrando que o limite foi atingido
        cout << "Limit games exceeded" << endl;
    }
}

// Função ordena os time deixando na posicação inicial o array o de maior pontuação e indo de forma descrescente
void Tournament::order_teams() {
    for (int i = 0; i < array_team; i++) {
        for (int j = 0; j < array_team - i - 1; j++) {
            if (teams[j]->get_points() < teams[j + 1]->get_points()) {
                shared_ptr<Team> t = teams[j];
                teams[j] = teams[j + 1];
                teams[j + 1] = t;
            }
        }
    }
}


void Tournament::show_classification() const { 
    cout << "Classification" << endl;
    cout << "Position   " << "Points" << endl; 
    for (int i = 0; i < array_team; i++) { // Looping para exibir a posição na tabela, nome do time e quantidade de pontos
        cout << i + 1 << "- " << teams[i]->get_name() << "\t" << teams[i]->get_points() << endl;
    }
}