#include<iostream>
using namespace std;
/*
void main()
{
	int n, u, tong, dem=0 ;
	cout << "Nhap N:\n";
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		tong = 0;
		for ( u = 1; u < i; u++)
		{
			if (i%u==0)
			{
				tong += u;
			}
		}
		if (tong==i)
		{
			dem += 1;
		}
	}
	cout << "so luong so hoan hao be hon " << n << " la: " << dem;
}
*/
/*
1 mhap so 
2 kiem tra
3 xuat sohh
*/
int nhapsonguyenduong(int& n)
{
	do
	{
		cout << "Nhap N:\n";
		cin >> n;
	} while (n<=0);
	return n;
}
bool kiemtra(int sohoanhao)
{
	int tong = 0;
	for (int i = 1; i < sohoanhao; i++)
	{
		if (sohoanhao%i==0)
		{
			tong += i;
		}
	}
	if (tong==sohoanhao)
	{
		return true;
	}
	else
	{
		return false;
	} 
}
void main()
{
	int a;
	int dem=0;
	nhapsonguyenduong(a);
		if (kiemtra(a))
		{
			cout << "so hoan hao";
		}
		else
		{
			cout << "KHong phai so hoan hao";
		}
	
}