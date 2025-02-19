#include<iostream>
using namespace std;
void main()
{
	int a, b;
	cout << "Nhap so nguyen A:\n";
	cin >> a;
	cout << "Nhap so nguyen B:\n";
	cin >> b;
	if (a%b==0)
	{
		cout << "A la boi so cua B";
	}
	else
	{
		cout << "A khong phai boi so cua B";
	}
}
