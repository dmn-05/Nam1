#include<iostream>
using namespace std;
void main()
{
	int n = 9,j, h=0,k;
	for (int i = 1; i <= n; i++)
	{
		if (i<n/2+1)
		{
			for ( j = 1; j < n-i; j++)
			{
				cout << "  ";
			}
			for ( k = 1; k <= (2 * i - 1); k++)
			{
				cout << "* ";
			}
			cout << endl;
			h = i;
		}
		else if (i==n/2+1)
		{
			for ( j = 1; j < n-i; j++)
			{
				cout << "  ";
			}
			for ( k = 1; k <= n; k++)
			{
				cout << "* ";
			}
			cout << endl;
		}
		else
		{
			for ( j = 1; j <= i-2; j++)
			{
				cout << "  ";
			}
			for (k = 1; k < (n-i)*2+2; k++)
			{
				cout << "* ";
			}
			cout<<endl;
		}
	}
	
}