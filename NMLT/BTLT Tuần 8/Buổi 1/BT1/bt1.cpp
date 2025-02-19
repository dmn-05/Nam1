#include<iostream>
using namespace std;
void main()
{
	int n, dem = 0;
	while (true)
	{
		cout << "Nhap vao so N:(-1 de ket thuc)\n";
		cin >> n;
		if (n==-1)
		{
			break;
		}
		do
		{
			dem++;
			n /= 10;
		} while (n != 0);
		cout << "co " << dem << " ki so\n";
	}
}