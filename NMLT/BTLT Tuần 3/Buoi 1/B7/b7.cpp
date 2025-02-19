#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int N;
	float x, A;
	cout << "Hay nhap so nguyen N:\n";
	cin >> N;
	cout << "Hay nhap so thuc x:\n";
	cin >> x;
	A = pow(pow(x, 2) + x + 1, N) + pow(pow(x, 2) - x + 1, N);
	cout << "bieu thuc A: " << A;
}