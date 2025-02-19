#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int A, B;
	cout << "hay nhap A\n";
	cin >> A;
	cout << "hay nhap B\n";
	cin >> B;
	if (B%A==0)
	{
		cout << " A la uoc cua B";
	}
	else
	{
		cout << "A khong phai uoc cua B";
	}
}