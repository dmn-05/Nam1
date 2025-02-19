#include<iostream>
using namespace std;
void main()
{
	double dt, luong;
	while (true)
	{
		cout << "Nhap vao doanh thu cua nhan vien (-1 de ket thuc): ";
		cin >> dt;
		if (dt==-1)
		{
			break;
		}
		luong = 200 + 0.09 * dt;
		cout << "luong nhan vien la: $" << luong << endl;
	}
}