#include<iostream>
using namespace std;
int main()
{
	//nam trong bo nho stack va block nho va bi tran khong truy cap duoc bo nho heap
//	int a[1000000];
//	cout<<a[99999];
	//nam trong bo nho stack va luu dia chi ca stack va heap khong tran
	int *a=new int [1000000];
	cout<<a[99999];
}
