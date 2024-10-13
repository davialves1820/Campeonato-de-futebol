/*Classe juiz (Deriva de pessoa com Herança Pública)
Atributos:
partidas_arbitradas (int): Número total de partidas arbitradas.
Métodos:
Construtor que inicializa os atributos.
Gets e sets para os atributos privados.
Método void incrementar_partidas_arbitradas() que incrementa o número departidas arbitradas.
Implementação de exibir_informacoes() que exibe o número de partidas arbitradas*/

#ifndef JUIZ_H
#define JUIZ_H

#include "Pessoa.h"

class Referee : public Person {
    // Atributos
    int refereed_matches;
public:
    // Construtor
    Referee(const string& n, int a, int r = 0);
    
    // Get e set refereed_matches
    void set_refereed(int r);

    int get_refereed() const;

    // Incrementar partidas
    void add_matches();

    // Sobreescrevendo para a classe não ser abstrata
    void show_info() const override;
};

#endif