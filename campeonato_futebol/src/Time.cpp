#include "Time.h"

Team::Team(const string& n, Manager* m, int p) : name(n), manager(m), array_size(0), points(p) {}
Team::Team() {}

void Team::set_name(const string& n) {
    name = n;
}

string Team::get_name() const {
    return name;
}

void Team::set_points(int p) {
    points = p;
}

int Team::get_points() const {
    return points;
}

void Team::add_player(const Player& p) {
    if (array_size < TEAM_SIZE) { // Verifica se o numero de jogadores não chegou no limite 
        players[array_size] = p;
        array_size++;
    } else { // Exibe uma mensagem informando que chegou no limite
        cout << "Limit players exceeded" << endl;
    }
}

void Team::register_match(const char m) {
    if (m == 'V') { // Caso de vitoria
        points += 3;
    } else if (m == 'E') { // Caso de empate
        points += 1;
    } // Caso contrario desses o time soma 0 pontos
}

void Team::show_info() const {
    cout << "Team" << endl;
    cout << "Name: " << name << endl;
    cout << "Manager: " << manager->get_name() << endl;
    cout << "Players :" << endl;
    for (auto& p : players) { // Looping percorre todo o array de jogadores exibindo suas informações
        p.show_info();
    }
    cout << "Points: " << points << endl;
}

bool Team::operator<(const Team& t) { // Sobrecarga do operador <
    return (points < t.points);
}