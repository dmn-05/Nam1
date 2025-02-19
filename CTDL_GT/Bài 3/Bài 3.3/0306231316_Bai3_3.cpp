#include<iostream>
#include<string>
#include<conio.h>
#include<fstream>

using namespace std;

struct SINHVIEN
{
	string mssv;
	double diemtoan, diemvan, diemtb;
};
void nhapFile()
{
	SINHVIEN sv;
	int n;
	ofstream file;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	file.open("Dulieu.txt",ios::app);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ma so sinh vien: ";
		cin.ignore();
		getline(cin, sv.mssv);
		cout << "Nhap diem toan: ";
		cin >> sv.diemtoan;
		cout << "Nhap diem van: ";
		cin >> sv.diemvan;
		sv.diemtb = (sv.diemtoan + sv.diemvan) / 2;
		file << sv.mssv << endl;
		file << sv.diemtoan << endl;
		file << sv.diemvan << endl;
		file << sv.diemtb << endl;
	}
	file.close();
}
void docFile(SINHVIEN sv[], int& n)
{
	ifstream file;
	string t;
	file.open("DuLieu.txt");
	n = 0;
	while (file)
	{
		getline(file, sv[n].mssv);
		file >> sv[n].diemtoan;
		file >> sv[n].diemvan;
		file >> sv[n].diemtb;
		getline(file, t);
		n++;
	}
	n--;
	file.close();
}
void xuat(SINHVIEN sv[], int n)
{
	cout << "Ma So SV\tDiem toan  Diem van  diem tb\n";
	for (int i = 0; i < n; i++)
	{
		cout << sv[i].mssv << "\t" << sv[i].diemtoan << "   \t   " << sv[i].diemvan << "\t     " << sv[i].diemtb << endl;
	}
}
void sapxepmssv(SINHVIEN sv[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (sv[i].mssv>sv[j].mssv)
			{
				swap(sv[i], sv[j]);
			}
		}
	}
}
void sapxepdiemtoan(SINHVIEN sv[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (sv[i].diemtoan > sv[j].diemtoan)
			{
				swap(sv[i], sv[j]);
			}
		}
	}
}
void sapxepdiemvan(SINHVIEN sv[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (sv[i].diemvan > sv[j].diemvan)
			{
				swap(sv[i], sv[j]);
			}
		}
	}
}
void sapxepdiemtb(SINHVIEN sv[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (sv[i].diemtb > sv[j].diemtb)
			{
				swap(sv[i], sv[j]);
			}
		}
	}
}
void main()
{
	SINHVIEN sv[100];
	int n,cn;
	do
	{
		cout << "1.Nhap, doc va xuat len man hinh\n";
		cout << "2.Sap xep theo ma so sinh vien\n";
		cout << "3.Sap xep theo diem toan\n";
		cout << "4.Sap xep theo diem van\n";
		cout << "5.Sap xep theo diem trung binh\n";
		cin >> cn;
		switch (cn)
		{
		case 1:
			nhapFile();
			docFile(sv, n);
			xuat(sv, n);
			break;
		case 2:
			sapxepmssv(sv, n);
			xuat(sv, n);
			break;
		case 3:
			sapxepdiemtoan(sv, n);
			xuat(sv, n);
			break;
		case 4:
			sapxepdiemvan(sv, n);
			xuat(sv, n);
			break;
		case 5:
			sapxepdiemtb(sv, n);
			xuat(sv, n);
			break;
		default:
			cout << "Khong co chuc nang tuong ung\n";
			break;
		}
	} while (_getch()!=27);
}
