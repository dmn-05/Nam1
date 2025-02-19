#include <iostream>
using namespace std;
#define MAX_ROWS 50
#define MAX_COLS 100

void NhapMang2Chieu(int a[][MAX_COLS], int& m, int& n)
{
	do
	{
		cout << "nhap so dong ";
		cin >> m;
	} while (m < 1);

	do
	{
		cout << "nhap so cot ";
		cin >> n;
	} while (n < 1);

	for (int d = 0; d < m; d++)
	{
		for (int c = 0; c < n; c++)
		{
			cout << "a[" << d << "][" << c << "] =";
			cin >> a[d][c];
		}
	}
}
void KiemTra(int a[][MAX_COLS], int m, int n)
{
	cout << "Danh sach so co tan cung 5: ";
	for (int d = 0; d < m; d++)
	{

		for (int c = 0; c < n; c++)
		{
			if (a[d][c] % 10 == 5)
			{
				cout << a[d][c] << " ";
			}
		}
	}
}
void main()
{
	int arMang2Chieu[MAX_ROWS][MAX_COLS];
	int dong, cot;
	NhapMang2Chieu(arMang2Chieu, dong, cot);
	KiemTra(arMang2Chieu, dong, cot);
}
