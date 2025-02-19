#include<iostream>
using namespace std;
void main()
{
	int i = 0;
	int n1 = 1, n0 = 1;
	int n,n2;
	cout << "Nhap N:\n";
	cin >> n;
	while (i<=n)
	{
		n2 = n1 + n0;
		if (i==0)
		{
			cout << n0 << " + ";
		}
		else if (i==1)
		{
			cout << n1 ;
		}
		else
		{
			cout << " + " << n2 ;
			n0 = n1;
			n1 = n2;
		}
		i++;
	}
}