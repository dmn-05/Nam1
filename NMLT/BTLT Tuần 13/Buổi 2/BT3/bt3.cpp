#include<iostream>
#define max_dong 50
#define max_cot 100
using namespace std;
void nhapmang2chieu(int a[][max_cot], int& dong, int& cot)
{
	do
	{
		cout << "Hay nhap so dong:\n";
		cin >> dong;
	} while (dong <= 0);
	do
	{
		cout << "Nhap vao so cot:\n";
		cin >> cot;
	} while (cot <= 0);

	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
int nhap(int& x)
{
	cout << "Nhap so x:\n";
	cin >> x;
	return x;
}
bool dem(int a[][max_cot], int dong, int cot, int x)
{
	if (a[dong][cot] == x)
	{
		return true;
	}
	return false;
}
void xuatMang2chieu(int a[][max_cot], int dong, int cot)
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
	int demx = 0, x1;
	int arMang2chieu[max_dong][max_cot];
	int numdong, numcot;
	nhapmang2chieu(arMang2chieu, numdong, numcot);
	nhap(x1);
	cout << "====================================\n";
	xuatMang2chieu(arMang2chieu, numdong, numcot);
	for (int i = 0; i < numdong; i++)
	{
		for (int j = 0; j < numcot; j++)
		{
			if (dem(arMang2chieu, i, j, x1))
			{
				demx++;
			}
		}
	}
	cout << "so luong so x trong mang la: " << demx << endl;
}