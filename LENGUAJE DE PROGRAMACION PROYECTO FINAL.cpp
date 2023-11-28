/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    // Declaracion de variables
    string nombre = "";
    string vocal = "";
    string apellido_paterno = "";
    string apellido_materno = "";
    string dia = "";
    string mes = "";
    string anio = "";
    string RFC = "";
    
    // Peticion de la informacion necesaria
    cout<<"calculo de RFC"<<endl;
    cout<<"Utiliza Mayusculas"<<endl;
    cout<<"Introduce tu nombre: ";
    cin>>nombre;
    cout<<"Introduce apellido paterno: ";
    cin>>apellido_paterno;
    cout<<"Introduce apellido materno: ";
    cin>>apellido_materno;
    cout<<"Fecha de nacimiento (solo numeros DD/MM/AAAA)"<<endl;
    cout<<"Dia: ",
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Anio: ";
    cin>>anio;
    
    // Generar RFC
    RFC = apellido_paterno.substr(0,1);
    cout<<"Tu RFC sin homoclave es:"<<RFC<<endl;
    
    for(int i=1; i<apellido_paterno.length();++i){
        char letra = apellido_paterno[i];
        if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
            vocal+=letra;
            break;
        }
    }
    // Mostrar como se va generando el RFC
    RFC = RFC + vocal;
    cout<<"Tu RFC sin homoclave es:"<<RFC<<endl;
    RFC = RFC + apellido_materno.substr(0,1);
    cout<<"Tu RFC sin homoclave es:"<<RFC<<endl;
    RFC = RFC + nombre.substr(0,1);
    cout<<"Tu RFC sin homoclave es:"<<RFC<<endl;
    RFC = RFC + anio.substr(2,2);
    cout<<"Tu RFC sin homclave es:"<<RFC<<endl;
    RFC = RFC + mes;
    cout<<"Tu RFC sin homoclave es:"<<RFC<<endl;
    RFC = RFC + dia;
    cout<<"Tu RFC sin homoclave es:"<<RFC<<endl;
    

    
        return 0;
}

