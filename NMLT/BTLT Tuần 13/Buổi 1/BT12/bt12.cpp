#include <iostream>
using namespace std;
#define MAX 100
void NhapMang2Chieu(int a[][MAX], int& n)
{
	do
	{
		cout << "nhap so cot ";
		cin >> n;
	} while (n < 1);

	for (int d = 0; d < n; d++)
	{
		for (int c = 0; c < n; c++)
		{
			cout << "a[" << d << "][" << c << "] =";
			cin >> a[d][c];
		}
	}
}
void xuatMang2chieu(int a[][MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
int duongcheochinh(int a[][MAX], int n)
{
	int tong = 0;
	for (int d = 0; d < n; d++)
	{
		tong += a[d][d];
	}
	return tong;
}
void main()
{
	int arMang2Chieu[MAX][MAX];
	int dongcot;
	NhapMang2Chieu(arMang2Chieu, dongcot);
	xuatMang2chieu(arMang2Chieu, dongcot);
	cout<<"tong cac phan tu duong cheo chinh la: "<<duongcheochinh(arMang2Chieu, dongcot);
}
