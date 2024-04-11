#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Pessoa {
private:
    string nome;
    string telefone;
    string tipoSanguineo;
    int idade;

public:
    string getNome() const {
        return nome;
    }
    string getTelefone() const {
        return telefone;
    }
    string getTipoSanguineo() const {
        return tipoSanguineo;
    }
    int getIdade() const {
        return idade;
    }
    void setNome(const string& novoNome) {
        nome = novoNome;
    }
    void setTelefone(const string& novoTelefone) {
        telefone = novoTelefone;
    }
    void setTipoSanguineo(const string& novoTipoSanguineo) {
        tipoSanguineo = novoTipoSanguineo;
    }
    void setIdade(int novaIdade) {
        idade = novaIdade;
    }
};

int main() {
    vector<Pessoa> pessoas;
    int numPessoas;

    cout << "Quantas pessoas deseja cadastrar? ";
    cin >> numPessoas;

    for (int i = 0; i < numPessoas; ++i) {
        Pessoa pessoa;

        cout << "\nCadastro da pessoa " << i+1 << ":" << endl;
        string nome, telefone, tipoSanguineo;
        int idade;

        cout << "Nome: ";
        cin.ignore(); 
        getline(cin, nome);
        pessoa.setNome(nome);

        cout << "Telefone: ";
        getline(cin, telefone);
        pessoa.setTelefone(telefone);

        cout << "Tipo sanguíneo: ";
        getline(cin, tipoSanguineo);
        pessoa.setTipoSanguineo(tipoSanguineo);

        cout << "Idade: ";
        cin >> idade;
        pessoa.setIdade(idade);

        pessoas.push_back(pessoa);
    }
    vector<Pessoa> doadoresUniversais;
    for (const auto& pessoa : pessoas) {
        if (pessoa.getTipoSanguineo() == "O-") {
            doadoresUniversais.push_back(pessoa);
        }
    }
    cout << "\nDoadores Universais:" << endl;
    for (const auto& doador : doadoresUniversais) {
        cout << "Nome: " << doador.getNome() << ", Telefone: " << doador.getTelefone() << ", Idade: " << doador.getIdade() << endl;
    }
    return 0;
}
