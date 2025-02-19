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
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
bool SHH(int a[][max], int dong, int cot)
{
	int t=0 ;
	for (int i = 1; i < a[dong][cot]; i++)
	{
		if (a[dong][cot] % i == 0)
		{
			t += i;
		}
	}
	if (t==a[dong][cot])
	{
		return true;
	}
	return false;
}
int tinhtong(int a[][max], int dong, int cot)
{
	int tong = 0;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (SHH(a, i, j))
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
	cout << "tong cac so hoan hao trong mang la: " << tinhtong(armang2chieu, d, c) << endl;

}