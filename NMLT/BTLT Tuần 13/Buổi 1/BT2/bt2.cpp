#include<iostream>
#define max_dong 50
#define max_cot 100
using namespace std;
void nhapMang2chieu(double a[][max_cot], int& dong, int& cot)
{
	do
	{
		cout << "Hay nhap so dong:\n";
		cin >> dong;
	} while (dong<=0);
	do
	{
		cout << "Hay nhap so cot:\n";
		cin >> cot;
	} while (cot<=0);
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	}
}
void xuatMang2chieu(double a[][max_cot], int dong, int cot)
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
	double arMang2chieu[max_dong][max_cot];
	int dong, cot;
	nhapMang2chieu(arMang2chieu, dong, cot);
	cout << "====================================\n";
	xuatMang2chieu(arMang2chieu, dong, cot);
}