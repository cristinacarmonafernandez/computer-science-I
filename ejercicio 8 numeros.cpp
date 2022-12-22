

#include <iostream>

using namespace std;

int main () {
	
	float numero_1, numero_2, media_numeros;
	
	cout<< "Introduzca un numero entero A: ";
	cin>> numero_1;
	
	cout<< "Introduzca otro numero entero B: ";
	cin>> numero_2;
	
	media_numeros= (numero_1+numero_2)/2;
	
   if (numero_1>=0 && 10>=numero_1)
	      cout<< "El numero A es de tipo A\n";
	       
	        else if (20>=numero_1 && 30>numero_1)
	          cout<< "El numero A es de tipo B\n";
	          
			  else if (30>=numero_1 && 40>numero_1)
	            cout<< "El numero A es de tipo C\n";
	            
				 else if (40>=numero_1)
	               cout<< "El numero A es de tipo D\n";
				                
	else
	  cout<< "El numero A no esta en el rango\n";               
	                 
	                 
   if (10>=numero_2 && numero_2>=0)
	      cout<< "El numero B es de tipo A|n";
	       
	        else if (20>=numero_2 && 30>numero_2)
	         cout<< "El numero B es de tipo B\n";
	          
	           else if (30>=numero_2 && 40>numero_2)
	              cout<< "El numero B es de tipo C\n";
	               
	                else if (40>=numero_2)
	                 cout<< "El numero B es de tipo D\n"; 
					 
					 
    else
	  cout<< "El numero B no esta en el rango\n";
					 
					 
	cout<< "Y la media de ambos es: "<< media_numeros;			 	                 
	          
return 0;          
}
