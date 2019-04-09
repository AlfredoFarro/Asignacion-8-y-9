#include <iostream>
using namespace std;
int main()
{
	int Al, puntosAl, puntosEst;
	char Est;
	cout << "Ingrese la canidad de años que labora: ";
	cin >> Al;
	if (Al < 5) {
		puntosAl = 5;
	}
	else
		puntosAl = 10;
	cout << "Estudios (P: primaria; S: secundaria; U: universitario; G: posgrado): ";
	cin >> Est;
	switch (Est) {
	case 'P': puntosEst = 5; break;
	case 'S': puntosEst = 10; break;
	case 'U': puntosEst = 20; break;
	case 'G': puntosEst = 30; break;
	default: cout << "ERROR"; break;
	}
	cout << "puntaje obtenido: " << puntosAl + puntosEst;
	cin.get(); cin.get();
}