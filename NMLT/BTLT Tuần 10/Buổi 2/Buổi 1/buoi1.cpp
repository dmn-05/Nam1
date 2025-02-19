#include<iostream>
#include<cmath>
using namespace std;
int chucnang(int& cn)
{
	cout << "1 Phep tinh de quy\n";
	cout << "2 tinh de quy theo S\n";
	cout << "3 tinh C(n,k)\n";
	cout << "4 thap ha noi\n";
	cout << "---------------------\n";
	cin >> cn;
	return cn;
}
int nhapso(int& x, int& n)
{
	do
	{
		cout << "Nhap co so:\n";
		cin >> x;
	} while (x<=0);
	do
	{
		cout << "Nhap so mu:\n";
		cin >> n;
	} while (n<=0);
	return 0;
}
int nhapso2(int& n)
{
	do
	{
		cout << "Nhap N:\n";
		cin >> n;
	} while (n <= 0);
	return n;
}
int power(int coso,int somu)
{
	if (somu==1)
	{
		return coso;
	}
	else
	{
		return coso * power(coso, somu - 1);
	}
}
double sdequy1(double N)
{
	if (N == 1)
	{
		return 1;
	}
	else
	{
		return  N + sdequy1(N - 1);
	}
}
double sdequy2(double N2,double& S2)
{
	return S2;
}
double sdequy3(double& S3)
{
	S3 = sqrt(3 + S3);
	return S3;
}
double sdequy4(double& S4)
{
	S4 = 1 / (2 + S4);
	return S4;
}
double tinhNgiaithua(double n,double& Ngiaithua)
{
	for (int i = 1; i <= n; i++)
	{
		Ngiaithua *= i;
	}
	return Ngiaithua;
}
double tinhKgiaithua(double k, double& Kgiaithua)
{
	for (int i = 1; i <= k; i++)
	{
		Kgiaithua *= i;
	}
	return Kgiaithua;
}
double tinhN_Kgiaithua(double n,double k,double& N_Kgiaithua)
{
	for (int i = 1; i <= n-k ; i++)
	{
		N_Kgiaithua *= i;
	}
	return N_Kgiaithua;
}
void ThapHaNoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		cout << "chuyen 1 dia tu " << A << "sang " << C << ";" << endl;
	}
	else
	{
		ThapHaNoi(n - 1, A, B, C);
		ThapHaNoi(1, A, B, C);
		ThapHaNoi(n - 1, B, A, C);
	}
}
void main()
{
	int c, a, b, k,n3;
	int cnang;
	double s2 = 0, s3 = 0, s4=0, n1=1,k1=1,n=0,Cnk;
	chucnang(cnang);
	switch (cnang)
	{
	case 1:
		nhapso(a, b);
		cout << power(a, b);
		break;
	case 2:
		nhapso2(a);
		b = a;
		cout << sdequy1(a) / a << endl;
		for (; a > 0; a--)
		{
			sdequy2(a,s2);
		}
		cout << sqrt(s2) << endl;
		for (int i = 1; i <= b; i++)
		{
			sdequy3(s3);
		}
		cout << s3 << endl;
		for (int i = 1; i <= b; i++)
		{
			sdequy4(s4);
		}
		cout << s4 << endl;
		break;
	case 3:
		nhapso(a,b);
		Cnk = tinhNgiaithua(a, n1) / (tinhKgiaithua(b, k1) * tinhN_Kgiaithua(a,b,n));
		cout << Cnk;
		break;
	case 4:
		nhapso2(n3);
		ThapHaNoi(n3, 'A', 'B', 'C');
		break;
	default:
		cout << "Khong co chuc nang tuong ung\n";
		break;
	}	
}