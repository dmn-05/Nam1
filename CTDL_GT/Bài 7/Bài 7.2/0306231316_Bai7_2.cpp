#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

void nhapFile()
{
	int a, n;
	ofstream file;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	file.open("dulieu.txt", ios::app);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu: ";
		cin >> a;
		file << a << endl;
	}
	file.close();
}

void docFile(int a[], int& n)
{
	ifstream file;
	string t;
	file.open("dulieu.txt");
	n = 0;
	while (file)
	{
		file >> a[n];
		n++;
	}
	n--;
	file.close();
}
void quickSort(int arr[], int left, int right) {
	int pivot = arr[(left + right) / 2];
	int i = left;
	int j = right;
	do {
		while (arr[i] < pivot) ++i;
		while (arr[j] > pivot) --j;
		if (i <= j) {
			swap(arr[i], arr[j]);
			++i;
			--j;
		}
	} while (i <= j);
	if (left < j) quickSort(arr, left, i);
	if (i < right) quickSort(arr, i, right);
}
void nhapFile1(int a[],int n)
{
	ofstream file;
	file.open("dulieusort.txt", ios::app);
	for (int i = 0; i < n; i++)
	{
		file << a[i] << endl;
	}
	file.close();
}
void main()
{
	int a[1000], n;
	nhapFile();
	docFile(a, n);
	quickSort(a, 0, n - 1);
	nhapFile1(a, n);
}