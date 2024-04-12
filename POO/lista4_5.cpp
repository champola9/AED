#include <iostream>
#include <vector>
using namespace std;

int pesqsent(const vector<int>& vetor, int val) {
    int tamanho = vetor.size();
    int ultimoValor = vetor[tamanho - 1];
    vetor[tamanho - 1] = val;

    int i = 0;
    while (vetor[i] != val) {
        i++;
    }

    vetor[tamanho - 1] = ultimoValor;

    if (i < tamanho - 1) {
        return i;
    } else {
        return -1;
    }
}

int main() {
    vector<int> vetor = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int valorProcurado = 7;

    int posicao = pesqsent(vetor, valorProcurado);

    if (posicao != -1) {
        cout << "O valor " << valorProcurado << " foi encontrado na posição " << posicao << " do vetor.\n";
    } else {
        cout << "O valor " << valorProcurado << " não foi encontrado no vetor.\n";
    }

    return 0;
}
