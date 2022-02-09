
#include <iostream>

using namespace std;

//VARIABLES
    float a, p, imc;
int main(){
    cout<<"---Calcula tu indice de masa corporal (IMC)---\n\n";
    cout<<"-Ingresa tu peso en kg:\n";
        cin>>p;
    cout<<"-Ingresa tu altura en metros:\n";
        cin>>a;
    
        imc = p/(a*a);
        
    cout<<"\n-Tu Indice de masa corporal es:"  <<imc;
    
    
    return 0;
    
}
