// Este programa muestra si una coordenada elegida por el usuario se encuentra dentro de un círculo

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	float radio, centro_1, centro_2, coordenada_1, coordenada_2, distancia;
	
	cout<< "Introduzca el radio del circulo";
	cin>> radio;
	
	
	cout<< "Introduzca la primera coordenada del centro del circulo";
	cin>> centro_1;
	cout<< "Introduzca la segunda coordenada del centro del circulo";
	cin>> centro_1;
	
	
	cout<< "Introduzca la primera coordenada del punto";
	cin>> coordenada_1;
	cout<< "Introduzca la segunda coordenada del punto";
	cin>> coordenada_2;
	
	
	distancia= sqrt(pow((centro_1 - coordenada_1),2) + pow((centro_2 - coordenada_2),2));
	
	if (radio>=distancia){
		cout<< "DENTRO";
	}
	else 
	    cout<< "FUERA";
	    
return 0;
	
}

