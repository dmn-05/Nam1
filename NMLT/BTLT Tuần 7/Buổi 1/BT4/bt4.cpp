#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int n, i,t;
	double x;
	cout << "Nhap so nguyen duong: ";
	cin >> n;
	for ( i = 1; i <= n; i++)
	{	
		t = sqrt(i);
		if (i%2==0&&t*t==i)
		{
			cout <<"can chan la "<<i<<endl;
		}
	}
}