#include <iostream>
using namespace std;

int main () {

  int inteiro;
  inteiro = 5;
  cout << inteiro << endl;

  float real;
  real  = 5.2;
  cout << real << endl;

  double realGrande;
  realGrande = 1.23456789012345;
  cout << realGrande << endl;

  bool booleano;
  booleano = true;
  cout << booleano << endl;

  char caracter;
  caracter = 'a'; // char usa aspas simples
  cout << caracter << endl;

  char letras[4];
  letras[0] = 'b';
  letras[1] = 'o';
  letras[2] = 'l';
  letras[3] = 'a';
  cout << letras << endl;

  string palavra;
  palavra = "batata"; // string usa aspas duplas
  cout << palavra << endl;

  return 0;
}
