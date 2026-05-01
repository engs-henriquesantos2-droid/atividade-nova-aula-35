#include <iostream>
using namespace std;

int main() {
    int num, soma = 0;

    for(int i = 1; i <= 5; i++) {
        cout << "Digite um numero: ";
        cin >> num;

        if(num % 2 == 0) {
            soma += num;
        }
    }

    cout << "Soma dos numeros pares = " << soma << endl;

    return 0;
}