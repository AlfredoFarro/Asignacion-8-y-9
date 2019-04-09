#include <iostream>
using namespace std;

int main() {
	double dia;
	int ingr;
	double costoDia;
	double costoIng;
	double costoTotal;
	cout << "Escriba el diametro de la pizza y la cantidad de ingredientes extra que lleva" << endl;
	cin >> dia >> ingr;

	costoDia = 1.5*dia;
	costoIng = 2.5*ingr;
	costoTotal = costoDia + costoIng;

	cout << "El costo de la pizza es: " << costoTotal << endl;
	system("pause");
}