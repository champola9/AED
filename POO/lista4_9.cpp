#include <iostream>
#include<string>
using namespace std;

int main()
{
    int V[10];
    int i;
    cout<<"Preencha o vetor:\n";
    for(i=0;i<10;i++)
    {
        cin>>V[i];
    }
    cout<<"O vetor eh:\n";
    for(i=0;i<10;i++)
    {
        cout<<V[i]<<" ";
        for (int j = 0; j < 10 - i - 1; ++j) {
         
            if (V[j] < V[j + 1])
            {
                int temp = V[j];
                V[j] = V[j + 1];
                V[j + 1] = temp;
            }
        
        }
    }
    cout<<"\n";
    cout << "Vetor em ordem decrescente:\n";
    for (int i = 0; i < 10; i++) 
    {
        cout << V[i] << ' ';
    }
    cout << "\n";
    return 0;
}
