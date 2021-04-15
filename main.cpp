#include <iostream>

/*
 Esta es la función principal que se
 ejecuta cuando arranca el programa
 */
int main() {

  int x = 0; // Valor inicial de x

  char letra, num;
  letra = 'A'; // equivalente a asignar el número 65
  num = '1';   // equivalente a asignar el número 49

  letra *= 2;

  std::cout << "letra: " << letra << std::endl;
  return 0;
}

