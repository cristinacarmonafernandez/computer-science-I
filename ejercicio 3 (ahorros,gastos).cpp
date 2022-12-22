// Este programa declara la situación económica del usuario en función de sus gastos y ahorros

#include <iostream>

using namespace std;

int main () {
	
	double ahorros, gastos;
	
    cout<< "Introduzca el valor de sus gastos";
    cin>> gastos;
 
    cout<< "Introduzca el valor de sus ahorros";
	cin>> ahorros;
	 
   if (ahorros >= gastos) {
	 cout<< "SOLVENTE";
	 ahorros= ahorros-gastos;
	 gastos=0;
    }
	 else 
	 cout<< "EN QUIEBRA";
	   
 return 0;
	 
}
