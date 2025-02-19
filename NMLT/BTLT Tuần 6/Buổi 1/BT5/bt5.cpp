#include<iostream>
using namespace std;
void main()
{
	int n, s=0, i=0;
	cout << "Nhap N: ";
	cin >> n;
	while (i<= n)
	{
			s = s + (2*i+1);
		i++;
	}
	cout << "gia tri bieu thuc la: " << s;
}
