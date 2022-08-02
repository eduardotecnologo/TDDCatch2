#include "Avaliador.h"

void Avaliador::avalia(Leilao leilao){
    std::vector<Lance> lances = leilao.getLances();
    for(Lance lance : lances){
        if(lance.getValor() > maiorValor){
            maiorValor = lance.getValor();
        }
    }
}

float Avaliador::getMaiorValor() const{
    return maiorValor;
}