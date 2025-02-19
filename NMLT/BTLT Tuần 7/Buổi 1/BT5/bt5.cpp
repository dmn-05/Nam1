#include<iostream>
using namespace std;
void main()
{
	int n,x,i;
	cout << "Nhap so N:\n";
	cin >> n;
	for ( i = 0; n!=0; n=n/10)
	{
		x = n % 10;
		if (x==7)
		{
			i += 1;
		}
	}
	cout << "co " << i << " ki tu 7 trong so vua nhap\n";
}