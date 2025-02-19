#include<iostream>
using namespace std;
void main()
{
	float chieucao, cannang, bmi;
	cout << "nhap chieu cao:(M)\n";
	cin >> chieucao;
	chieucao != 0;
	cout << "hay nhap can nang:(Kg)\n";
	cin >> cannang;
	bmi = cannang / (chieucao * chieucao);
	cout << "chi so khoi co the:(BMI)\n" << bmi;
}
