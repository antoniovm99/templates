#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include "pila.h"

int main(){
  pila<int> p;
  p.adicionar(8);
  p.adicionar(10);
  p.adicionar(20);
  p.mostrar();
}
