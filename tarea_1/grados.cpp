#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    double gradc,gradf;
    
    //Solicita los grados a transformar
    cout<<"\tGrados Farenheit a convertir:  ";
    cin>>gradf;
    
    //Realiza la transformación
    gradc=(gradf-32)*9/5;
    
    //Muestra el resultado
    cout<<"Son equivalentes a  "<< gradc<< "  grados Centigrados " <<endl;
    getchar();
    getchar();
}

