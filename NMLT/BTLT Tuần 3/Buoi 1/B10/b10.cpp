#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void main()
{
	int a;
	double F1, F2;
	cout << "hay nhap a:\n";
	cin >> a;
	F1 = sqrt(a + sqrt(a + sqrt(a)));
	F2 = 1.0*a / (2 * a + a / (2 * a + a / 2));
	
	cout << "bieu thuc 1: " << F1 << endl;
	cout << "bieu thuc 2: " << F2 << endl;
}