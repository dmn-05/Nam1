#include <iostream>
#include<string.h>;
#define size 1000
using namespace std;
int chucnang(int& cn)
{
	cout << "Vui long chon chuc nang: ";
	cin >> cn;
	cin.ignore();
	return cn;
}
void nhapchuoikytu(char ch[])
{
	//nhapsoluong(sl);
	cout << "Nhap ky tu: ";
	cin.getline(ch,200);
}
void nhapchuoikytu2(char ch2[])
{
	//nhapsoluong(sl);
	cout << "Nhap ky tu: ";
	cin.get(ch2, 200);
}

bool doixung(char ch[])
{
	for (int i = 0; i < strlen(ch)/2; i++)
	{
		if (ch[i] != ch[strlen(ch) - 1 - i])
		{
			return 0;
		}
	}
	return 1;
}
void main()
{
	int n=0,cnang;
	bool x;
	int demktrang = 0, demktu = 0;
	int sopam = 0;
	char chuoi1[size], chuoi2[size];
	switch (chucnang(cnang))
	{
	case 1:
		nhapchuoikytu(chuoi1);
		if (doixung(chuoi1))
		{
			cout << chuoi1 << " la chuoi doi xung\n";
		}
		else
		{
			cout << chuoi1 << " la chuoi doi xung\n";
		}
		break;
	case 2:
		nhapchuoikytu(chuoi1);
		nhapchuoikytu2(chuoi2);
		cout<< strcmp(chuoi1, chuoi2)<<endl;
		if (strcmp(chuoi1, chuoi2)==1)
		{
			cout << chuoi2 << endl;
			cout << chuoi1 << endl;
		}
		else
		{
			cout << chuoi1 << endl;
			cout << chuoi2 << endl;
		}
		break;
	case 3:
		nhapchuoikytu(chuoi1);
		for (int i = 0; i < strlen(chuoi1); i++)
		{
			x = false;
			if (chuoi1[i] != 'u' && chuoi1[i] != 'e' && chuoi1[i] != 'o' && chuoi1[i] != 'a' && chuoi1[i] != 'i')
			{
				
				x = true;
			}
			if (x==true)
			{
				sopam++;
			}
		}
		cout << "So phu am trong: " << sopam << endl;
		break;
	case 4:
		nhapchuoikytu(chuoi1);
		for (int i = 0; i < strlen(chuoi1); i++)
		{
			if (chuoi1[i] == ' ')
			{
				demktrang++;
			}
			else
			{
				demktu++;
			}
		}
		cout << "so ki tu chu cai la: " << demktu << endl;
		cout << "so ki tu khoang trang la: " << demktrang << endl;
	case 5:
		nhapchuoikytu(chuoi1);
		for (int i = 0; i < strlen(chuoi1); i++)
		{
			if (chuoi1[0]==' ')
			{
				for (int i = 0; i < strlen(chuoi1) - 1; i++)
				{
					chuoi1[i] = chuoi1[i + 1];
				}
			}
			while (chuoi1[i]==' '&&chuoi1[i+1]==' ')
			{
				for (int j = i ; j < strlen(chuoi1) - 1; j++)
				{
					chuoi1[j] = chuoi1[j + 1];
				}
			}
		}
		cout << chuoi1;
		break;
	default:
		cout << "khong co chuc nang tuong ung:\n";
		break;
	}

}