#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	cout << "tinh diem trung binh:\n";
	cout << "==========================\n";
	float diemthunhat, diemthuhai, diemthuba, diemtrungbinh;
	cout << "hay nhap diem thu nhat:\n";
	cin >> diemthunhat;
	cout << "hay nhap diem thu hai:\n";
	cin >> diemthuhai;
	cout << "hay nhap diem thu ba:\n";
	cin >> diemthuba;
	diemtrungbinh=(diemthunhat+diemthuhai+diemthuba)/3;
	cout << "diem trung binh la:\n" << diemtrungbinh;
}