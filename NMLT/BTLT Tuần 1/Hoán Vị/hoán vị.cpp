#include<iostream>
using namespace std;
void main()
{
	int a, b, c;
	cout << "Hay nhap a:\n";
	cin >> a;
	cout << "Hay nhap b:\n";
	cin >> b;
	 c= a;
	a = b;
	b = c;
	cout << "a= " << a << ",";
	cout << "b= " << b;
}
