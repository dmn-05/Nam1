#include<iostream>
using namespace std;
void main()
{
	int n, i, x, S=0;
	cin >> n;
	cin >> x;
	for ( i = 1; i <=n; i++)
	{
		S = S + x;
	}
	cout << S;
}