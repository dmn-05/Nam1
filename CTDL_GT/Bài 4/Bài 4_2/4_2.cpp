#include<iostream>
#include<time.h>
#include<conio.h>
using namespace std;
void create(int a[], int n)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100 + 1;
	}
}
void print(int a[], int n)
{
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
			}
		}
	}
}
void selectionsort(int a[], int n)
{
	int min;
	for (int i = 0; i < n-1; i++)
	{
		min = i;
		for (int j = i+1; j < n; j++)
		{
			if (a[min]>a[j])
			{
				min = j;
			}
		}
		swap(a[min], a[i]);
	}
}
void quicksort(int a[], int l, int r)
{
	int i = l, j = r;
	int m;
	do
	{
		m = a[(l + r) / 2];
		while (a[i] < m)
		{
			i++;
		}
		while (a[j]>m)
		{
			j--;
		}
		if (i<=j)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}
	} while (i<=j);
	if (l<j)
	{
		quicksort(a, l, j);
	}
	if (i<r)
	{
		quicksort(a, i, r);
	}
}
void main()
{
	int a[1000];
	int n=100, cn;
	do
	{
		create(a, n);
		print(a, n);
		cout << "1.interchangesort\n";
		cout << "2.seclectionsort\n";
		cout << "3.quicksort\n";
		cin >> cn;
		clock_t begin = clock();
		switch (cn)
		{
		case 1:
			interchangesort(a, n);
			print(a, n);
			break;
		case 2:
			selectionsort(a, n);
			print(a, n);
			break;
		case 3:
			quicksort(a, 0, n - 1);
			print(a, n);
			break;
		default:
			cout << "khong co\n";
			break;
		}
		clock_t end = clock();
		cout << "\n Time=" << (float)(end - begin) / CLOCKS_PER_SEC<<endl;
	} while (_getch()!=27);
	
}