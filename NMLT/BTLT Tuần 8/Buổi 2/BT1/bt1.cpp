#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int n, dem, i;
	char ch;
	while (true)
	{
		cout << "Bam phim bat ki de tip tuc, Esc de ket thuc:\n";
		ch = _getch();
		if (ch==27)
		{
			break;
		}
		do
		{
			cout << "Nhap so N:\n";
			cin >> n;
		} while (n<2);
		dem = 0;
		for ( i = 1; i <=n; i++)
		{
			if (n%i==0)
			{
				dem += 1;
			}
		}
		if (dem==2)
		{
			cout << n << " la so nguyen to\n";
		}
		else
		{
			cout << n << " khong phai so nguyen to\n";
		}
	}
}