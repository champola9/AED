#include <iostream>
#include <cstring>

using namespace std;

struct pessoa {
    int Matricula;
    char Nome[30];
    float Nota;
};

void merge(pessoa arr[], int esquerda, int meio, int direita, int campo) {
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    pessoa L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[esquerda + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[meio + 1 + j];

    int i = 0;
    int j = 0;
    int k = esquerda;

    while (i < n1 && j < n2) {
        if (campo == 1 ? L[i].Matricula <= R[j].Matricula : (campo == 2 ? strcmp(L[i].Nome, R[j].Nome) <= 0 : L[i].Nota <= R[j].Nota)) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(pessoa arr[], int esquerda, int direita, int campo) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        mergeSort(arr, esquerda, meio, campo);
        mergeSort(arr, meio + 1, direita, campo);
        merge(arr, esquerda, meio, direita, campo);
    }
}

void printArray(pessoa arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        cout << "Matricula: " << arr[i].Matricula << ", Nome: " << arr[i].Nome << ", Nota: " << arr[i].Nota << "\n";
}

int main() {
    int N;
    cout << "Digite quantas pessoas vao ser cadastradas: ";
    cin >> N;

    pessoa arr[N];

    cout << "Digite os dados para cada pessoa:\n";
    for (int i = 0; i < N; i++) {
        cout << "Matricula: ";
        cin >> arr[i].Matricula;
        cout << "Nome: ";
        cin >> arr[i].Nome;
        cout << "Nota: ";
        cin >> arr[i].Nota;
    }

    int campo;
    cout << "Escolha o campo para ordenação:\n1. Matricula\n2. Nome\n3. Nota\n";
    cin >> campo;

    mergeSort(arr, 0, N - 1, campo);

    cout << "\nDados ordenados:\n";
    printArray(arr, N);

    return 0;
}
