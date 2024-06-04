#include "Pterodactilo.h"

Pterodactilo::Pterodactilo(int posicionInicial) {  
  x = posicionInicial;  
  posicionVuelo=1;
}

void Pterodactilo::volar() {   
  if(x > 0 && posicionVuelo) {
    x = x - 1;
  }
  else if (x > 0 && posicionVuelo) {
    x = x - 1;
  }
  else {
    x = 11;
  }  
}

int Pterodactilo::obtenerPosicion() {
  return x;
}