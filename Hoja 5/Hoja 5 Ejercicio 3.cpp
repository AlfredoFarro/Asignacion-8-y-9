#include <iostream>
using namespace std;
int main()
{
	int x1, x2, y1, y2;
	cout << "Ingrese las coordenadas de X: ";
	cin >> x1;
	cout << "Ingrese las coordenadas de Y: ";
	cin >> y1; 
	if (x1 > 0 & y1 > 0) {
		cout << "El punto se encuentra en el cuadrante 1";
	}
	else if (x1 < 0 & y1 > 0) {
		cout << "El punto se encuentra en el cuadrante 2";
	}
	else if (x1 < 0 & y1 < 0) {
		cout << "El punto se encuentra en el cuadrante 3";
	}
	else if (x1 > 0 & y1 < 0) {
		cout << "El punto se encuentra en el cuadrante 4";
	}
	else if (x1 == 0 & y1 == 0) {
		cout << "ERROR, se encuentra en el origen";
	}else 
		cout << "ERROR, una coordenada se encuentra en el eje";
	cin.get(); cin.get();
}