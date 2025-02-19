#include<iostream>

using namespace std;

void nhap(int a[], int &n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]:";
		cin >> a[i];
	}
}
void xuat(int a[], int n)
{
	cout << "Mang vua nhap la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void interchangesort(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i]>a[j])
			{
				swap(a[i], a[j]);
				for (int k = 0; k < n; k++)
				{
					cout << a[k] << " ";
				}
				cout << endl;
			}
		}
	}
}
void interchangesort1(int a[], int n)
{
	int demhv = 0, demss = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			demss++;
			if (a[i] < a[j])
			{
				demhv++;
				swap(a[i], a[j]);
			}
		}
	}
	cout << "so lan so sanh la: " << demss;
	cout<<"so lan hoan vi la: "<<demhv;
}
void selectionsort(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int min = i;
		for (int j = i+1; j < n; j++)
		{
			if (a[min]>a[j])
			{
				min = j;
			}
		}
		swap(a[min], a[i]);
		for (int k = 0; k < n; k++)
		{
			cout << a[k] << " ";
		}
		cout << endl;
	}
}
void selectionsort1(int a[], int n)
{
	int demhv = 0, demss = 0, demgmax=0;
	for (int i = 0; i < n - 1; i++)
	{
		int max = i;
		for (int j = i + 1; j < n; j++)
		{
			demss ++;
			if (a[max] < a[j])
			{
				demgmax++;
				max = j;
			}
		}
		demhv++;
		swap(a[max], a[i]);
		for (int k = 0; k < n; k++)
		{
			cout << a[k] << " ";
		}
		cout << endl;
	}
	cout << "so lan so sanh la: " << demss;
	cout << "so lan hoan vi la: " << demhv;
	cout << "so lan gan max la: " << demgmax;
}
void demnghichthe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				dem++;
			}
		}
	}
	cout << "so nghich the la: " << dem<<endl;
}
void main()
{
	int a[100], n;
	nhap(a, n);
	xuat(a, n);
	demnghichthe(a, n);
	interchangesort(a, n);
	selectionsort(a, n);
	interchangesort1(a, n);
	selectionsort1(a, n);
}
