#include <iostream>

using namespace std;

const double PI= 3.14159265358;

double Gr2Rad (double g)
{
   return g/180*PI;
}
double Rad2Gr (double r)
{
   return r*180/PI;
}

// En (-180,180]
double AnguloHasta180 (double ang) {
   if (ang>180) {
     int vueltas= (ang+180.0)/360;
     ang= ang - vueltas*360;
   }
   else {
     int vueltas= (-ang+180.0)/360;
     ang= ang + vueltas*360;
   }
   if (ang==-180.0) ang= 180;
   return ang;
}

bool Leer3Angulo (double& angulo, bool estricto= false) {
    double g,m,s;
    char car= '?';
    bool exito= false;

    cin >> g >> car;
    if (car=='g') { //car==(char) 176 || car==(char) 167) { // 8859 y 1252 / cp850
      cin >> m >> car;
      if (car=='m') {
         cin >> s >> car;
         if (car=='s') {
            exito= true;
         }
      }
    }
    if (estricto && (g<0 || m<0 || s<0))
      exito= false;
    else  angulo= g + m/60.0 + s/3600.0;
    return exito;
}

void Escribir3Angulo (double& angulo) {
   if (angulo<0) {
         angulo= -angulo;
         cout << "(opuesto) ";
   }
   angulo= AnguloHasta180(angulo);
   int grados= angulo;
   angulo= (angulo-grados) * 60;
   int minutos= angulo;
   angulo= (angulo-minutos) * 60;
   cout << grados << "g " <<  minutos << "m " << angulo << "s";
}


bool LeerLatitud(double& angulo){
    char let='?';
    bool exito=false;
    if (Leer3Angulo(angulo, true) && angulo>=-180 && angulo<=180){
            cout << "Introducir coordenada: ";
            cin >> let;
        if (let=='S' || let=='N'){
            exito=true;
            if(let=='S')
                angulo=-angulo;
        }
    }
return exito;
}

void EscribirLatitud(double& angulo){
    Escribir3Angulo(angulo);
    if (angulo<0)
        cout << "S";
    else
        cout <<"N";
}

bool LeerLongitud(double& angulo){
    char let='?';
    bool exito=false;
    if (Leer3Angulo(angulo, true) && angulo>=-180 && angulo<=180){
            cout << "Introducir coordenada: ";
            cin >> let;
        if (let=='W' || let=='E'){
            exito=true;
            if(let=='W')
                angulo=-angulo;
        }
    }
return exito;
}


void EscribirLongitud(double& angulo){
    Escribir3Angulo(angulo);
    if (angulo<0)
        cout << "W";
    else
        cout <<"E";
}

bool LeerALtura(double& altura){
    char letra='?';
    bool exito=false;
    if (letra=='m'){
        exito=true;
    }
return exito;
}

void EscribirAltura(double& altura){
    char letra='m';
    cout << altura << letra;
}

int main()
{
    double angulo1, angulo2, altura;
    cout << "Introduzca posicion geografica <latitud>(N/S); <longitud>(W/E), <altura>m: ";
    cin >> angulo1 >> angulo2 >> altura;
    LeerLatitud(angulo1);
    LeerLongitud(angulo2);

    EscribirLatitud(angulo1);
    EscribirLongitud(angulo2);
    EscribirAltura(altura);

return 0;
}
