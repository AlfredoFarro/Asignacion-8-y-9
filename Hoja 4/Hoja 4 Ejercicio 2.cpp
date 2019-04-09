#include <iostream>
using namespace std;
void main()
{
	char sexo;
	int edad;
	cout << "Ingrese su sexo(F, M): ";
	cin >> sexo;
	cout << "Ingrese su edad: ";
	cin >> edad;
	switch (sexo)
	{
	case 'F': if (edad < 21) {
		cout << "Precio: 800 soles";
	    }
			  else
				  cout << "Precio: 500 soles"; break;
	case 'M': if (edad < 25) {
		cout << "Precio 1000 soles";
	    }
			  else
				  cout << "Precio 700 soles";
	}
	cin.get(); cin.get();
}