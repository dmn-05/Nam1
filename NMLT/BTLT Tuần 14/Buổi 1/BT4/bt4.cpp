#include <iostream>
#include <cmath>
using namespace std;
struct KC
{
	double x, y;
};
void xuatdiem(KC diem)
{
	if (diem.x == 1)
		cout << diem.y;
	else
		cout << "x = " << diem.x << "\t y = " << diem.y << endl;
}
void nhapdiem(KC& diem)
{
	cout << "Nhap toa do x: ";
	cin >> diem.x;
	cout << "Nhap toa do y: ";
	cin >> diem.y;
}
double kc2diem(KC diem1, KC diem2)
{
	double kc;
	kc = sqrt(pow(diem2.x - diem1.x,2) + pow(diem2.y - diem1.y,2));
	return kc;
}
void main()
{
	KC diem1, diem2;
	nhapdiem(diem1);
	nhapdiem(diem2);
	xuatdiem(diem1);
	xuatdiem(diem2);
	cout << kc2diem(diem1, diem2);
}