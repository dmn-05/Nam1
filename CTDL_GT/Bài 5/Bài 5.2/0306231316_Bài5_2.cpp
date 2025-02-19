#include<iostream>
#include<conio.h>
#include<string>
#include<cstdlib>

using namespace std;

struct BAIHAT
{
	string TenBH;
	int namPH,view;
};
void Nhap(BAIHAT baihat[], int n)
{
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ten bai hat:\n";
		getline(cin, baihat[i].TenBH);
		baihat[i].namPH = 1900 + rand() % (2024 - 1900 + 1);
		baihat[i].view = 100000 + rand() % (2000000 - 100000 + 1);
	}
}
void xuat(BAIHAT baihat[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << baihat[i].TenBH << "\t" << baihat[i].namPH << "\t" << baihat[i].view << endl;
	}
}
void timview(BAIHAT baihat[], int n)
{
	int max = 0, min = 0;
	for (int i = 1; i < n; i++)
	{
		if (baihat[i].view>baihat[max].view)
		{
			max = i;
		}
		if (baihat[i].view<baihat[min].view)
		{
			min = i;
		}
	}
	cout << "Bai hat co so view cao nhat la:\n";
	cout << baihat[max].TenBH << "\t" << baihat[max].namPH << "\t" << baihat[max].view << endl;
	cout << "Bai hat co so view thap nhat la:\n";
	cout << baihat[min].TenBH << "\t" << baihat[min].namPH << "\t" << baihat[min].view << endl;
}
void timten(BAIHAT baihat[], int n)
{
	string x;
	bool kt = true;
	cout << "Nhap ten bai hat can tim: ";
	cin.ignore();
	getline(cin, x);
	for (int i = 0; i < n; i++)
	{
		if (baihat[i].TenBH==x)
		{
			cout << baihat[i].TenBH << "\t" << baihat[i].namPH << "\t" << baihat[i].view << endl;
			kt = false;
			break;
		}
	}
	if (kt)
	{
		cout << "Khong co bai hat\n";
	}
}
void sapxepNPH(BAIHAT baihat[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (baihat[i].namPH>baihat[j].namPH)
			{
				swap(baihat[i], baihat[j]);
			}
		}
	}
	xuat(baihat, n);
}
void sapxepview(BAIHAT baihat[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (baihat[i].view < baihat[j].view)
			{
				swap(baihat[i], baihat[j]);
			}
		}
	}
	xuat(baihat, n);
}
void main()
{
	BAIHAT baihat[100];
	int n, cn;
	cout << "Nhap so luong bai hat: ";
	cin >> n;
	Nhap(baihat, n);
	xuat(baihat, n);
	do
	{
		cout << "1. tim bai hat co view cao nhat, thap nhat\n";
		cout << "2. tim bai hat theo ten\n";
		cout<<"3.sap xep tang dan theo nam phat hanh\n";
		cout << "4.sap xep giam dan theo so view\n";
		cout << "Nhap chuc nang: ";
		cin >> cn;
		switch (cn)
		{
		case 1:
			timview(baihat, n);
			break;
		case 2:
			timten(baihat, n);
			break;
		case 3:
			sapxepNPH(baihat, n);
			break;
		case 4:
			sapxepview(baihat, n);
			break;
		default:
			cout << "Khong co chuc nang nay\n";
			break;
		}
	} while (_getch()!=27);
}