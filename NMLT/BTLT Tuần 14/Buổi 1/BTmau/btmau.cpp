#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
// dinh nghia Struct 

struct hinh_tron
{
	float x;
	float y;
	float bankinh;
	float dientich;
	float chuvi;
	float khongcachtoigoctoado;
};
const float PI = 3.14;
void main()
{
	// khai bao bien

	hinh_tron hinh1, hinh2;

	// nhap lieu
	//nhap lieu cho hinh 1
	cout << "NHAP THONG TIN CHO HINH 1 " << endl;
	cout << "NHAP BANKINH HINH 1 " << endl;
	cin >> hinh1.bankinh;
	cout << "NHAP TOA DO (X,Y)" << endl;
	cin >> hinh1.x >> hinh1.y;

	//nhap lieu cho hinh 2
	cout << "NHAP THONG TIN CHO HINH 2 " << endl;
	cout << "NHAP BANKINH HINH 2 " << endl;
	cin >> hinh2.bankinh;
	cout << "NHAP TOA DO (X,Y)" << endl;
	cin >> hinh2.x >> hinh2.y;

	// tinh toan hinh1
	hinh1.dientich = PI * pow(hinh1.bankinh, 2);
	hinh1.chuvi = 2 * PI * hinh1.bankinh;
	hinh1.khongcachtoigoctoado = sqrt(pow(hinh1.x, 2) + pow(hinh1.y, 2));
	cout << endl;

	// tinh toan hinh1
	hinh2.dientich = PI * pow(hinh2.bankinh, 2);
	hinh2.chuvi = 2 * PI * hinh2.bankinh;
	hinh2.khongcachtoigoctoado = sqrt(pow(hinh2.x, 2) + pow(hinh2.y, 2));
	cout << endl;


	// xac dinh tam cua hinnh tron gan goc toa do

	if (hinh1.khongcachtoigoctoado > hinh2.khongcachtoigoctoado)
	{
		cout << "HINH TRON 1 XA GOC TOA DO HON HINH TRON 2" << endl;
	}
	else if (hinh1.khongcachtoigoctoado < hinh2.khongcachtoigoctoado)
	{
		cout << "HINH TRON 1 GAN GOC TOA DO HON HINH TRON 2" << endl;
	}
	else
	{
		cout << " HAI HINH CO GOC TOA DO BANG NHAU " << endl;

	}cout << endl;
	cout << setprecision(2) << fixed << showpoint;

	// xuat ra ket qua 

	cout << "DT HINH TRON 1" << hinh1.dientich << endl;
	cout << "CV HINH TRON 1" << hinh1.chuvi << endl;

	cout << "DT HINH TRON 2" << hinh2.dientich << endl;
	cout << "CV HINH TRON 2" << hinh2.chuvi << endl;


}