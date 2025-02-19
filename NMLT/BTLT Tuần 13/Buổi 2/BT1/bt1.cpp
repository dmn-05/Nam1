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
bool demsoamduong(int a[][max_cot], int dong, int cot)
{
	if (a[dong][cot] > 0)
	{
		return true;
	}
	else if (a[dong][cot] != 0)
	{
		return false;
	}

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
	int demam = 0;
	int demduong = 0;
	int arMang2chieu[max_dong][max_cot];
	int numdong, numcot;
	nhapmang2chieu(arMang2chieu, numdong, numcot);
	cout << "====================================\n";
	xuatMang2chieu(arMang2chieu, numdong, numcot);
	for (int i = 0; i < numdong; i++)
	{
		for (int j = 0; j < numcot; j++)
		{
			if (demsoamduong(arMang2chieu,i,j))
			{
				demduong++;
			}
			else
			{
				demam++;
			}
		}
	}
	cout << "so luong so duong la: " << demduong << endl;
	cout << "so luong so am la: " << demam << endl;
}