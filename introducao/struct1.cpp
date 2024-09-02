#include <iostream>
#include <string>
using namespace std;

struct ficha {
string nome;
int idade;
string nascimento;
float altura;
};


int main () {
  ficha pessoa;
  cin >> pessoa.nome;
  cin >> pessoa.idade;
  cin >> pessoa.nascimento;
  cin >> pessoa.altura;

  cout << pessoa.nome << " tem " << pessoa.idade << " anos, nasceu em " << pessoa.nascimento << " e mede " << pessoa.altura << "m" << endl;
  
  return 0;
}
