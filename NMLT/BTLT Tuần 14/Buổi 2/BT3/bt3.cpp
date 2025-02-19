#include <iostream>
#include <cmath>
using namespace std;
struct HOPSUA
{
	char nhanhieu[100];
	int calo;
	float  dtich;
};
struct NGAY
{
	int ngay, thang, nam;
};
void nhap(HOPSUA& hs)
{
	cout << "Nhap nhan hieu: ";
	cin.getline(hs.nhanhieu,20);
	do
	{
		cout << "Nhap Dung Tich: ";
		cin >> hs.dtich;
	} while (hs.dtich < 1);
	do
	{
		cout << "Nhap calo/100ml : ";
		cin >> hs.calo;
	} while (hs.calo < 1);
}
void nhapngay(NGAY& tg)
{
	do
	{
		cout << "Nhap ngay: ";
		cin >> tg.ngay;
	} while (tg.ngay < 1 || tg.ngay>31);
	do
	{
		cout << "Nhap thang: ";
		cin >> tg.thang;
	} while (tg.thang < 1 || tg.thang > 12);
	do
	{
		cout << "Nhap nam: ";
		cin >> tg.nam;
	} while (tg.nam < 1);
}
bool kiemtrahs(HOPSUA hs)
{ 
	if (strlen(hs.nhanhieu)>20)
	{
		return false;
	}
	if (hs.dtich<0)
	{
		return false;
	}
	if (hs.calo < 0)
	{
		return false;
	}
	return true;
}
bool kiemtrangay(NGAY nsxuat, NGAY hsdung)
{
	if (hsdung.nam>nsxuat.nam)
	{
		return true;
	}
	else if (hsdung.nam == nsxuat.nam)
	{
		if (hsdung.thang > nsxuat.thang)
		{
			return true;
		}
		else if (hsdung.thang == nsxuat.thang)
		{
			if (hsdung.ngay >= nsxuat.ngay)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
bool kiemtrahan(NGAY hsdung, NGAY hientai1)
{
	if (hsdung.nam<hientai1.nam)
	{
		return true;
	}
	else if (hsdung.nam == hientai1.nam)
	{
		if (hsdung.thang < hientai1.thang)
		{
			return true;
		}
		else if (hsdung.thang == hientai1.thang)
		{
			if (hsdung.ngay <= hientai1.ngay)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else false;
	}
	else
	{
		return false;
	}
}
void main()
{
	HOPSUA hsua;
	NGAY nsx,hsd,hientai;
	nhap(hsua);
	nhapngay(nsx);
	nhapngay(hsd);
	nhapngay(hientai);
	if (kiemtrahs(hsua))
	{
		cout << "du lieu hop sua Hop le\n";
	}
	else
	{
		cout << "du lieu hop sua Khong hop le\n";
	}
	if (kiemtrangay(nsx, hsd))
	{
		cout << "Ngay hop le\n";
		if (kiemtrahan(hsd,hientai))
		{
			cout << "Het han\n";
		}
		else
		{
			cout << "Con han\n";
		}
	}
	else
	{
		cout << "Ngay khong hop le\n";
	}
	if (hsua.calo>100)
	{
		cout << "hop sua dat chuan\n";
	}
	else
	{
		cout << "hop sau khong dat chuan\n";
	}
}