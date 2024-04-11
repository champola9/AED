#include <iostream>
#include <vector>
using namespace std;

int pesqbin(const vector<int>& vetor, int val) {
    int esquerda = 0;
    int direita = vetor.size() - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (vetor[meio] == val) {
            return meio;
        }

        if (vetor[meio] > val) {
            direita = meio - 1;
        } else {
            esquerda = meio + 1;
        }
    }

    return -1;
}

int main() {
    vector<int> vetor = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int valorProcurado = 8;

    int posicao = pesqbin(vetor, valorProcurado);

    if (posicao != -1) {
        cout << "O valor " << valorProcurado << " foi encontrado na posição " << posicao << " do vetor.\n";
    } else {
        cout << "O valor " << valorProcurado << " não foi encontrado no vetor.\n";
    }

    return 0;
}
