#include<iostream>
using namespace std;
void main()
{
	int lt, th, tbc;
	cout << "Nhap diem ly thuyet: ";
	cin >> lt;
	cout << "Nhap diem thuc hanh: ";
	cin >> th;
	while (lt<0||lt>10)
	{
		cout << "Nhap diem ly thuyet: ";
		cin >> lt;
	}
	while (th < 0 || th>10)
	{
		cout << "Nhap diem thuc hanh: ";
		cin >> th;
	}
	tbc = (lt + th) / 2;
	cout << "Trung binh cong la: "<<tbc;
}
