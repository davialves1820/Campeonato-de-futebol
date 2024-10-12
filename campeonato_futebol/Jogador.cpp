#include "Jogador.h"

Player::Player(const string& n, int a, double s, const string& p, int g) : Club_member(n, a, s), position(p), goals_scored(g) {}
Player::Player() {}

void Player::set_position(const string& p) {
    position = p;
}

string Player::get_position() const {
    return position;
}

void Player::set_goals(int g) {
    goals_scored = g;
}

int Player::get_goals() const {
    return goals_scored;
}

double Player::calculates_salary() const {
    return get_salary() + (goals_scored * 100); // Retorna salary mais bonus de 100 por gol marcado
}

void Player::show_info() const {
    cout << "Player" << endl;
    cout << "Name: " << get_name() << endl;
    cout << "Age: " << get_age() << endl;
    cout << "Salary: " << get_salary() << endl;
    cout << "Position: " << position << endl;
    cout << "Goals scored: " << goals_scored << endl;
}

// Sobrecarga do operador <
bool Player::operator<(const Player& p) {
    return (goals_scored < p.goals_scored);
}