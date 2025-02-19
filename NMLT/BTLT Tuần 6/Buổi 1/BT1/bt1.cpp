#include<iostream>
using namespace std;
void main()
{
	float  a;
	cin >> a;
	while (a<0)
	{
		cout << "nhap sai moi nhap lai\n";
		cin >> a;
	}
	cout << "so duong la: " << a;
}