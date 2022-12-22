

#include <iostream>

using namespace std;

int main () {
	
	int puntos_A, puntos_B, diferencia_AB, diferencia_BA;
	
	cout<< "Introduzca los puntos del equipo A: ";
	cin>> puntos_A;
	
	cout<< "Introduzca los puntos del equipo B: ";
	cin>> puntos_B;
	
	diferencia_AB=puntos_A-puntos_B;
	
	diferencia_BA=puntos_B-puntos_A;
	
	if (diferencia_AB>=20){
	    cout<< "El equipo A derroto ampliamente al B" ;
	}
	else if (diferencia_AB==diferencia_BA)
	     cout<< "Los equipos A y B empataron";
	     
	     else if (diferencia_AB<20 && diferencia_AB>diferencia_BA)
	        cout<< "El equipo A derroto al B";
	     
	         else if (diferencia_BA>=20)
	            cout<< "El equipo B derroto ampliamente al A";
	            
	            else if (diferencia_BA<20 && diferencia_BA>diferencia_AB)
	               cout<< "El equipo B derroto al A";
	               
        
	
	return 0;
}
