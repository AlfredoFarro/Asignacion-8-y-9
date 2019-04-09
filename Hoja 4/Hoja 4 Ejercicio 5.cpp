#include <iostream>
using namespace std;
float main()
{
	int Cu, Pr;
	cout << "Ingrese la cantidad de unidades: ";
	cin >> Cu;
	cout << "Ingrese el precio del articulo: ";
	cin >> Pr;
	cout << "El monto a pagar es de: " << Cu * Pr << endl;
	cout << "I.G.V: " << (Cu * Pr) * 0.18;
	cin.get(); cin.get();
}