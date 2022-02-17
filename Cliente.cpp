//mensaje de prueba
#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
	//atributos
	private : string nit;
	
	//constructor
	public:
	cliente (){
	}
	
	Cliente(string nom,string ape,string dir,int tel,string n) : Persona (nom,ape,dir,tel){
		nit = n;
	}
	//metodos get y set
	//set (modificar)
	void setNit(string n){nit = n;}
	
	//get (mostrar)
	string getNit(){return nit;}
	
	void mostrar(){
		cout<<"__________________"<<endl;
		cout<<nit<<endl;
		cout<<nombres<<endl;
		cout<<apellidos<<endl;
		cout<<direccion<<endl;
		cout<<telefono<<endl;
	}
};
