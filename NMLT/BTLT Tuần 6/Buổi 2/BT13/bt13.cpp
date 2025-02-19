#include<iostream>
using namespace std;
void main()
{
	int gv, pv, gr, pr,pd,gd, kq;
	const int tien = 100 ;
	while (true)
	{
		cout << "Nhap gio vao: ";
		cin >> gv;
		cout << "Nhap phut vao: ";
		cin >> pv;
		cout << "Nhap gio ra: ";
		cin >> gr;
		cout << "Nhap phut ra: ";
		cin >> pr;
		while (0>gv||gv>=24||24<=gr||gr<0||0>pv||pv>=60||0>pr||pr>=60||gv>gr||gv==gr&&pv>pr)
		{
			cout << "Nhap lai gio vao: ";
			cin >> gv;
			cout << "Nhap lai phut vao: ";
			cin >> pv;
			cout << "Nhap lai gio ra: ";
			cin >> gr;
			cout << "Nhap phut ra: ";
			cin >> pr;
		}
		gd = gr - gv;
		pd = pr - pv;
		if (pd<0)
		{
			gd--;
			pd += 60;
		}
		kq = (gd * 60 + pd) * tien;
		cout <<"tien phai tra la: " << kq << endl;
	}
}