#include "Juiz.h" 

Referee::Referee(const string& n, int a, int r) : Person(n, a), refereed_matches(r) {}

void Referee::set_refereed(int r) {
    refereed_matches = r;
}

int Referee::get_refereed() const {
    return refereed_matches;
}

void Referee::add_matches() {
    refereed_matches++;
}

void Referee::show_info() const {
    cout << "Referee" << endl;
    cout << "Name: " << get_name() << endl;
    cout << "Age: " << get_age() << endl;
    cout << "Referred matches: " << refereed_matches << endl;
}