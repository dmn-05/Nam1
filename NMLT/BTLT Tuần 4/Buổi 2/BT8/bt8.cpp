#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	float ccan, dtb, dt, tk;
	cin >> ccan >> dtb >> dt;
	tk = ccan * 0.1 + dtb * 0.4 + dt * 0.5;
	if (tk>=5)
	{
		cout << "dat";
	}
	else
	{
		cout << "chua dat";
	}
}