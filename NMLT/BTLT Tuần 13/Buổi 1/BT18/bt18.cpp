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
void timvtsochancuoi(int a[][max], int dong, int cot)
{
	int vt1 = -1, vt2;
	for (int i = dong-1; -1 < i; i--)
	{
		for (int j = cot-1; -1 < j; j--)
		{
			if (a[i][j] % 2 == 0)
			{
				vt1 = i;
				vt2 = j;
				break;
			}
		}
		if (vt1!=-1)
		{
			break;
		}
	}
	cout << "vi tri chan cuoi mang la a[" << vt1 << "][" << vt2 << "]\n";
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
	timvtsochancuoi(armang2chieu, d, c);
}