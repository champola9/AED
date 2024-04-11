#include <iostream>
#include <string>
using namespace std;

class Pessoa {
protected:
    string nome;
    string telefone;

public:
    Pessoa(string nome, string telefone) : nome(nome), telefone(telefone) {}

    string getNome() const {
        return nome;
    }

    string getTelefone() const {
        return telefone;
    }
};


class Empregado : public Pessoa {
protected:
    double salarioBase;

public:
    Empregado(string nome, string telefone, double salarioBase) : Pessoa(nome, telefone), salarioBase(salarioBase) {}

    virtual double calcularSalario() const {
        return salarioBase;
    }
};


class Vendedor : public Empregado {
private:
    double valorVendas;
    double comissao;

public:
    Vendedor(string nome, string telefone, double salarioBase, double valorVendas, double comissao) 
        : Empregado(nome, telefone, salarioBase), valorVendas(valorVendas), comissao(comissao) {}

    double calcularSalario() const override {
        return salarioBase + (valorVendas * comissao / 100.0);
    }
};

int main() {
    Vendedor vendedor("Luis", "400028922", 4000.0, 6500.0, 5.0);

    cout << "Nome: " << vendedor.getNome() << "\n";
    cout << "Telefone: " << vendedor.getTelefone() << "\n";
    cout << "Salario Base: " << vendedor.calcularSalario() << "\n";

    return 0;
}
