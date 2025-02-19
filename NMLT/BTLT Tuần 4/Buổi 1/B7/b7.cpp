#include<iostream>
using namespace std;
void main()
{
	float a, b, c;
	cout << "Nhap so A:\n";
	cin >> a;
	cout << "Nhap so B:\n";
	cin >> b;
	cout << "Nhap so C:\n";
	cin >> c;
	if (b>a&&b>c)
	{
		cout << "B la so lon nhat";
	}
	else
	{
		if (c>a&&c>b)
		{
			cout << "C la so lon nhat";
		}
		else
		{
			cout << "A la sao lon nhat";
		}
	}	
}