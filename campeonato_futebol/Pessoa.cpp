#include "Pessoa.h"

int Person::counter = 0;
// Implementações dos metodos

Person::Person(const string& n, int a) : name(n), age(a) {
        counter++; // Incrementa toda vez que Pessoa é criada
    }

Person::Person() {
    counter++; // Incrementa toda vez que Pessoa é criada
}
Person::~Person() {
        counter--; // Decrementa toda vez que Pessoa é destruida
    }

void Person::set_name(const string& n) {
        name = n;
    }

string Person::get_name() const {
        return name;
    }

void Person::set_age(int a) {
        age = a;
    }

int Person::get_age() const {
        return age;
    }

int Person::get_counter() {
     return counter; // Retorna o valor do contador no momento da chamada
}

bool Person::operator==(const Person& p) {
    return (name == p.name) && (age == p.age);
}