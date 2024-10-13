#include "Jogo.h" 
// Por padrao inicia a quantidade de gols dos time em 0
Game::Game(shared_ptr<Team> h, shared_ptr<Team> a, shared_ptr<Referee> r, int g_h, int g_a) : home_team(h), away_team(a), referee(r) ,home_goals(g_h), away_goals(g_a) {}
Game::Game() {}

void Game::set_home(int g = 0) {
    away_goals = g;
}

int Game::get_home() const {
    return home_goals;
}

void Game::set_away(int g = 0) {
    away_goals = g;
}

int Game::get_away() const {
    return home_goals;
}

// Atualiza o placar do jogo e adiciona regista se o time Venceu(V), Empatou(E), Perdeu(P)
void Game::register_result(int h, int a) {
    home_goals = h;
    away_goals = a;
    if (h > a) { // Vitoria time da casa
        home_team->register_match('V');
        away_team->register_match('P');
    } else if (a > h) { // Vitoria time visitante
        home_team->register_match('P');
        away_team->register_match('V');
    } else { // Empate
        home_team->register_match('E');
        away_team->register_match('E');
    }
}

// Exibe o placar e informações do jogo
void Game::show_info() const {
    cout << "Game" << endl;
    cout << home_team->get_name() << " " << home_goals << " vs " << away_goals << " " << away_team->get_name() << endl;
    cout << "Referee: " << referee->get_name();
}