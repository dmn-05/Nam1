#include<iostream>
using namespace std;
void main()
{
	int n, k = 0, o;
	while (true)
	{
		cout << "Nhap vao so N:\n";
		cin >> n;
		if (n==-1)
		{
			break;
		}
		o = n;
		do
		{
			k = k * 10 + n % 10;
			n /= 10;
		} while (n != 0);
		if (k == o)
		{
			cout << o << " la so doi xung" << endl;
		}
		else
		{
			cout << o << " khong phai la so doi xung" << endl;
		}
	}
}