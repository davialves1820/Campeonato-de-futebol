#include "Tecnico.h"

Manager::Manager(const string& n, int a, double s, int e) : Club_member(n, a, s), experience(e) {}

void Manager::set_experience(int e) {
    experience = e;
}

int Manager::get_experience() const {
    return experience;
}

double Manager::calculates_salary() const {
    return get_salary() + (experience * 200); // Retorna salary mais bonus de 200 por ano de experiencia
}

void Manager::show_info() const {
    cout << "Manager" << endl;
    cout << "Name: " << get_name() << endl;
    cout << "Age: " << get_age() << endl;
    cout << "Salary" << get_salary() << endl;
    cout << "Experience: " << experience << endl;
}