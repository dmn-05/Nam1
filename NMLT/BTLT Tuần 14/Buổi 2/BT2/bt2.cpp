#include <iostream>
#include <cmath>
using namespace std;
struct TAMGIAC
{
	int canh1, canh2, canh3;
};
int nhap(int& canh)
{
	do
	{
		cout << "Nhap canh";
		cin >> canh;
	} while (canh<1);
	return canh;
}
int chuvi(int canh1, int canh2, int canh3)
{
	int cv;
	cv = canh1 + canh2 + canh3;
	return cv;
}
double dientich(double canh1, double canh2, double canh3)
{
	double p,dt;
	p = (canh1 + canh2 + canh3) / 2;
	dt = sqrt(p * (p - canh1) * (p - canh2) * (p - canh3));
	return dt;
}
void main()
{
	int c1, c2, c3;
	nhap(c1);
	nhap(c2);
	nhap(c3);
	cout<<chuvi(c1, c2, c3)<<endl;
	cout<<dientich(double(c1), double(c2), double(c3));
}