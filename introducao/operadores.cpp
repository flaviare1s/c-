#include <iostream>
#include <math.h>
using namespace std;

int main () {
  int a = 5, b = 2;
  int soma = a + b;
  int subtracao = a - b;
  int multiplicacao = a * b;
  int divisao = a / b;
  int resto = a % b;
  float div = (float)a / (float)b;

  float potencia = pow(a, b); // função retirada da biblioteca math.h

  cout << "Soma: " << soma << endl;
  cout << "Subtração: " << subtracao << endl;
  cout << "Multiplicação: " << multiplicacao << endl;
  cout << "Divisão: " << divisao << endl; // quociente
  cout << "Resto: " << resto << endl; // resto
  cout << "Divisão: " << div << endl; 
  cout << "Potência: " << potencia << endl;
  
  return 0;
}
