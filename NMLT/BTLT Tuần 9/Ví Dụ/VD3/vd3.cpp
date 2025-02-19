#include<iostream>
using namespace std;
void TinhTong(int a, int b, int &sum)
{
	sum = a + b;
}
void main()
{
	int num1, num2, sum;
	//nhap gia tri
	cout << "Nhap so thu 1:\n";
	cin >> num1;
	cout << "Nhap so thu 2:\n";
	cin >> num2;
	TinhTong(num1, num2, sum);
	cout << num1 << "+" << num2 << "=" << sum;
}