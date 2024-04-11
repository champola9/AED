#include <iostream>
#include <cmath>

using namespace std;

class Complexo {
private:
    float real;
    float imag;

public:
    Complexo(float r, float i) {
        real = r;
        imag = i;
    }

    void mostrar() {
        cout << real << " + " << imag << "i\n";
    }

    Complexo operator+(Complexo const &obj) {
        return Complexo(real + obj.real, imag + obj.imag);
    }

    Complexo operator-(Complexo const &obj) {
        return Complexo(real - obj.real, imag - obj.imag);
    }

    Complexo operator*(Complexo const &obj) {
        return Complexo(real * obj.real - imag * obj.imag, real * obj.imag + imag * obj.real);
    }

    Complexo operator/(Complexo const &obj) {
        float denominador = obj.real * obj.real + obj.imag * obj.imag;
        if (denominador == 0) {
            cout << "Não é possível dividir por zero.\n";
            return Complexo(0, 0);
        }
        return Complexo((real * obj.real + imag * obj.imag) / denominador,
                        (imag * obj.real - real * obj.imag) / denominador);
    }

    Complexo quadrado() {
        return Complexo(real * real - imag * imag, 2 * real * imag);
    }

    Complexo raizQuadrada() {
        float r = sqrt(real * real + imag * imag);
        float parteReal = sqrt((r + real) / 2);
        float parteImaginaria = sqrt((r - real) / 2);
        if (imag < 0) {
            parteImaginaria = -parteImaginaria;
        }
        return Complexo(parteReal, parteImaginaria);
    }
};

int main() {
    float real1, imag1, real2, imag2;
    cout << "Digite a parte real e imaginária do primeiro número complexo: ";
    cin >> real1 >> imag1;
    cout << "Digite a parte real e imaginária do segundo número complexo: ";
    cin >> real2 >> imag2;

    Complexo num1(real1, imag1);
    Complexo num2(real2, imag2);

    cout << "Operações disponíveis:\n1. Soma\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Quadrado\n6. Raiz Quadrada\n";
    cout << "Escolha a operação desejada (1-6): ";
    int escolha;
    cin >> escolha;

    Complexo resultado(0, 0);
    switch (escolha) {
        case 1:
            resultado = num1 + num2;
            break;
        case 2:
            resultado = num1 - num2;
            break;
        case 3:
            resultado = num1 * num2;
            break;
        case 4:
            resultado = num1 / num2;
            break;
        case 5:
            cout << "Quadrado do primeiro número complexo: ";
            num1.quadrado().mostrar();
            cout << "Quadrado do segundo número complexo: ";
            num2.quadrado().mostrar();
            break;
        case 6:
            cout << "Raiz quadrada do primeiro número complexo: ";
            num1.raizQuadrada().mostrar();
            cout << "Raiz quadrada do segundo número complexo: ";
            num2.raizQuadrada().mostrar();
            break;
        default:
            cout << "Escolha inválida!";
    }

    if (escolha != 5 && escolha != 6) {
        cout << "Resultado: ";
        resultado.mostrar();
    }

    return 0;
}

