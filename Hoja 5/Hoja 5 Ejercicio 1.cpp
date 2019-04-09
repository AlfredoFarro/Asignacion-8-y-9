#include <iostream>
using namespace std;
void main()
{
	int l1, l2, l3;
	cout << "Ingrese los 3 lados: ";
	cin >> l1 >> l2 >> l3;
	if (l1 != l2 & l1 != l3 & l3 != l2)
	{
		cout << "Equilatero: F" << endl;
		cout << "Isoseles: F" << endl;
		cout << "Escaleno: V" << endl;
	}
	else if ((l1 == l2 & l3 != l1 & l3 & l2) || (l2 == l3 & l1 != l2 & l1 != l3) || (l3 == l1 & l2 != l1 & l2 !=l3)) {
		cout << "Equilatero: F" << endl;
		cout << "Isoseles: V" << endl;
		cout << "Escaleno: F" << endl;
	}
	else if (l1 == l2 & l2 == l3 & l3 == l1) {
		cout << "Equilatero: V" << endl;
		cout << "Isoseles: F" << endl;
		cout << "Escaleno: F" << endl;
	}
		cin.get(); cin.get();
}