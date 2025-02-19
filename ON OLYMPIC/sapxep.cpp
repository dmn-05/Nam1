#include<iostream>
#include<conio.h>
using namespace std;
int a[100], n, MIN, vt,number;
bool check=1;
void interchangesort()
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}
}
void input()
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}
void selectionsort()
{
	for (int i = 0; i < n - 1; i++)
	{
		MIN = i;
		for (int j = i; j < n; j++)
		{
			if (a[MIN] > a[j])
			{
				MIN = j;
			}
		}
		swap(a[i], a[MIN]);
	}
}
void output()
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void add()
{
	do
	{
		cout << "Nhap vi tri can them trong mang: ";
		cin >> vt;
	} while (vt<0||vt>=n);
	for (int i = 0; i < n; i++)
	{
		if (i==vt)
		{
			int j;
			for ( j = n; j > vt; j--)
			{
				a[j] = a[j - 1];
			}
			cout << "Nhap gia tri a[" << j << "]: ";
			cin >> a[j];
			n++;
			break;
		}
	}
}
void erase()
{
	cout << "Nhap vi tri can xoa trong mang: ";
	cin >> vt;
	for (int i = 0; i < n; i++)
	{
		if (i==vt)
		{
			for (int j = i; j < n; j++)
			{
				a[j] = a[j + 1];
			}
			n--;
			break;
		}
	}
}
void quicksort(int left,int right)
{
	int i = left;
	int j = right;
	int x = a[(left + right) / 2];
	while (i<=j)
	{
		while (a[i] < x)
		{
			i++;
		}
		while (a[j]>x)
		{
			j--;
		}
		if (i<=j)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if (left < j) 
	{
		quicksort(left, j);
	}
	if (i<right)
	{
		quicksort(i, right);
	}
}
//void quicksortkdq(int left, int right)
//{
//	int i = left;
//	int j = right;
//	int x = a[(left + right) / 2];
//	while (i <= j)
//	{
//		while (a[i] < x)
//		{
//			i++;
//		}
//		while (a[j] > x)
//		{
//			j--;
//		}
//		if (i <= j)
//		{
//			swap(a[i], a[j]);
//			i++;
//			j--;
//		}
//	}
//	if (left < j)
//	{
//		quicksort(left, j);
//	}
//	if (i < right)
//	{
//		quicksort(i, right);
//	}
//}
void intersearch()
{
	int i;
	cout << "Nhap so can tim: ";
	cin >> number;
	for (i = 0; i < n; i++)
	{
		if (a[i]==number)
		{
			cout << i<<" ";
			check=0;
		}
	}
	if (check)
	{
		cout << "khong co\n";
	}
}

void binarysearch(int left,int right)
{
	
	cout << "Nhap so can tim: ";
	cin >> number;
	while (left<=right)
	{
		int Mid = (left + right) / 2;
		if (a[Mid]==number)
		{
			cout << Mid<<endl;
			check = 0;
			break;
		}
		else if (a[Mid]<number)
		{
			left = Mid + 1;
		}
		else
		{
			right = Mid - 1;
		}
	}
	if (check)
	{
		cout << "khong co\n";
	}
}
void heapify(int arr[], int n, int i)
{
	int largest = i;
	int left = 2 * i + 1; 
	 int right = 2 * i + 2; 
	if (left < n && a[left] > a[largest])
		largest = left;
	if (right < n && a[right] > a[largest])
		largest = right;

	if (largest != i)
	{
		swap(a[i], a[largest]);
		heapify(a, n, largest);
	}
} 
void heapSort(int a[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
	{
		heapify(a, n, i);
	}
	for (int i = n - 1; i > 0; i--)
	{
		swap(a[0], a[i]);
		heapify(a, i, 0);
	}
}
void printArray()
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << "\n";
}

void main()
{
	cout << "nhap so luong phan tu\n";
	cin >> n;
	input();
	//interchangesort();
	//selectionsort();
	//quicksort(0, n-1);
	//output();
	//add();
	//output();
	//intersearch();
	//binarysearch(0,n-1);
	heapSort(a, n);
	cout << "Sorted array is \n";
	printArray();

}

//// C++ program for implementation of Heap Sort 
//#include <iostream> 
//  
//using namespace std; 
//  
//// To heapify a subtree rooted with node i which is 
//// an index in arr[]. n is size of heap 

//// Driver program 
//int main()
//{
//	int arr[] = { 12, 11, 13, 5, 6, 7 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	heapSort(arr, n);
//
//	cout << "Sorted array is \n";
//	printArray(arr, n);
//}

