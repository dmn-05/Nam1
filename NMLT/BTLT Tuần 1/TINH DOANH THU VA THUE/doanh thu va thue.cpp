#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	float tongdoanhthu, thue, thuehangthang;
	cout << "Hay nhap tong doanh thu trong thang:\n";
	cin >> tongdoanhthu;
	cout << "Hay nhap thue theo dang thap phan:\n";
	cin >> thue;
	thuehangthang = tongdoanhthu * thue;
	cout << "Tong doanh thu trong thang: " << tongdoanhthu << endl;
	cout << "Thue phai dong hang thang: " << thuehangthang;
	cout << setprecision(2);
}