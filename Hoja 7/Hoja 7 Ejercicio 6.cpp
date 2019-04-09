#include<iostream>
#include<string>
using namespace std;

int main() {
	string codigo;
	string codigoASCIINombre, codigoASCIIApellidoP, codigoASCIIApellidoM, Hora, Minutos, Segundos;
	bool tardanza;
	char Nombre, ApellidoP, ApellidoM;
	cout << "Ingrese su codigo:" << endl;
	cin >> codigo;

	codigoASCIINombre = codigo.substr(0, 2);
	codigoASCIIApellidoP = codigo.substr(2, 2);
	codigoASCIIApellidoM = codigo.substr(4, 2);
	Hora = codigo.substr(6, 2);
	Minutos = codigo.substr(8, 2);
	Segundos = codigo.substr(10, 2);

	Nombre = char(stoi(codigoASCIINombre));
	ApellidoP = char(stoi(codigoASCIIApellidoP));
	ApellidoM = char(stoi(codigoASCIIApellidoM));

	tardanza = (codigo.substr(6, 6) >= "090001");

	cout << "Hora de entrada: " << Hora << endl;
	cout << "Minuto de entrada: " << Minutos << endl;
	cout << "Segundos de entrada: " << Segundos << endl;
	cout << "Su nombre empieza con la letra: " << Nombre << endl;
	cout << "Su apellido paterno inicia con la letra: " << ApellidoP << endl;
	cout << "Su apellido materno inicia con la letra: " << ApellidoM << endl;
	cout << "Llego tarde (1:si 0:no): " << tardanza << endl;

	system("pause");
}