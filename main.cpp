#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	bool salir=true;
	string pelicula;
	char com;
	int anio;
	ofstream file;
	do{
		system("clear");
		cout<<"Ingrese Pelicula: ";
		cin>>pelicula;
		cout<<"Ingrese anio: ";
		cin>>anio;
		file.open("datos.txt");
		file<<pelicula<<" : "<<anio<<endl;
		file.close();
		cout<<endl<<"Ingresada"<<pelicula<<endl;
		cout<<"Para salir digite S: ";
		cin>>com;

		if(com=='S' || com=='s'){
			salir=false;
		}
	}while(salir);
	return 0;
}