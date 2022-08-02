#ifndef LEILOEIRO_USUARIO_H
#define LEILOEIRO_USUARIO_H
#include <string>

class Usuario{
private:
    std::string nome;
public:
    Usuario(std::string);
    std::string getNome() const;
};

#endif //LEILOEIRO_USUARIO_H
