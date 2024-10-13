/*Crie um campeonato chamado "Campeonato Quadrangular".
Cadastre quatro times diferentes.
Cada time deve ter um técnico e, pelo menos, 5 jogadores.
Cadastre um tecnico_jogador para um dos times.
Cadastre dois juizes.
Cadastre todos os jogos (cada time deve jogar contra todos os outros) e preencha os resultados (gols
marcados por cada time).
Exiba a tabela de classificação final com todos os jogos realizados e as pontuações finais de cada time.
*/

#include "Campeonato.h"
#include <memory>

using std::shared_ptr;

int main(void) {

    // Criado o torneio
    Tournament mundial("Mundial");
    
    // Jogadores do Belo
    Player jogador1("Dalton", 38,3900, "Goleiro");
    Player jogador2("Lenon", 34,4500, "Lateral");
    Player jogador3("Edmundo", 25,5200, "Volante");
    Player jogador4("Sillas", 29,6700, "Meia");
    Player jogador5("Pipico", 39,7000, "Atacante");
    
    // Treinador do belo
    Manager treinador1("Evaristo", 52, 6100, 5);
    
    // Criando BotafogoPb
    shared_ptr<Team> belo = std::make_shared<Team>("Botafogo-PB", &treinador1);
    
    // Adicionando os jogadores do belo
    belo->add_player(jogador1);
    belo->add_player(jogador2);
    belo->add_player(jogador3);
    belo->add_player(jogador4);
    belo->add_player(jogador5);

    // Jogadores do Fluminense
    Player jogador6("Fabio", 44,10000, "Goleiro");
    Player jogador7("Tiago Silva", 39,13200, "Zagueiro");
    Player jogador8("Marcelo", 34,12000, "Lateral");
    Player jogador9("Ganso", 37,20000, "Meia");
    Player jogador10("Cano", 37,18000, "Atacante");
    
    // Treinador do Fluminense
    Manager treinador2("Mano Menezes", 19, 10000, 5);
    
    // Criando Fluminense
    shared_ptr<Team> fluminense = std::make_shared<Team>("Fluminense", &treinador2, 0);
    
    // Adicionando os jogadores do Fluminense
    fluminense->add_player(jogador6);
    fluminense->add_player(jogador7);
    fluminense->add_player(jogador8);
    fluminense->add_player(jogador9);
    fluminense->add_player(jogador10);


    // Jogadores do Real Madrid
    Manager_Player treinador_jogador1("Anceloti", 64, 100000, 5, "Volante",0, 10); // Vai ser jogador e o treinador do time
    Player jogador11("Militao", 26,45000, "Zagueiro");
    Player jogador12("Endrick", 18,166000, "Atacante");
    Player jogador13("Vinicius", 24,132000, "Atacante");
    Player jogador14("Rodrygo", 23,196000, "Atacante");
    
    // Criando Real madrid
    shared_ptr<Team> real_madrid = std::make_shared<Team>("Real Madrid", &treinador_jogador1);
    
    // Adicionando os jogadores do real madrid
    real_madrid->add_player(treinador_jogador1);
    real_madrid->add_player(jogador11);
    real_madrid->add_player(jogador12);
    real_madrid->add_player(jogador13);
    real_madrid->add_player(jogador14);

    // Jogadores do Barcelona
    Player jogador15("Ter Stergen", 29,48000, "Goleiro");
    Player jogador16("Kounde", 25,31000, "Zagueiro");
    Player jogador17("Pedri", 21,73000, "Meia");
    Player jogador18("Yamal", 17,135000, "Atacante");
    Player jogador19("Lewandoski", 36,198000, "Atacante");
    
    // Treinador do Barcelona
    Manager treinador3("Hansi Flick", 42, 170000, 7);
    // Criando Barcelona
    shared_ptr<Team> barcelona = std::make_shared<Team>("Barcelona", &treinador3);
    
    // Adicionando os jogadores do Barcelona
    barcelona->add_player(jogador15);
    barcelona->add_player(jogador16);
    barcelona->add_player(jogador17);
    barcelona->add_player(jogador18);
    barcelona->add_player(jogador19);
    
    // Adicionando os times no torneio
    mundial.add_team(belo);
    mundial.add_team(fluminense);
    mundial.add_team(real_madrid);
    mundial.add_team(barcelona);

    // Tabela antes dos jogos
    cout << "Tabela antes jogos" << endl;
    mundial.show_classification();
    

    // Criando os arbritos
    shared_ptr<Referee> juiz1 =  std::make_shared<Referee>("Daronco", 14);
    shared_ptr<Referee> juiz2 =  std::make_shared<Referee>("Wilton Sampaio", 14);

    // Criando os jogos e colocando os seus resultados
    Game jogo1(belo, fluminense, juiz1);
    jogo1.register_result(2,2);

    Game jogo2(belo, real_madrid, juiz2);
    jogo2.register_result(1,0);
    
    Game jogo3(barcelona, belo, juiz2);
    jogo3.register_result(2,1);
    
    Game jogo4(real_madrid, fluminense, juiz1);
    jogo4.register_result(3,1);
    
    Game jogo5(fluminense, barcelona, juiz1);
    jogo5.register_result(4,0);
    
    Game jogo6(barcelona, real_madrid, juiz2);
    jogo6.register_result(2,4);

    // Adicionando os jogos ao torneio
    mundial.add_game(jogo1);
    mundial.add_game(jogo2);
    mundial.add_game(jogo3);
    mundial.add_game(jogo4);
    mundial.add_game(jogo5);
    mundial.add_game(jogo6);
    
    // Tabela apos o torneio
    cout << "Tabela apos jogos" << endl;
    mundial.order_teams();
    mundial.show_classification();

    return 0;
}