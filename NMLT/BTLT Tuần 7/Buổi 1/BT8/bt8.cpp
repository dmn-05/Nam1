#include<iostream>
using namespace std;
void main()
{
	int n, i,k=0;
	cout << "Nhap So Nguyen Duong N:\n";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0 && i % 2 != 0)
		{
			k += 1;
		}
	}
	cout << "So nghiem le la: " << k << endl;
}