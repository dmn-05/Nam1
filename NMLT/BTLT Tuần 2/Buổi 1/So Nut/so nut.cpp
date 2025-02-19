#include<iostream>
using namespace std;
void main()
{
	int n;
	int d1, d2, d3, d4, d5, sonut;
	cout << "hay nhap 5 chu so:\n";
	cin >> n;
	d1 = n % 10;
	n = n / 10;
	d2 = n % 10;
	n = n / 10;
	d3 = n % 10;
	n = n / 10;
	d4 = n % 10;
	n = n / 10;
	d5 = n % 10;
	n = n / 10;
	sonut = (d1 + d2 + d3 + d4 + d5) % 10;
	cout << "so nut la: " << sonut;
}