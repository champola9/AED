#include <iostream>
#include <string>
using namespace std;

class Estudante
{
private:    
    string nome;
    int matricula;
    string curso;
public:
    void cadastrar(string name, int mat, string cur);
    void exibir();
};

void Estudante::cadastrar(string name, int mat, string cur)
{
    cout<<"Digite o nome do estudante.\n";
    cin>> name;
    cout<<"Digite a matrícula do estudante.\n";
    cin>> mat;
    cout<<"Digite o curso do estudante.\n";
    cin>>cur;
    
    nome = name;
    matricula = mat;
    curso = cur;
}

void Estudante::exibir()
{
    cout<<"-------------------------------------------\n";
    cout<<"Nome: "<<nome<<"\n";
    cout<<"Matrícula: "<<matricula<<"\n";
    cout<<"Curso: "<<curso<<"\n";
    cout<<"-------------------------------------------\n";
}

int main()
{
    Estudante MyEstudante;
    MyEstudante.cadastrar("Fulano",000000000,"Place_holder");
    MyEstudante.exibir();
}
