#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

struct NHANVIEN
{
	string HoTen;
	int NamSinh;
};
void Nhap(NHANVIEN nv[], int& n)
{
	cout << "Nhap so luong: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ho ten: ";
		cin.ignore();
		getline(cin, nv[i].HoTen);
		cout << "Nhap nam sinh: ";
		cin >> nv[i].NamSinh;
	}
}
void xuat(NHANVIEN nv[], int n)
{
	cout << "\ndanh sach nhan vien la: ";
	for (int i = 0; i < n; i++)
	{
		cout << "ho ten nguoi thu " << i + 1<<" la: ";
		cout << nv[i].HoTen;
		cout << "\n nam sinh: ";
		cout << nv[i].NamSinh<<endl;
	}
}
void xuat1(NHANVIEN nv[], int n)
{
	cout << "\ndanh sach nhan vien la: \n";
	cout <<"ho ten\t" << "\tnam sinh\n";
	for (int i = 0; i < n; i++)
	{
		cout << nv[i].HoTen<< "\t\t" << nv[i].NamSinh << endl;
	}
}
//int tim(NHANVIEN nv[], int n,string s)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (nv[i].HoTen==s)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
int tim1(NHANVIEN nv[], int n, string s)
{
	int i = 0;
	while(i < n)
	{
		if (nv[i].HoTen == s)
		{
			return i;
		}
		i++;
	}
	return -1;
}
void main()
{
	int n, kq;
	string ten;
	NHANVIEN nhanvien[50];
	Nhap(nhanvien, n);
	xuat1(nhanvien, n);
	cin.ignore();
	do
	{
		cout << "Nhap ten can tim: ";
		getline(cin, ten);
		kq=tim1(nhanvien, n, ten);
		if (kq==-1)
		{
			cout << "khong co\n";
		}
		else
		{
			cout << "Nhan vien can tim nam sinh la: "<<nhanvien[kq].NamSinh;
		}
		cout << "\nNhan esc de thoat hoac phim bat ki de tiep tuc: \n";
	} while (_getch() !=27);
}