#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
struct THISINH
{
	char maso[20], hoten[50];
	DIEM diem;
	double tongdiem;
};
struct DIEM
{
	double toan, ly, hoa;
};
void nhaptt(THISINH& thisinh1)
{
	cout << "Nhap ma so sinh vien: ";
	cin.getline(thisinh1.maso,5);
	cin.ignore();
	cout << "Nhap ho ten sinh vien: ";
	cin.getline(thisinh1.hoten,30);
	cin.ignore();
}
void xuattt(THISINH thisinh1)
{
	cout << thisinh1.maso<<endl;
	cout << thisinh1.hoten<<endl;
}
void nhapdiem(DIEM& diem)
{
	
	cout << "Nhap diem toan: ";
	cin >> diem.toan;
	cout << "Nhap diem hoa: ";
	cin >> diem.hoa;
	cout << "Nhap diem ly: ";
	cin >> diem.ly;
	cin.ignore();
}
bool kiemtra(THISINH thisinh)
{
	if (thisinh.tongdiem >15&&thisinh.diem.toan>0&& thisinh.diem.ly > 0 && thisinh.diem.hoa > 0)
	{
		return 1;
	}
	return 0;
}
//void sapxep(THISINH thisinh, int sl)
//{
//	for (int i = 0; i < sl; i++)
//	{
//		for (int j = +1; j <= sl; j++)
//		{
//			if (diem.tong < diem.tong[j])
//			{
//
//			}
//		}
//	}
//	
//	qsort
//}
void main()
{
	THISINH thisinh[1000];
	DIEM diem1[1000];
	int n;
	cout << "Nhap so luong: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		nhaptt(thisinh[i]);
		nhapdiem(diem1[i]);
		thisinh->tongdiem = thisinh->diem.hoa + thisinh->diem.ly + thisinh->diem.toan;
	}
	for (int i = 0; i < n; i++)
	{
		xuattt(thisinh[i]);
		if (kiemtra(thisinh[i]))
		{
			cout << "Dau\n";
		}
		else
		{
			cout << "Khong dau\n";
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j <= n-1; j++)
		{
			if (thisinh[i].tongdiem > thisinh[j].tongdiem)
			{
				int tam = thisinh[i].tongdiem;
				thisinh[i].tongdiem = thisinh[j].tongdiem;
				thisinh[j].tongdiem = tam;
			}
		}
	}
	
}