#include <iostream>
using namespace std;

int MDC(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int MMC(int a, int b) {
    return (a * b) / MDC(a, b);
}

int main() {
    int tam;
    cout << "Digite o tamanho do array: ";
    cin >> tam;

    int* num = new int[tam];
    cout << "Digite " << tam << " números inteiros: " << endl;
    for (int i = 0; i < tam; i++) {
        cin >> num[i];
    }

    int mdc = num[0];
    int mmc = num[0];

    for (int i = 1; i < tam; i++) {
        mdc = MDC(mdc, num[i]);
        mmc = MMC(mmc, num[i]);
    }

    cout << "O MDC dos valores digitados é " << mdc << endl;
    cout << "O MMC dos valores digitados é " << mmc << endl;

    delete[] num;
    
    return 0;
}
