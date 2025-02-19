#include<fstream>
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
struct thongtin
{
	string hoten;
	int tuoi;
};
void xuat(thongtin sv[], int n)
{
	cout << "\nho va ten\ttuoi\n";
	for (int i = 0; i < n; i++)
	{
		cout << "\n" << sv[i].hoten << "\t" << sv[i].tuoi<<endl;
	}
}
void nhapFile()
{
	ofstream file;
	int n;
	thongtin sv;
	cout << "Nhap so luong sinh vien: ";
	cin >> n;
	file.open("DuLieu.txt",ios::app);
	for (int i = 0; i < n; i++)
	{
		cout << "nhap thong tin sinh vien thu " << i + 1<<endl;
		cin.ignore();
		cout << "Nhap ho va ten SV : ";
		getline(cin, sv.hoten);
		cout << "Nhap tuoi sinh vien: ";
		cin >> sv.tuoi;
		file << sv.hoten << endl;
		file << sv.tuoi << endl;
	}
	file.close();
}
void docFile(thongtin sv[], int& n)
{
	ifstream file;
	string t;
	file.open("DuLieu.txt");
	n = 0;
	while (file)
	{
		getline(file, sv[n].hoten);
		file >> sv[n].tuoi;
		getline(file, t);
		n++;
	}
	n--;
	file.close();
}
void tim(thongtin sv[], int n)
{
	bool kt=true;
	ifstream file;
	string ten;
	cout << "Nhap ten can tim: ";
	cin >> ten;
	file.open("Dulieu.txt",ios::in);
	for (int i = 0; i < n; i++)
	{
		if (ten == sv[i].hoten)
		{
			cout << sv[i].tuoi<<endl;
			kt = false;
		}
	}
	if (kt)
	{
		cout << "Khong co\n";
	}
	file.close();
}
void tim1(thongtin sv[], int n)
{
	ifstream file;
	int tuoi;
	cout << "Nhap tuoi can tim: ";
	cin >> tuoi;
	file.open("Dulieu.txt", ios::in);
	for (int i = 0; i < n; i++)
	{
		if (tuoi == sv[n].tuoi)
		{
			cout << sv[n].hoten;
		}
	}
	file.close();
}
int main()
{
	thongtin sv[1000];
	int n;
	nhapFile();
	docFile(sv, n);
	xuat(sv,n);
	tim(sv, n);
	//tim1(sv, n);
}