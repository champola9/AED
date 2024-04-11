#include <iostream>
#include <vector>
using namespace std;

int pesqseq(const vector<int>& vetor, int val) {
    for (int i = 0; i < vetor.size(); ++i) {
        if (vetor[i] == val) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    vector<int> vetor = {1, 2, 3, 4, 5, 6, 7, 8}; 
    int Busca = 3; 

    int posicao = pesqseq(vetor, Busca);

    if (posicao != -1) {
        cout << "O valor " << Busca << " foi encontrado na posição " << posicao << " do vetor." << "\n";
    } else {
        cout << "O valor " << Busca << " não foi encontrado no vetor." << "\n";
    }

    return 0;
}
