#include<iostream>
using namespace std;
void main()
{
	int n, i = 10,d,c;
	do
	{
		d = i % 10;
		c = i / 10;
		if ((d*c)==2*(d+c))
		{
			cout << i << " ";
		}
		i++;
	} while (i<=99);
}