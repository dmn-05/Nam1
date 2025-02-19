#include<iostream>
#include<string>
#include<conio.h>
#include<time.h>
#include<fstream>
using namespace std;

void nhapfileA(int a[], int& n)
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
void nhapfileB(int a[], int& n)
{
	fstream file;
	srand(time(NULL));
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	file.open("Dulieu.txt", ios::app);
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
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
void main()
{
	int cn, a[100], n;
	cout << "1. nhap tu ban phim\n";
	cout << "2. nhap ramdom\n";
	cout << "Moi nhap chuc nang:\n";
	cin >> cn;
	switch (cn)
	{
	case 1:
		nhapfileA(a, n);
		break;
	case 2:
		nhapfileB(a, n);
		break;
	}
	docfile(a, n);
	xuatfile(a, n);
}