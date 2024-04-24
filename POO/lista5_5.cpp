#include <iostream>
#include <string>

using namespace std;

void selectionSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].length() < arr[minIndex].length()) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    int n;
    cout << "Digite o numero de nomes a serem inseridos: ";
    cin >> n;

    string nomes[n];

    cout << "Digite os nomes:\n";
    for (int i = 0; i < n; i++) {
        cin >> nomes[i];
    }

    selectionSort(nomes, n);

    cout << "\nNomes ordenados pelo tamanho:\n";
    for (int i = 0; i < n; i++) {
        cout << nomes[i] << "\n";
    }

    return 0;
}
