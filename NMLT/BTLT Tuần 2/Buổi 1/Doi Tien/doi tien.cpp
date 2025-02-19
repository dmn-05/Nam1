#include<iostream>
using namespace std;
void main()
{
	int abc;
	int muoiNghin, namTram, namMuoi, haiMuoi, soDu;
	cout << "Hay nhap so tien:\n";
	cin >> abc;
	muoiNghin = abc / 10000;
	soDu = abc % 10000;
	namTram = soDu / 500;
	soDu = abc % 500;
	namMuoi = soDu / 50;
	soDu = abc % 50;
	haiMuoi = soDu / 20;
	soDu = soDu % 20;
	cout << "Muoi nghin: " << muoiNghin << endl;
	cout << "Nam tram: " << namTram << endl;
	cout << "Nam muoi: " << namMuoi << endl;
	cout << "Hai muoi: " << haiMuoi << endl;
	cout << "So du: " << soDu;
}