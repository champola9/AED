#include <iostream>
#include <string>

using namespace std;

void insertionSort(string lista[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        string chave = lista[i];
        int j = i - 1;
        while (j >= 0 && lista[j] > chave) {
            lista[j + 1] = lista[j];
            j = j - 1;
        }
        lista[j + 1] = chave;
    }
}

int main() {
    cout << "Insira os nomes que deseja ordenar.\n";

    int n;
    cout << "Quantos nomes deseja inserir? \n";
    cin >> n;

    string nomes[n];
    string nome;
    for (int i = 0; i < n; i++) {
        cout << "Digite o " << i + 1 << "º nome: ";
        cin >> nome;
        nomes[i] = nome;
    }

    insertionSort(nomes, n);

    cout << "\nNomes ordenados em ordem alfabética:\n";
    for (int i = 0; i < n; i++) {
        cout << nomes[i] << "\n";
    }

    return 0;
}
