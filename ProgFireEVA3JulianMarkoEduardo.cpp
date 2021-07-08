#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <ctime>
#include "Metodos_JulianPalacios.h"

using namespace std;

int main(){
	int OpcionMenu = 0;
	bool ContinuarPrograma = true;
	
	do{
	
		fflush(stdin);
		cout<<endl;
		cout<<"Seleccione una opcion: (Ingrese el numero de la opcion que desea.)"<<endl;
		cout<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"9. Mostrar todos los logs."<<endl;
		cout<<"10. Limpiar pantalla."<<endl;
		cout<<"11. Salir."<<endl;
	
		switch(OpcionMenu){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
				system("clear");
				break;
			case 11:
				ContinuarPrograma = false;
				break;
			default:
				cout<<"Opcion no valida"<<endl;
				break;
		}
	
	}while(ContinuarPrograma);
}
