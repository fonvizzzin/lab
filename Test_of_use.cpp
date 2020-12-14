#include <iostream>

#include "TVector.h"

#include "TMatrix.h"

int main()

{

	setlocale(LC_ALL, "Russian");

	int size;

	cout << "введите размер матрицы";

	cin >> size;

	TMatrix<int> a(5), b(5), c(5), d(size), e(size), f(size);

	int i, j;

	//задание матриц a и b

	for (i = 0; i < 5; i++) {

		for (j = i; j < 5; j++)

		{

			a[i][j] = i *5 + j;

			b[i][j] = (i * 10 + j);

		}
	}
	

	cout << "Matrix a" << endl << a << endl;
	cout << "Matrix b" << endl << b << endl;
	
	//задание матриц b и c
	
	for (i = 0; i < size; i++) {

		for (j = i; j < size; j++)

		{

			d[i][j] = i * 10 + j;

			e[i][j] = (i * 20 + j+5);

		}
	}
	cout << "Matrix d" << endl << d << endl;
	cout << "Matrix c" << endl << e << endl;

	cout << "тестирование сложения и умножения матриц:" << endl;
	c = a + b;
	cout << "Matrix a + b = " << endl << c<<endl;

	f = d * e ;
	cout << "Matrix d*e = " << endl << f<<endl;

	cout << "тестирование вычитания матриц:" << endl;
	
	f = e-d;
	cout << "Matrix d-e = " << endl << f<<endl;
	
	return 0;
}