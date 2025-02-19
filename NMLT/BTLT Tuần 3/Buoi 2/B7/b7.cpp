#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int A,B,C;
	cout << "hay nhap A\n";
	cin >> A;
	cout << "hay nhap B\n";
	cin >> B;
	cout << "hay nhap C\n";
	cin >> C;
	if (A+B>C&&A+C>B&&B+C>A)
	{
		cout << " A,B,C la ba canh cua tam giac ";
	}
	else
	{
		cout << "A,B,C khong phai la ba canh cua tam giac";
	}
}