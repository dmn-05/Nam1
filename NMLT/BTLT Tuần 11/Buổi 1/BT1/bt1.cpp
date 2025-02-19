#include<iostream>
using namespace std;
int chucnang(int& cn)
{
	cout << "1. nhap xuat mang\n";
	cout << "2. tao so ngau nhien\n";
	cout << "3. xuat cac so le\n";
	cout << "4. xuat cac phan tu am\n";
	cout << "5. xuat cac so nguyen to\n";
	cout << "6. tim vi tri cuoi cung\n";
	cout << "7. liet ke cac vi tri co gia tri nho nhat\n";
	cout << "8. liet ke vi tri cua cac so nguyen to\n";
	cout << "9. vi tri phan tu am dau tien\n";
	cout << "10. vi tri phan tu am lon nhat\n";
	cout << "11. dem so luong am, duong\n";
	cout << "12. dem so luong chan, le\n";
	cout << "13. dem so luong bang X\n";
	cout << "14. dem so luong so nguyen to\n";
	cout << "15. dem so luong so hoan hao\n";
	cout << "16. tong cac phan tu chan\n";
	cout << "17. tong cac so nguyen to\n";
	cout << "18. tong cac vi tri chan\n";
	cout << "19. tong cac phan tu cuc dai\n";
	cout << "20. trung binh cac so hoan hao\n";
	cout << "------------------------------------\n";
	cout << "Moi nhap so chon chuc nang\n";
	cin >> cn;
	return cn;
}
void Nhapsl(int a[], int& sl)
{
	do
	{
		cout << "Nhap vao so luong phan tu: ";
		cin >> sl;
	} while (sl < 1);
}
void Nhapsl_sothuc(float a[], int& sl)
{
	do
	{
		cout << "Nhap vao so luong phan tu: ";
		cin >> sl;
	} while (sl < 1);
}
void nhapa(int a[], int sl)
{
	for (int i = 0; i < sl; i++)
	{
		cout << "Nhap phan tu thu a[" << i << "]: ";
		cin >> a[i];
	}
}
void nhapa_sothuc(float a[], int sl)
{
	for (int i = 0; i < sl; i++)
	{
		cout << "Nhap phan tu thu a[" << i << "]: ";
		cin >> a[i];
	}
}
void xuatmang(int a[], int sl)
{
	Nhapsl(a, sl);
	nhapa(a, sl);
	for (int i = 0; i < sl; i++)
	{
		cout << a[i] <<"\t";
	}
}
void xuatsongaunhien(int a[], int sl)
{
	Nhapsl(a, sl);
	srand(time(0));
	int min = 0, max = 1000;
	for (int i = 0; i < sl; i++)
	{
		a[i] =min+rand()%(max-min+1);
	}
	for (int i = 0; i < sl; i++)
	{
		cout << a[i] << "\t";
	}
}
void xuatsole(int a[], int sl)
{
	Nhapsl(a, sl);
	nhapa(a, sl);
	for (int i = 0; i < sl; i++)
	{
		if (a[i]%2==0)
		{
			cout << a[i] << "\t";
		}
	}
}
void xuatphantuam(float a[], int sl)
{
	Nhapsl_sothuc(a, sl);
	nhapa_sothuc(a, sl);
	for (int i = 0; i < sl; i++)
	{
		if (a[i] < 0)
		{
			cout << a[i] << "\t";
		}
	}
}
bool kiemtrasonguyento(int j)
{
	bool x = false;
	if (j<2)
	{
		x = true;
	}
	for (int u = 2;u < j ; u++)
	{
		if(j % u == 0)
		{
			x = true;
			break;
		}
	}
	return x;
}
void xuatsonguyento(int a[], int sl)
{
	Nhapsl(a, sl);
	nhapa(a, sl);
	for (int i = 0; i < sl; i++)
	{
		if (kiemtrasonguyento(a[i])==false)
		{
			cout << a[i] << "\t";
		}
	}
}
int nhapX(int& x)
{
	cout << "Nhap X: ";
	cin >> x;
	return x;
}
void timX(int a[], int sl, int x)
{
	nhapX(x);
	Nhapsl(a,sl);
	nhapa(a, sl);
	// xuatsongaunhien(a, sl);
	for (int i = sl-1; i > -2 ; i--)
	{
		if (a[i]==x)
		{
			cout << "vi tri " << x << " la: " << i<<"\n";
			break;
		}
		if (i==-1)
		{
			cout << "khong co vi tri nao trung voi X\n";
			break;
		}
	}
	
}
void giatrinhonnhat(int a[], int sl)
{
	int min=INT_MAX;
	Nhapsl(a, sl);
	nhapa(a, sl);
	for (int i = 0; i < sl; i++)
	{
		if (a[i]<min)
		{
			min = a[i];
		}
	}
	cout << "Gia tri nho nhat la: " << min;
}
int giatrilonnnhat(int a[], int sl, int i, int& max)
{
	if (a[i] > max)
	{
		max = a[i];
	}
	return max;
}
void lkevitrisnt(int a[], int sl)
{
	Nhapsl(a, sl);
	nhapa(a, sl);
	cout << "vi tri so nguyen to la: ";
	for (int i = 0; i < sl; i++)
	{
		if (kiemtrasonguyento(a[i]) == false)
		{
			cout << i << " ";
		}
	}
}
void lkephantuam(float a[], int sl)
{
	int dem = 0;
	Nhapsl_sothuc(a, sl);
	nhapa_sothuc(a, sl);
	cout << "vi tri phan tu am dau tien trong mang la: ";
	for (int i = 0; i < sl; i++)
	{
		if (a[i] < 0)
		{
			cout << i;
			dem++;
			break;
		}
	}
	if (dem==0)
	{
		cout << "-1";
	}
}
void xuatvtriptuam_max(int a[], int sl)
{
	int max1 = INT_MIN;
	Nhapsl(a, sl);
	nhapa(a, sl);
	cout << "vi tri phan tu am lon nhat la: ";
	for (int i1 = 0; i1 < sl; i1++)
	{
		if (a[i1] < 0)
		{
			giatrilonnnhat(a, sl, i1, max1);
		}
	}
	for (int i1 = 0; i1 < sl; i1++)
	{
		if (a[i1] == max1)
		{
			cout << "a["<<i1<<"]";
		}
	}
}
void demsoluongamduong(int a[], int sl)
{
	int am = 0, duong = 0;
	Nhapsl(a, sl);
	nhapa(a, sl);
	for (int i = 0; i < sl; i++)
	{
		if (a[i]>0)
		{
			duong++;
		}
		else if (a[i]!=0)
		{
			am++;
		}
	}
	cout << "So luong so duong la: " << duong << endl;
	cout << "So luong so am la: " << am << endl;
}
void demsoluongchanle(int a[], int sl)
{
	int chan = 0, le = 0;
	Nhapsl(a, sl);
	nhapa(a, sl);
	for (int i = 0; i < sl; i++)
	{
		if (a[i] % 2 == 0)
		{
			chan++;
		}
		else
		{
			le++;
		}
	}
	cout << "So luong so chan la: " << chan << endl;
	cout << "So luong so le la: " << le << endl;
}
void timslX(int a[], int sl, int x)
{
	int dem = 0;
	nhapX(x);
	Nhapsl(a,sl);
	nhapa(a, sl);
	// xuatsongaunhien(a, sl);
	for (int i = 0; i < sl ; i++)
	{
		if (a[i]==x)
		{
			dem++;
		}
	}
	cout << "so luong x trong mang la: " << dem;
}
bool kiemtrasohoanhao(int a[], int sl,int i)
{
	
	int tong = 0;
	for (int j = 1; j < a[i]; j++)
	{
		if (a[i]%j==0)
		{
				tong += j;
		}
	}
	if (a[i] == tong)
	{
		return true;
	}
	return false;
}
void xuatslsohoanhao(int a[], int sl)
{
	int dem = 0;
	Nhapsl(a,sl);
	nhapa(a, sl);
	for (int i = 0; i < sl; i++)
	{
		if (kiemtrasohoanhao(a,sl,i))
		{
			dem++;
		}
	}
	cout << "so luong so hoan hao la: " << dem;
}
void xuatslsonguyento(int a[], int sl)
{
	int dem = 0;
	Nhapsl(a, sl);
	nhapa(a, sl);
	for (int i = 0; i < sl; i++)
	{
		if (kiemtrasonguyento(a[i]) == false)
		{
			dem++;
		}
	}
	cout << "So luong so nguyen to la: " << dem << endl;
}
void tongcacphantuchan(int a[], int sl)
{
	int tong = 0;
	Nhapsl(a, sl);
	nhapa(a, sl);
	for (int i = 0; i < sl; i++)
	{
		if (a[i]%2==0)
		{
			tong += a[i];
		}
	}
	cout << "Tong cac phan tu chan la: " << tong << endl;
}
void tongcacsonguyento(int a[], int sl)
{
	int tong = 0;
	Nhapsl(a, sl);
	nhapa(a, sl);
	for (int i = 0; i < sl; i++)
	{
		if (kiemtrasonguyento(a[i]) == false)
		{
			tong += a[i];
		}
	}
	cout << "tong cua cac so nguyen to la: " << tong << endl;
}
void tongcacphantuvtchan(int a[], int sl)
{
	int tong = 0;
	Nhapsl(a, sl);
	nhapa(a, sl);
	for (int i = 0; i < sl; i+=2)
	{
		tong += a[i];
	}
	cout << "Tong cac phan tu co vi tri chan la: " << tong << endl;
}
void main()
{
	int arr[1000];
	int n = 0,x1 = 0, cnang;
	float arr1[1000];
	chucnang(cnang);
	switch (cnang)
	{
	case 1: 
		xuatmang(arr, n);
		cout << "\n";
		break;
	case 2:
		xuatsongaunhien(arr, n);
		cout << "\n";
		break;
	case 3:
		xuatsole(arr, n);
		cout << "\n";
		break;
	case 4:
		xuatphantuam(arr1, n);
		cout << "\n";
		break;
	case 5:
		xuatsonguyento(arr, n);
		cout << "\n";
		break;
	case 6:
		timX(arr, n, x1);
		cout << "\n";
		break;
	case 7:
		giatrinhonnhat(arr, n);
		cout << "\n";
		break;
	case 8:
		lkevitrisnt(arr, n);
		cout << "\n";
		break;
	case 9:
		lkephantuam(arr1, n);
		cout << "\n";
		break;
	case 10:
		xuatvtriptuam_max(arr, n);
		cout << "\n";
		break;
	case 11:
		demsoluongamduong(arr, n);
		cout << "\n";
		break;
	case 12:
		demsoluongchanle(arr,n);
		cout << "\n";
		break;
	case 13:
		timslX(arr, n, x1);
		cout << "\n";
		break;
	case 14:
		xuatslsonguyento(arr, n);
		cout << "\n";
		break;
	case 15:
		xuatslsohoanhao(arr, n);
		cout << "\n";
		break;
	case 16: 
		tongcacphantuchan(arr, n);
		cout << "\n";
		break;
	case 17:
		tongcacsonguyento(arr, n);
		cout << "\n";
		break;
	case 18:
		tongcacphantuvtchan(arr, n);
		cout << "\n";
		break;
	default:"khong co chuc nang tuong ung\n";
		break;
	}	
}