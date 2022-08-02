#include <vector>
#include <string>
#include "Lance.h"

class Leilao {
private:
    std::vector<Lance> lances;
    std::string descricao;
public:
    Leilao(std::string descricao);
    const std::vector<Lance>& getLances() const;
    void recebeLance(const Lance& lance);
};