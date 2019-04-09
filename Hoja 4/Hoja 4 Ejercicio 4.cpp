#include<iostream>
using namespace std;

int main() {
	int horas;
	int pago1;
	int pago2;
	int pagoTotal;

	cout << "Ingrese el numero de horas trabajada: " << endl;
	cin >> horas;

	pago1 = (horas <= 40) * 16 * horas;
	pago2 = (horas >= 41)*(horas - 40) * 20 + (40 * 16);
	pagoTotal = pago1 + pago2;

	cout << "El pago a realizar sera de: " << pagoTotal << endl;
	
	system("pause");
}