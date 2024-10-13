/*Classe time
POO-241-E002.md 2024-10-03
4 / 5
Atributos:
nome (string): Nome do time.
tecnico (ponteiro para tecnico): Técnico do time.
jogadores (vetor de objetos jogador): Lista de jogadores do time.
pontuacao (int): Pontuação total do time.
Métodos:
Construtor que inicializa os atributos.
Gets e sets para os atributos privados.
Método void adicionar_jogador(const jogador &j) que adiciona um jogador ao
time.
Método void registrar_resultado(char resultado) que atualiza as estatísticas e a
pontuação do time com base no resultado ('V' para vitória, 'E' para empate, 'D' para
derrota).
Método void exibir_informacoes() que exibe as informações completas do time.
Sobrecarga do operador < para comparar times pela pontuação total*/

#ifndef TIME_H
#define TIME_H

#include "Tecnico_jogador.h"
#include <memory>
#define TEAM_SIZE 5 // Constante para definir tamanho do array

using std::shared_ptr;

class Team {
    // Atributos de Team
    string name;
    Manager* manager;
    Player players[TEAM_SIZE];
    int array_size; // Variavel para ajudar a controlar tamanho do time
    int points;
public:
    Team(const string& n, Manager* m, int p = 0);
    Team();

    // Get e set name
    void set_name(const string& n);

    string get_name() const;

    // Get e set points
    void set_points(int p);

    int get_points() const;

    // Função para registrar um novo jogador
    void add_player(const Player& p);

    // Função para registrar o resultado da partida
    void register_match(const char m);

    // Função para exibir as informações do time
    void show_info() const;

    // Sobrecarga do operador <
    bool operator<(const Team& t);
};

#endif