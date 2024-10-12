#include "Tecnico_jogador.h"

Manager_Player::Manager_Player(const string& n, int a, double s, int e, const string& p, int g, double d_r_b) : Club_member(n, a, s), 
                                Manager(n, a, s, e), Player(n, a, s, p, g), double_role_bonus(d_r_b) {}

void Manager_Player::set_double_role(double d) {
    double_role_bonus = d;
}

double Manager_Player::get_double_role() const {
    return double_role_bonus;
}

double Manager_Player::calculates_salary() const {
    return Manager::calculates_salary() + Player::calculates_salary() + double_role_bonus; // Retorna a soma dos salarios calculados por manager e player mais o bonus
}

std::ostream& operator<<(std::ostream& out, const Manager_Player& m_p) {
    out << "Name: " << m_p.get_name() << "\nAge: " << m_p.get_age() << "\nSalary: " << m_p.calculates_salary() << "\nExperience: " << m_p.get_experience() 
    << "\nPosition: " << m_p.get_position() << "\nGoals: " << m_p.get_goals();
    return out;
}

void Manager_Player::show_info() const {
    cout << *this << endl;
}