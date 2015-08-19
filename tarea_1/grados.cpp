#include <iostream>
using namespace std;

int main()
{
    double gradc,gradf;

    cout<<"\tGrados Farenheit a convertir:  ";
    cin>>gradf;
    
    gradc=(gradf-32)*5/9;
    
    cout<<endl<<gradf<<" grados farenhet es equivalentes a  "<< gradc<< "  grados Centigrados " <<endl;
    getchar();
    
    return 0;
}


