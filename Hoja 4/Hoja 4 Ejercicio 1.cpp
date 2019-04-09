#include <iostream>
using namespace std;

int main()
{
 //Entrada
	int numNeu;
	int montoTotal;
	int P1 = 145;
	int P2 = 138;
	int P3 = 135;
	cout << "Ingrese numero de neumaticos a comprar: " << endl;
	cin >> numNeu;

	//Lógica
	montoTotal = (numNeu < 3)*P1*numNeu + (numNeu >= 3 && numNeu <= 5)*P2*numNeu + (numNeu > 5)*P3*numNeu;

	//Salida
	cout << "El monto total es: " << montoTotal << endl;

	system("pause");
}
