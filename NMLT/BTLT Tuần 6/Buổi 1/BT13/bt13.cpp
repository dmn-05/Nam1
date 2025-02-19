#include<iostream>
using namespace std;
void main()
{
	int n, dem=0, kt;
	cin >>  n;
	while (n>0)
	{
		kt = n % 10;
		if (kt==7)
		{
			dem++;
		}
		n /= 10;
	}
	cout << "co " << dem << " so 7";
}