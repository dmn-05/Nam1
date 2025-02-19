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
int tinhtong(int a[][max], int dong, int cot)
{
	int tong = 0;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j]%2==0)
			{
				tong += a[i][j];
			}
		}
	}
	return tong;
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
	cout << "tong cac phan tu chan la: " << tinhtong(armang2chieu, d, c) << endl;
	
}