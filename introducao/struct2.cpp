#include <iostream>
#include <string>
using namespace std;

struct dataNasc {
int dia;
string mes;
int ano;
};

struct ficha {
string nome;
int idade;
dataNasc nascimento;
float altura;
};


int main () {
  ficha pessoa;
  cout << "Digite o nome: ";
  getline(cin, pessoa.nome);
  
  cout << "Digite a idade: ";
  cin >> pessoa.idade;

  cout << "Digite o mês nascimento: ";
  cin >> pessoa.nascimento.mes;

  cout << "Digite a altura: ";
  cin >> pessoa.altura;

  cout << pessoa.nome << " tem " << pessoa.idade << " anos, nasceu em " << pessoa.nascimento.mes << " e mede " << pessoa.altura << "m" << endl;
  
  return 0;
}
