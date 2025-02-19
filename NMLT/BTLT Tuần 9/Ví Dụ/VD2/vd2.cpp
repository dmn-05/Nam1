#include<iostream>
using namespace std;
void TinhTong(int a, int b)
{
	int sum;
	//tinh toan
	sum = a + b;
	//xuat gia tri
	cout << a << "+" << b << "=" << sum;

}
void main()
{
	//khai bao bien 
	int num1, num2;
	//nhap gia tri
	cout << "Nhap so thu 1:\n";
	cin >> num1;
	cout << "Nhap so thu 2:\n";
	cin >> num2;
	TinhTong(num1, num2);//Loi goi ham
}