#include<iostream>
using namespace std;
void main()
{
	int n;
	double trungbinh, d1, d2, d3;
	cout << "hay nhap 3 chu so:\n";
	cin >> n;
	d1 = n % 10;
	n = n / 10;
	d2 = n % 10;
	n = n / 10;
	d3 = n % 10;
	n = n / 10;
	trungbinh = (d1 + d2 + d3) / 3;
	cout <<"Trung binh cong ba chu so la: " << trungbinh<<endl;
	system("pause");
}