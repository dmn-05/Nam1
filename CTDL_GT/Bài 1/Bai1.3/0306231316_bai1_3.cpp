#include<iostream>
#include<fstream>
#include<string>
#include<conio.h> 

using namespace std;

struct THISINH
{
	string hoten;
	double diemlt, diemth;
	double diemtb;
};
void nhapfile()
{
	THISINH ts;
	int n;
	ofstream file;
	cout << "Nhap so luong thi sinh: ";
	cin >> n;
	file.open("Tailieu.txt", ios::app);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap Ho va ten thi sinh: ";
		cin.ignore();
		getline(cin, ts.hoten);
		cout << "Nhap diem thi ly thuyet: ";
		cin >> ts.diemlt;
		cout << "Nhap dim thi thuc hanh: ";
		cin >> ts.diemth;
		ts.diemtb = (ts.diemlt + ts.diemth) / 2;
		file << ts.hoten<<endl;
		file << ts.diemlt << endl;
		file << ts.diemth << endl;
		file << ts.diemtb << endl;
	}
	file.close();
}
void docfile(THISINH ts[], int& n)
{
	ifstream file;
	string t;
	file.open("Tailieu.txt", ios::in);
	n = 0;
	while (file)
	{
		getline(file, ts[n].hoten);
		file >> ts[n].diemlt;
		file >> ts[n].diemth;
		file >> ts[n].diemtb;
		getline(file, t);
		n++;
	}
	n--;
	file.close();
}
void xuat(THISINH ts[], int n)
{
	cout << "Ho Ten\tdiem ly thuyet\tdiem thuc hanh\tdiem trung binh\n";
	for (int i = 0; i < n; i++)
	{
		cout << ts[i].hoten << "\t\t" << ts[i].diemlt << "\t\t" << ts[i].diemth <<"\t\t"<<ts[i].diemtb<< endl;
	}
}
void tim(THISINH ts[], int n)
{
	bool kt = true;
	string ten;
	ifstream file;
	cout << "Nhap ten can tim: ";
	cin.ignore();
	getline(cin, ten);
	file.open("Tailieu.txt", ios::in);
	for (int i = 0; i < n; i++)
	{
		if (ten == ts[i].hoten)
		{
			cout << ts[i].hoten << "\t\t" << ts[i].diemlt << "\t\t" << ts[i].diemth << "\t\t" << ts[i].diemtb << endl;
			kt = false;
			break;
		}
	
	}	
	if (kt)
	{
		cout << "Khong co\n";
	}
	file.close();
}
void tim1(THISINH ts[], int n)
{
	bool kt = true;
	int diem;
	ifstream file;
	cout << "Nhap diem ly thuyet: ";
	cin >> diem;
	file.open("Tailieu.txt", ios::in);
	for (int i = 0; i < n; i++)
	{
		if (diem <= ts[i].diemlt)
		{
			cout << ts[i].hoten << "\t\t" << ts[i].diemlt << "\t\t" << ts[i].diemth << "\t\t" << ts[i].diemtb << endl;
			kt = false;
		}
	}	
	if (kt)
	{
		cout << "Khong co\n";
	}
	file.close();
}
void sapxep(THISINH ts[], int n)
{
	string ten;
	ifstream file;
	file.open("Tailieu.txt", ios::in);
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1;j < n; j++)
		{
			if (ts[i].diemtb < ts[j].diemtb)
			{
				swap(ts[i], ts[j]);
				/*THISINH tam = ts[j];
				ts[j] = ts[i];
				ts[i] = tam;*/
			}
		}
	}
	file.close();
}
void main()
{
	THISINH ts[100];
	int n,cn;
	nhapfile();
	docfile(ts, n);
	do
	{
		cout << "chon chuc nang:\n";
		cout << "1 xuat thong tin thi sinh\n";
		cout << "2 nhap ho ten xuat thi sinh dau tien tuong ung\n";
		cout << "3 nhap diem ly thuyet tim nguoi co diem bang hoac lon hon\n";
		cout << "4 sap xep giam dan theo diem trung binh\n";
		cin >> cn;
		switch (cn)
		{
		case 1:
			xuat(ts, n);
			break;
		case 2:
			tim(ts, n);
			break;
		case 3:
			tim1(ts, n);
			break;
		case 4:
			sapxep(ts, n);
			break;
		default:
			cout << "khong co chuc nang tuong ung\n";
			break;
		}
	} while (_getch()!=27);
}