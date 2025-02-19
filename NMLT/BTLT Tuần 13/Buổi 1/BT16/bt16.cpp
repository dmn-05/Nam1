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
int snn(int a[][max], int dong, int cot)
{
	int sonn=INT_MAX;
	for (int j = 0; j < dong; j++)
	{
		if (a[j][cot] < sonn)
		{
			sonn=a[j][cot];
		}
	}
	return sonn;
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
	int tong = 0;
	double tbc;
	int armang2chieu[max][max], d, c;
	nhapmang2chieu(armang2chieu, d, c);
	xuatMang2chieu(armang2chieu, d, c);
	for (int i = 0; i < c; i++)
	{
		tong += snn(armang2chieu, d, i);
	}
	tbc = double(tong) / c;
	cout << "trung binh cong cac so nho nhat cua moi cot la:" << tbc << endl;
}