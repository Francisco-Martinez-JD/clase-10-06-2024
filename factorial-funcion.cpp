#include <iostream>
using namespace std;
int fact (int n)
{
    int resultado=1;
    if (n==0){
        resultado=1;
    } else
    {
        while (n>0){
        resultado=resultado*n;
        n--;
        }
    }
    return resultado;
}

int main() {
int n=0;
cout <<"Ingrese un numero entero:\n";
cin >> n;

cout << "El factorial de "<< n << " es:" << fact(n) << "\n";

    return 0;
}

