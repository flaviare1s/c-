#include <iostream>
using namespace std;

int main() {
    float nota1, nota2;
    cout << "Digite a primeira nota\n";
    cin >> nota1;
    cout << "Digite a segunda nota\n";
    cin >> nota2;
    float media = (nota1 + nota2) / 2;
    cout << "A média é: " << media << endl;

    if (media <= 2.5) {
        cout << "Nota final: D";
    } else if (media <= 5) {
        cout << "Nota final: C";
    } else if (media <= 7.5) {
        cout << "Nota final: B";
    } else {
        cout << "Nota final: A";
    }

    return 0;
}
