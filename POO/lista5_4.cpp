#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

float gerarAltura() {
    return 1.0 + rand() % 201 / 100.0;
}

void bubbleSort(float arr[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    srand(time(NULL));

    const int NUM_ALUNOS = 100;
    float alturas[NUM_ALUNOS];

    cout << "Alturas dos alunos geradas aleatoriamente:\n";
    for (int i = 0; i < NUM_ALUNOS; i++) {
        alturas[i] = gerarAltura();
        cout << alturas[i] << " metros\n";
    }

    bubbleSort(alturas, NUM_ALUNOS);

    cout << "\nAlturas dos alunos ordenadas:\n";
    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << alturas[i] << " metros\n";
    }

    return 0;
}
