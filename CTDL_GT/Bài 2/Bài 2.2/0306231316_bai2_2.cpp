#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

void LinearSearch1(int a[], int n, int x)
{
	int l=0, m, r=n-1;
	
	while (l<=r)
	{
		m = (l + r) / 2;
		cout << "l=" << l << " r=" << r << " m=" << m << endl;
		if (a[m]==x)
		{
			cout <<"vi tri can tim la: "<< m <<endl;		
			break;
		}
		if (x<=a[m])
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	if (l>r)
	{
		cout << "l=" << l << " r=" << r;
		cout << " khong co\n";
	}
}
void main()
{
	int a[100] = {1,2,3,5,6,7,9};
	int n=7, x;
	do
	{
		cout << "Nhap so can tim\n";
		cin >> x;
		LinearSearch1(a, n, x);
		cout << endl;
		cout << "Nhan Esc de dung, phim khac de tiep tuc\n";
	} while (_getch() != 27);
}