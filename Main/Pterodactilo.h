#ifndef Pterodactilo_h
#define Pterodactilo_h
#include "Arduino.h"

class Pterodactilo {
  private:
    int x, y;
    int estado;
    int posicionVuelo;

  public:
    Pterodactilo(int posicionInicial);
    int obtenerEstado();
    void volar();  
    int obtenerPosicion(); 
};

#endif