#include<iostream>
using namespace std;
void main()
{
	int n, k=0, o;
	cout << "Nhap vao so N:\n";
	cin >> n;
	o = n;
	for (; n!=0; n/=10)
	{
		k = k * 10 + n % 10;
	}
	if (k==o)
	{
		cout << o << " la so ganh" << endl;
	}
	else
	{
		cout << o << " khong phai la so ganh" << endl;
	}
}