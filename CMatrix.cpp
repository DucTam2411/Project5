#include "CMatrix.h"
ifstream Fin("E:/C++/OOP/Submision/test.txt");
CMatrix::CMatrix(){}
CMatrix::CMatrix(int x)
{
	n = x;
	a = new int* [n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = 0;
		}
	}
}
void CMatrix::nhap() {
	//cout << "Nhap n: ";
	Fin >> n;
	a = new int* [n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			Fin >> a[i][j];
		}
	
	}
	
}
void CMatrix::xuat() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
}

int CMatrix::tongPhanTu()
{
	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			res += a[i][j];
		}
	}
	return res;
}

int CMatrix::operator!()
{
	return tongPhanTu();
}

CMatrix CMatrix::tongMaTran(CMatrix b)
{
	if (n != b.n) {
		return b;
	}
	CMatrix tem(n);
	for (int i = 0; i < n; i++) {
		for (int j= 0; j < n; j++) {
			tem.a[i][j] = a[i][j] + b.a[i][j];
		}
	}
	return tem;
}

CMatrix CMatrix::operator+(CMatrix b)
{
	return tongMaTran(b);
}
