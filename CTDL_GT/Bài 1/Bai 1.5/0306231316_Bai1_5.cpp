#include<iostream>
#include<string>
#include<conio.h>
#include<time.h>
#include<fstream>
using namespace std;

void nhapfile(int a[], int& n)
{
	fstream file;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	file.open("Dulieu.txt", ios::app);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu a[" << i << "]: ";
		cin >> a[i];
		file << a[i] << endl;
	}
	file.close();
}
void docfile(int a[], int n)
{
	fstream file;
	string t;
	file.open("Dulieu.txt", ios::in);
	n = 0;
	while (file)
	{
		file >> a[n];
		getline(file, t);
		n++;
	}n--;
	file.close();
}
void xuatfile(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void timtongln(int a[], int n)
{
	ifstream file;
	int max=INT_MIN, tong;
	file.open("Dulieu.txt", ios::in);
	for (int i = 0; i < n; i++)
	{
		tong = a[i];
		for (int j = i+1; j < n; j++)
		{
			if (tong > max)
			{
				max = tong;
			}
			tong += a[j];
		}
	}
	cout << max;
	file.close();
}
void main()
{
	int a[100],n;
	nhapfile(a, n);
	docfile(a, n);
	xuatfile(a, n);
	timtongln(a, n);
}