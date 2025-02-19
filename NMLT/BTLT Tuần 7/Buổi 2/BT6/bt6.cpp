#include<iostream>
using namespace std;
void main()
{
	int u, i=1, n;
	cout << "Nhap so N:\n";
	cin >> n;
	cout << n << " co uoc la: ";
	do
	{
		if (n % i == 0)
		{
			cout << i <<" ";
		}
		i++;
	} while (i<=n);
}