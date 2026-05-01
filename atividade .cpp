#include <iostream>
using namespace std;

int main() {
    int numero;
    unsigned long long fatorial = 1;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Número negativo!" << endl;
        return 0;
    }

    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    cout << numero << "! = " << fatorial << endl;
    return 0;
} 