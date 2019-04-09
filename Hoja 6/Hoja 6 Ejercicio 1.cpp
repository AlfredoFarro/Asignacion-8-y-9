#include<iostream>
using namespace std;

int main() {
	int litros;
	double pago;

	cout << "Ingrese los litros consumidos" << endl;
	cin >> litros;
	
	pago = 20;
	
	pago = pago + 50 * 0 + (litros > 50 && litros <= 200)*(litros - 50) * 2 + (litros > 200)*(150 * 2 + (litros - 200)*3.5);

	cout << "El pago sera: " << pago << endl;

	system("pause");
}