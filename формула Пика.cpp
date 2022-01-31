#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	float q, b, f;


	cout << "введи кол-во точек внутри: ";
	cin>> b;
	cout << "введи кол-во точек на: ";
	cin >> f;
	q = (b + (f / 2) - 1);//формула Пика
	cout << " S = "<<q;
	return 0;



}

