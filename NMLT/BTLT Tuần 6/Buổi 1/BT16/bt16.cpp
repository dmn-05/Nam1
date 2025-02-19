#include<iostream>
using namespace std;
void main()
{
	int n, i = 1, a, b;
	while (true)
	{
		cout << "Nhap so: ";
		cin >> n;
		b = n % 10;
		a = (n / 10) % 10;
		if (a==0)
		{
			cout << "Stop";
			break;
		}
		if (a>=b)
		{
			cout << a << " " << b << endl;
		}
		else
		{
			cout << b << " " << a << endl;
		}
	}
}