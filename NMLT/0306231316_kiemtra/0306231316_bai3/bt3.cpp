#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int x, y ,i;
	cout << "Nhap vao so x:\n";
	cin >> x;
	cout << "Nhap vao so y:\n";
	cin >> y;
	if (x>y)
	{
		cout << "Loi";
	}
	for ( i = x; i <= y; i++)
	{
		if (i%2==1)
		{
			cout << i << endl;
		}
	}
}