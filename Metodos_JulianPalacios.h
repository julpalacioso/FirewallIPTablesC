#include <iostream>
#include <string>
#include <ctime>

using namespace std;

string Fecha(){
	time_t now =  time(0);
	tm* localtm = localtime(&now);
	tm* gmtm = gmtime(&now);
	return asctime(localtm);
}

void MostrarTodosLogs(){
	string Linea, LineaTemp;
	
	ifstream Fichero("");
	if(Fichero.fail()){
		cout<<"No se encontro el archivo."<<endl;
	}else{
		while(!Fichero.eof()){
			getline(Fichero, LineaTemp);
			Linea.append('\n' + LineaTemp);
		}
		cout<<Linea<<endl;
		Fichero.close();
	}
}
