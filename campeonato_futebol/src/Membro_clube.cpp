#include "Membro_clube.h"

Club_member::Club_member(const string& name, int age, double s) : Person(name, age), salary(s) {}

Club_member::Club_member() {}

void Club_member::set_salary(double s) {
        salary = s;
    }

double Club_member::get_salary() const {
        return salary;
    }

std::ostream& operator<<(std::ostream& out, const Club_member& m) { 
    out << "Name: " << m.get_name() << "\nAge: " << m.get_age() << "\nSalary: " << m.get_salary();
    return out;
}

void Club_member::show_info() const {
    cout << *this << endl;
}

