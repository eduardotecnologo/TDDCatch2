#include "Leilao.h"

class Avaliador {
private:
    float maiorValor;
public:
    void avalia(Leilao);
    float getMaiorValor() const;
};