#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
int chucnang(int& cn)
{
	cout << "1. liet ke so nguyen to\n";
	cout << "2. liet ke so chinh phuong\n";
	cout << "3. dem so luong so hoan hao\n";
	cout << "4. tam giac\n";
	cout << "5. tim uoc chung boi chung\n";
	cout << "6. tim so lon nhat\n";
	cout << "7. kiem tra so nguyen to\n";
	cout << "-------------------------------\n";
	cout << "vui long chon chuc nang:\n";
	cin >> cn;
	return cn;
}
int nhapsoduong(int& n)
{
	do
	{
		cout << "Nhap vao so nguyen duong N:\n";
		cin >> n;
	} while (n<=0);
	return n;
}
bool songuyento(int nguyento)
{
	if (nguyento==5||nguyento==7)
	{
		return true;
	}
	for (int i = 2; i*i <= nguyento; i++)
	{
		if (nguyento % 2 == 0||nguyento%3==0||nguyento%5==0||nguyento%7==0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
bool SoChinhPhuong(double chinhphuong)
{
	double canBacHai = (sqrt(chinhphuong));
	return canBacHai * canBacHai == chinhphuong;
}
int sohoanhao(int& sohh)
{
	int tong;
	tong = 0;
	for (int u = 1; u < sohh;u++)
	{
		if (sohh % u == 0)
		{
			tong += u;
		}
	}
	if (tong == sohh)
	{
		return true;
	}
	else
	{
		return false;
	}
}
double nhapbacanh(double& x, double& y, double&z)
{
	cout << "Nhap canh 1: ";
	cin >> x;
	cout << "Nhap canh 2: ";
	cin >> y;
	cout << "Nhap canh 3: ";
	cin >> z;
	return x;
	return y;
	return z;
}
bool kiemtra(double a1, double b1, double c1)
{
	if (a1 + b1 > c1 && a1 + c1 > b1 && b1 + c1 > a1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
double tinhdientich(double a2, double b2, double c2)
{
	double s;
	double p = 0;
	p = (a2 + b2 + c2) / 2;
	s = sqrt(p * (p - a2) * (p - b2) * (p - c2));
	return s;
}
double tinhchieucaoA(double a3, double b3, double c3)
{
	double ha;
	ha = (2 * tinhdientich(a3, b3, c3)) / a3;
	return ha;
}
double tinhchieucaoB(double a3, double b3, double c3)
{
	double hb;
	hb = (2 * tinhdientich(a3, b3, c3)) / b3;
	return hb;
}
double tinhchieucaoC(double a3, double b3, double c3)
{
	double hc;
	hc = (2 * tinhdientich(a3, b3, c3)) / c3;
	return hc;
}
int nhaphaiso(int& number1, int& number2)
{
	do
	{
		cout << "Nhap so thu 1:\n";
		cin >> number1;
	} while (number1<=0);
	do
	{
		cout << "Nhap so thu 2:\n";
		cin >> number2;
	} while (number2<=0);
	return 0;
}
int uocchung(int number1, int number2)
{
	int i;
	if (number1 > number2)
	{
		i = number2;

	}
	else
	{
		i = number1;
	}
	for (; ;i--)
	{
		if (number1 % i == 0 && number2 % i == 0)
		{
			return i;
		}
	}
}
int boichung (int number1,int number2)
{
	int j;
	if (number1>number2)
	{
		j = number1;
	}
	else
	{
		j = number2;
	}
	for ( ; ; j++)
	{
		if (j%number1==0&&j%number2==0)
		{
			return j;
		}
	}
}
int nhapsolonnhat(int& max1, int& max2, int& max3, int& max4)
{
	int sl;
	max1 = max2 = max3 = max4 = 0;
	cout << "Nhap so luong so:\n";
	cin >> sl;
	switch (sl)
	{
	case 2:
		cout << "Nhap vao so thu 1:\n";
		cin >> max1;
		cout << "Nhap vao so thu 2:\n";
		cin >> max2;
		break;
	case 3:
		cout << "Nhap vao so thu 1:\n";
		cin >> max1;
		cout << "Nhap vao so thu 2:\n";
		cin >> max2;
		cout << "Nhap vao so thu 3:\n";
		cin >> max3;
		break;
	case 4:
		cout << "Nhap vao so thu 1:\n";
		cin >> max1;
		cout << "Nhap vao so thu 2:\n";
		cin >> max2;
		cout << "Nhap vao so thu 3:\n";
		cin >> max3;
		cout << "Nhap vao so thu 4:\n";
		cin >> max4;
		break;
	}
	return 0;
}
int kiemtrasolonnhat(int max1, int max2, int max3, int max4)
{
	int max;
	max = max1;
	if (max2 > max)
	{
		max = max2;
	}
	if (max3 > max)
	{
		max = max3;
	}
	if (max4>max)
	{
		max = max4;
	}
	return max;
}
int kiemtrasonguyento(int& kiemtra)
{
	int n = 1;
	bool x;
	for ( int i = 2 ; i < kiemtra; i++)
	{
		x = false;
		if (kiemtra%i==0)
		{
			x = true;
			break;
		}
	}
	if (x==false)
	{
		cout << kiemtra << " la so nguyen to\n";
	}
	else
	{
		cout << kiemtra << " khong phai la so nguyen to\n";
	}
	cout << "cac so nguyen to tu 1 den " << kiemtra << " la: ";
	for (int i = 2; i < kiemtra; i++)
	{
		x = false;
		for (int u = 2; u < i; u++)
		{
			if (i % u == 0)
			{
				x = true;
			}
		}
		if (x == false)
		{
			cout << i << " ";
		}

	}
	cout << endl;
	cout << kiemtra << " so nguyen to dau tien la: ";
	for (int i = 2; n <= kiemtra; i++)
	{
		x = false;
		for (int u = 2; u < i; u++)
		{
			if (i % u == 0)
			{
				x = true;
			}
		}
		if (x == false)
		{
			cout << i << " ";
			n++;
		}
	}
	return 0;
}
void main()
{
	int dem = 0;
	int a, b, c, d, e, g, cnang;
	double m, n, p;
	char ch;
	do
	{
		chucnang(cnang);
		switch (cnang)
		{
		case 1:
		case 2:
		case 3:
		case 7:
			nhapsoduong(a);
			b = c = d = e = a;
			break;
		}
		switch (cnang)
		{
		case 1:
			cout << "Cac so nguyen to nho hon " << b << " la: ";
				for (int i = 2; i < b; i++) 
				{
					if (songuyento(i))
					{
						cout << i << " ";
					}
				}
			cout << endl;
			break;
		case 2:
			cout << c << " so chinh phuong dau tien la: ";
				for (int i = 2; c > 0; i++) 
				{
					if (SoChinhPhuong(i)) 
					{
						cout << i << " ";
						c--;
					}
				}
			cout << endl;
			break;
		case 3:
			for (int i = 1; i <= d; i++)
			{
				if (sohoanhao(i))
				{
					dem += 1;
				}
			}
			cout << "so luong so hoan hao la: " << dem;
			cout << endl;
			break;
		case 4:
			nhapbacanh(m, n, p);
			cout << "-----------------\n";
			if (kiemtra(m, n, p))
			{
				cout << "Dien tich la: " << tinhdientich(m, n, p) << endl;
				cout << "chieu cao ha la: " << tinhchieucaoA(m,n, p) << endl;
				cout << "chieu cao hb la: " << tinhchieucaoB(m, n, p) << endl;
				cout << "chieu cao hc la: " << tinhchieucaoC(m, n, p) << endl;
			}
			else
			{
				cout << "khong phai ba canh tam giac\n";
			}
			cout << endl;
			break;
		case 5:
			nhaphaiso(a, b);
			cout << "Boi chung nho nhat la: " << boichung(a, b) << endl;
			cout << "Uoc chung lon nhat la: " << uocchung(a, b) << endl;
			cout << endl;
			break;
		case 6:
			nhapsolonnhat(a, b, c, d);
			cout << "So lon nhat trong cac so vua nhap la: " << kiemtrasolonnhat(a, b, c, d);
			cout << endl;
			break;
		case 7:
			if (songuyento(b))
			{
				cout << b << " la so nguyen to\n";
			}
			else
			{
				cout << b << " khong phai la so nguyen to\n";
			}
			cout << endl;
			break;
		default:
			cout << "Khong co chuc nang tuong ung\n";
			break;
		}
		cout << "bam phim bat ki de tiep tuc, Esc ket thuc.\n";
		ch = _getch();
		system("cls");
	} while (ch!=27);
}