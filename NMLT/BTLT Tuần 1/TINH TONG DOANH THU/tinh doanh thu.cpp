#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	cout << "Tong Doanh Thu:\n";
	cout << "====================\n";
	int soluong1, soluong2, soluong3;
	float tongmy, tonghd, tongcd, tongtatca;
	cout << "hay nhap vao so ghe da ban loai thuoc dia my:\n";
	cin >> soluong1;
	cout << "hay nhap vao so ghe da ban loai hien dai:\n";
	cin >> soluong2;
	cout << "hay nhap vao so ghe da ban loai phap co dien:\n";
	cin >> soluong3;
	tongmy = soluong1 * 85.00;
	tonghd = soluong2 * 57.50;
	tongcd = soluong3 * 127.75;
	tongtatca = tongmy + tonghd + tongcd;
	cout << "Tong doanh thu loai thuoc dia My: " << tongmy<<endl;
	cout << "Tong doanh thu loai hien dai: " << tonghd<<endl;
	cout << "Tong doanh thu loai co dien phap: " << tongcd << endl;
	cout << "Tong doanh thu tat ca loai: " << tongtatca;
	cout << setprecision(2);
}
