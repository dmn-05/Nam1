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
	if (A > B)
	{
		cout << " A la so lon hon";
	}
	else
	{
		if (B > A)
		{
			cout << " B la so lon hon";
		}
		else
		{
			cout << " hai so bang nhau ";
		}
	}
}