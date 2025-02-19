#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int tp = 0, i=0, n, tam;
	int x;
	cout << "Nhap nhi phan vao:\n";
	cin >> n;
	tam = n;
	while (n!=0)
	{
		x = n % 10;
		n /= 10;
		if (x!=0&&x!=1)
		{
			cout << "Nhap nhi phan vao:\n";
			cin >> n;
			tam = n;
		}
	}
	for (;tam != 0;i++)
	{
		x = tam % 10;
		tp += x * pow(2, i);
		tam= tam / 10;
	}
	cout << "Gia tri tuong ung la: "<<tp;
}