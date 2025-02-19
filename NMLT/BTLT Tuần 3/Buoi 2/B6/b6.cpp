#include<iostream>
using namespace std;
void main()
{
	int A;
	cout << "hay nhap thang vao\n";
	cin >> A;
	if (A >= 1 && A <= 12)
	{
		cout << " thang hop le";
	}
	else
	{
		cout << "thang khong hop le";
	}
}