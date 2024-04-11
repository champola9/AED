#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Veiculo
{
private:
    double peso;
    string marca,ano,cor;
public:
  Veiculo(string marca,string ano,string cor,double peso)
  {
        this -> marca = marca;
        this -> ano = ano;
        this -> cor = cor;
        this -> peso = peso;
  };
   string getMarca()
    {
        return (marca) + "\n";
    }
     string getAno()
    {
        return (ano) + "\n";
    }
    string getCor()
    {
        return (cor) + "\n";
    }
    string getPeso()
    {
        return to_string(peso) + "\n";
    }
    void setMarca(const string& novoMarca) {
        marca = novoMarca;
    }
    void setAno(const string& novoAno) {
        ano = novoAno;
    }
    void setCor(const string& novaCor) {
        cor = novaCor;
    }
    void setPeso(double novoPeso) 
    {
        peso = novoPeso;
    }
};
int main()
{
    int x,i;
    cout<<"Tamanho do vetor:\n";
    cin>>x;
    vector<Veiculo> veiculos;
    for(i=0;i<x;i++)
    {
        cout << "\nCadastro do carro " << i + 1 << ":\n";
        string marca, ano, cor;
        float peso;
        cout << "Marca: \n";
        cin>>marca;

        cout << "Ano: \n";
        cin>>ano;

        cout << "Cor: \n";
        cin>>cor;

        cout << "Peso: \n";
        cin >> peso;
        
        Veiculo veiculo(marca, ano, cor, peso); 
        veiculo.setMarca(marca); 
        veiculo.setAno(ano);
        veiculo.setCor(cor);
        veiculos.push_back(veiculo);
    }
    cout<<"Os dados cadastrados sao:\n";
    for(i=0;i<x;i++)
    {
        cout << "Carro " << i + 1 << ":\n";
        cout << "Marca: " << veiculos[i].getMarca() << "\n";
        cout << "Ano: " << veiculos[i].getAno() << "\n";
        cout << "Cor: " << veiculos[i].getCor() << "\n";
        cout << "Peso: " << veiculos[i].getPeso() << "\n";
        
    }
    
    return 0;
}
