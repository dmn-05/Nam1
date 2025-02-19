#include<iostream>
using namespace std;
void main()
{
	int u = 0, i = 1, n;
	cout << "Nhap so N:\n";
	cin >> n;
	do
	{
		if (n % i == 0)
		{
			u++;
		}
		i++;
	} while (i <= n);
	cout << n << " co " << u << " uoc\n";
}