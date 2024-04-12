#include <iostream>
#include<string>
#include <climits>
using namespace std;

int main() {
    int x;

    cout << "Digite o tamanho do vetor: ";
    cin >> x;

    if (x <= 0) {
        cout << "ERRO.\n";
        return 1;
    }

    int V[x];

    int menorElemento = INT_MAX;
    int posicaoMenorElemento = -1;
    for (int i = 0; i < x; ++i) {
        cout << "Digite o valor para X[" << i << "]: ";
        cin >> V[i];

        if (V[i] < menorElemento) {
            menorElemento = V[i];
            posicaoMenorElemento = i;
        }
    }

    cout << "Menor elemento: " << menorElemento << "\n";
    cout << "Posição do menor elemento: " << posicaoMenorElemento << "\n";

    return 0;
}
