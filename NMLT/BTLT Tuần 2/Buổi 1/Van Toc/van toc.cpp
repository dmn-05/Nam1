#include<iostream>
using namespace std;
void main()
{
	float X1, X2, T1, T2, v;
	cout << " vi tri ban dau:\n";
	cin >> X1;
	cout << " vi tri cuoi cung:\n";
	cin >> X2;
	X2 > X1 >= 0;
	cout << "thoi diem ban dau:\n";
	cin >> T1;
	cout << "thoi diem cuoi:\n";
	cin >> T2;
	T2 > T1 >= 0;
	v = (X2 - X1) / (T2 - T1);
	cout << "van toc la: " << v;

}