#include<iostream>
using namespace std;
void main()
{
	int so, sole = 0, sochan = 0;
	while (true)
	{
		cout << "Nhap vao so nguyen Hoac Nhap 0 de ket thuc: ";
		cin >> so;
		if (so == 0)
		{
			break;
		}
		if (so % 2== 0)
		{
			sochan++;
		}
		else
		{
			sole++;
		}
	}
	cout << "co " << sole << " so le\n";
	cout << "co " << sochan << " so chan\n";
}