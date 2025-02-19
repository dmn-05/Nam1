#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	double d, r, dc;
	cout << "Hay nhap chieu dai:\n";
	cin >> d;
	cout << "Hay nhap chieu rong:\n";
	cin >> r;
	dc = sqrt(pow(d, 2) + pow(r, 2));
	cout << "Do dai duong cheo: " << dc;
}