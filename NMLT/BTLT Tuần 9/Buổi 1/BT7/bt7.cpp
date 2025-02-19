#include<iostream>
#include<cmath>
using namespace std;
void canhhuyen(double slide1 ,double slide2, double& ch)
{
	ch = sqrt(pow(slide1, 2) + pow(slide2, 2));
	cout << "so do canh huyen la: " << ch;
}
void main()
{
	double a, b, c;
	cout << "Nhap so do canh thu 1: ";
	cin >> a;
	cout << " nhap so do canh thu 2: ";
	cin >> b;
	canhhuyen(a,b,c);
}