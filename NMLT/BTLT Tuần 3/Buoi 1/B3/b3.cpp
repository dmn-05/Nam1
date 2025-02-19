#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int x, kq;
	cout << "Hay nhap X;\n";
	cin >> x;
	kq = pow(x, 8) - 5 + abs(x);
	cout << "ket qua: " << kq;
}