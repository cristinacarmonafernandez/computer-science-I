#include <iostream>

using namespace std;

int main () {
	
	int tamano_vector, k, contador;
	
	cout << "Indique el tamaño del vector"<< endl;
	cin >> tamano_vector;
	
    int vector[tamano_vector];
    
    for (int i=0; i<tamano_vector; i++){
    	
    	cout << "Introduzca un valor para la posición "<< i << "del vector" << endl;
    	cin >> vector[i];
	}
	
	cout<< "Indique un valor que se encuentre en su vector" << endl;
	cin >> k;
	
	contador=0;
	
	for (int i=0; i<tamano_vector; i++){
		
		if (vector[i]==k) {
		
		 contador = contador + 1;
		 
      }
	} cout << "El valor " << k << "se repite " << contador << "veces" ;
	
	
	
	return 0;
}
