#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	int soluong;
	float dongia, tong, thue, tongthue;
	cout << "nhap don gia: ";
	cin >> dongia;
	cout << "nhap so luong: ";
	cin >> soluong;
	tong = soluong * dongia;
	thue = tong * 0.1;
	tongthue = tong + thue;
	cout << setw(4) << "Tong tien truoc thue: " << tong << endl;
	cout << setw(15) << "Tien thue:" << setw(11) << thue << endl;
	cout << setw(6) << "Tong tien sau thue:" << setw(7) << tongthue;
}