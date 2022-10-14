// Lab_03_4.cpp
// < Заяць Анастасія >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 8
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if (((x-R)*(x-R)+(y-R)*(y-R)<=R*R && y >= x) ||
		(y >=x  && y >= -x ))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
