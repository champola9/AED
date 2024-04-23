#include <iostream>
#include <string>

using namespace std;

void trocar(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

int particionar(string& arr, int baixo, int alto) {
    char pivo = arr[alto];
    int i = (baixo - 1);
    for (int j = baixo; j <= alto - 1; j++) {
        if (arr[j] >= pivo) {
            i++;
            trocar(arr[i], arr[j]);
        }
    }
    trocar(arr[i + 1], arr[alto]);
    return (i + 1);
}

void quickSort(string& arr, int baixo, int alto) {
    if (baixo < alto) {
        int pi = particionar(arr, baixo, alto);
        quickSort(arr, baixo, pi - 1);
        quickSort(arr, pi + 1, alto);
    }
}

void ordenarDecrescente(string& str) {
    int n = str.length();
    quickSort(str, 0, n - 1);
}

int main() {
    cout << "Insira a string: \n";

    string input;
    getline(cin, input);

    ordenarDecrescente(input);

    cout << "A string ordenada em ordem decrescente é: " << input << "\n";

    return 0;
}
