#include<iostream>
using namespace std;
void main()
{
	int n, t, a;
	while (true)
	{
		t = 0;
		cout << "Nhap so N:\n";
		cin >> n;
		if (n<=0)
		{
			break;
		}
		while (n!=0)
		{
			a = n % 10;
			t += a;
			n = n / 10;
		}
		cout << "tong la: " << t << endl;
	}
}