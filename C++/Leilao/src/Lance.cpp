#include "Lance.h"

Lance::Lance(Usuario usuario, float valor): usuario(usuario), valor(valor) {

}

float Lance::getValor() const {
    return valor;
}