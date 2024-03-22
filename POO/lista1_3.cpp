#include <iostream>
#include <string>
using namespace std;

class Estudante
{
private:    
    string nome;
    int matricula;
    string curso;
    float nota;
    int faltas;
public:
    void cadastrar(string name, int mat, string cur);
    void exibir();
    void rendimento(float nota1, int faltas1);
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

void Estudante::rendimento(float nota1, int faltas1)
{
    cout<<"Digite a quantidade de faltas do estudante.\n";
    cin>>faltas1;
    cout<<"Digite a nota do estudante.\n";
    cin>>nota1;
    
    nota = nota1;
    faltas = faltas1;
}

void Estudante::exibir()
{
    cout<<"-------------------------------------------\n";
    cout<<"Nome: "<<nome<<"\n";
    cout<<"Matrícula: "<<matricula<<"\n";
    cout<<"Curso: "<<curso<<"\n";
    cout<<"Nota: "<<nota<<"\n";
    cout<<"Faltas: "<<faltas<<"\n";
    cout<<"-------------------------------------------\n";
}

int main()
{
    Estudante MyEstudante;
    MyEstudante.cadastrar("Fulano",000000000,"Place_holder");
    MyEstudante.rendimento(0, 0);
    MyEstudante.exibir();
}
