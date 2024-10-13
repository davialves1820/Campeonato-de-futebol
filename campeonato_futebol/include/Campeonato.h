/*Classe campeonato
Atributos:
nome_campeonato (string): Nome do campeonato.
times (vetor de objetos time): Lista de times no campeonato.
jogos (vetor de objetos jogo): Lista de jogos no campeonato.
Métodos:
Construtor que inicializa os atributos.
Gets e sets para os atributos privados.
Método void adicionar_time(const time &t) que adiciona um time ao campeonato.
Método void adicionar_jogo(const jogo &j) que adiciona um jogo ao campeonato.
POO-241-E002.md 2024-10-03
5 / 5
Método void exibir_classificacao() que exibe a tabela de classificação dos times
ordenados pela pontuação.
*/

#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include "Time.h"
#include "Jogo.h"
#include <memory>
#define ARRAY_TEAMS_SIZE 4 // Limita a quantidade de times no torneio
#define ARRAY_GAME_SIZE 12 // Limita a quantidade de jogos no torneio

using std::shared_ptr;

class Tournament {
    // Atributo de Tournament
    string name;
    shared_ptr<Team> teams[ARRAY_TEAMS_SIZE];
    int array_team; // Variavel para ajudar a controlar o tamanho do array de times
    Game games[ARRAY_GAME_SIZE];
    int array_games; // Variavel para ajudar a controlar o tamanho do array de jogos
public:
    // Construtor
    Tournament(const string& n);

    // Get e set name
    void set_name(const string& n);

    string get_name() const;

    // Função para adicionar time no torneio
    void add_team(const shared_ptr<Team> t);

    // Função para adicionar jogo no torneio
    void add_game(const Game& g);

    // Função para ordenar os times do que tem mais pontos para o que tem menos
    void order_teams();

    // Função que mostra a tabela do torneio
    void show_classification() const;
};

#endif