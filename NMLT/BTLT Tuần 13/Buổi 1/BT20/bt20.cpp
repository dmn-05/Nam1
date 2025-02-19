#include<iostream>
using namespace std;
#define max 100
void nhapmang2chieu(int a[][max], int& dong, int& cot)
{
	do
	{
		cout << "Nhap so dong\n";
		cin >> dong;
	} while (dong <= 0);
	do
	{
		cout << "Nhap so cot\n";
		cin >> cot;
	} while (cot <= 0);
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] = \n";
			cin >> a[i][j];
		}
	}
}
void timvtsoduongchanmin(int a[][max], int dong, int cot)
{
	int snn = INT_MAX;
	int vt1 = -1, vt2;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0;j < cot; j++)
		{
			if (a[i][j] % 2 == 0 && a[i][j] > -1 && snn > a[i][j])
			{
				snn = a[i][j];
				vt1 = i;
				vt2 = j;
			}
		}
	}
	if (vt1 == -1)
	{
		cout << "Khong co so am le lon nhat\n";
	}
	else
	{
		cout << "vi tri duong chan nho nhat mang la a[" << vt1 << "][" << vt2 << "]\n";
	}
}
void xuatMang2chieu(int a[][max], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
void main()
{
	int armang2chieu[max][max], d, c;
	nhapmang2chieu(armang2chieu, d, c);
	xuatMang2chieu(armang2chieu, d, c);
	timvtsoduongchanmin(armang2chieu, d, c);
}