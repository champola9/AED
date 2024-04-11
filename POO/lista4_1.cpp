#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i=0,x;
    cout<<"Digite o tamanho do vetor:\n";
    cin>>i;
    int v[i];
     cout<<"Preencher o vetor:\n";
    for(x=0;x<i;x++)
    {
         cin>>v[x];
    }
    cout<<"O vetor eh:";
    for(x=0;x<i;x++)
    {
    cout<<v[x]<<" ";
    }
 
    return 0;
}
