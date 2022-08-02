#include "../src/Avaliador.h"
#include <iostream>


int main(){
    //Given

    // Preparando o ambiente (Arrange)Given - Dado
    Lance primeiroLance(Usuario("Eduardo Alexandre"), 2000);
    Lance segundoLance(Usuario("Alexandre Eduardo"), 3000);
    Leilao leilao("Fiat 147 OKm");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);
    Avaliador leiloeiro;

    // Executando os tests (Act)When - Então
    leiloeiro.avalia(leilao);

    // Varificando se tudo deu certo (Assert)Then - Faça
    float valorEsperado = 3000;
    if(valorEsperado == leiloeiro.getMaiorValor()){
        std::cout << "BOA! Teste OK" << std::endl;
    }else{
        std::cout << "Ops! Test NOK" << std::endl;
    }
    //std::cout << leiloeiro.getMaiorValor() << std::endl;
    return 0;
}