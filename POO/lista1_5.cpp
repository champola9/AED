#include <iostream>
#include <cmath>

using namespace std;

class Calculadora 
{
private:
    const double PI = 3.14;

    double calculaCircunferencia(double raio) {
        return 2 * PI * raio;
    }

    double calculaAreaCirculo(double raio) {
        return PI * pow(raio, 2);
    }

    double calculaAreaLateralCubo(double lado) {
        return 4 * pow(lado, 2);
    }

    double calculaAreaTotalCubo(double lado) {
        return 6 * pow(lado, 2);
    }

    double calculaVolumeCubo(double lado) {
        return pow(lado, 3);
    }

public:
    void calculaCirculo(double raio) {
        cout << "Para um círculo com raio " << raio << ":" << "\n";
        cout << "Comprimento da circunferência: " << calculaCircunferencia(raio) << "\n";
        cout << "Área da circunferência: " << calculaAreaCirculo(raio) << "\n";
    }

    void calculaCubo(double lado) {
        cout << "Área lateral do cubo: " << calculaAreaLateralCubo(lado) << "\n";
        cout << "Área total do cubo: " << calculaAreaTotalCubo(lado) << "\n";
        cout << "Volume do cubo: " << calculaVolumeCubo(lado) << "\n";
    }
};

int main() 
{
    Calculadora calculadora;
    double raio, lado;
    cout << "Insira o raio do círculo: \n";
    cin >> raio;
    calculadora.calculaCirculo(raio);
    cout << "Digite o lado do cubo: \n";
    cin >> lado;
    calculadora.calculaCubo(lado);

    return 0;
}
