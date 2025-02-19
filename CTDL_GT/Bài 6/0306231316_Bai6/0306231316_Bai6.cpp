#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;
struct node
{
	int info;
	node* next;
};
struct list
{
	node * head, * tail;
};
node* taonut(int x)
{
	node* p;
	p = new node;
	if (p==NULL)
	{
		cout << "Khong Du bo nho\n";
		exit(1);
	}
	p->info = x;
	p->next = NULL;
	return p;
}
void themdau(list& l, int &x)
{
	node* p;
	cout << "Nhap x: ";
	cin >> x;
	p=taonut(x);
	if (p==NULL)
	{
		cout << "Khong tao duoc nut\n";
		exit(1);
	}
	if (l.head==NULL)
	{
		l.head = l.tail = p;
	}
	else
	{
		p->next = l.head;
		l.head = p;
	}
}
void themtail(list& l, int x)
{
	node* p;
	p = taonut(x);
	if (l.head == NULL)
	{
		l.head = l.tail = p;
	}
	else
	{
		l.tail->next = p;
		l.tail = p;
	}
}
void xuat(list l)
{
	node* p;
	p = l.head;
	while (p!=NULL)
	{
		cout << p->info << endl;
		p = p->next;
	}
}
int tinhtong(list l)
{
	node* p;
	int tong = 0;
	p = l.head;
	while (p!=NULL)
	{
		tong += p->info;
		p = p->next;
	}
	return tong;
}
int dem(list l)
{
	node* p;
	int dem = 0;
	p = l.head;
	while (p != NULL)
	{
		dem++;
		p = p->next;
	}
	return dem;
}
bool kiemtrax(list l, int& x)
{
	node* p;
	p = l.head;
	cout << "Nhap x:\n";
	cin >> x;
	while (p!=NULL)
	{
		if (p->info==x)
		{
			return 1;
			break;
		}
		p = p->next;
	}
	return 0;
}
int timmax(list l)
{
	node* p;
	int max = INT_MIN;
	p = l.head;
	while (p!=NULL)
	{
		if (max<p->info)
		{
			max = p->info;
		}
		p = p->next;
	}
	return max;
}
bool ktsnt(int x)
{
	for (int i = 2; i < x; i++)
	{
		if (x%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int demsnt(list l)
{
	node* p;
	int dem = 0;
	p = l.head;
	while (p != NULL)
	{
		if (ktsnt(p->info))
		{
			dem++;
		}
		p = p->next;
	}
	return dem;
}
void themxsy(list& l)
{
	node* p, * px;
	int x, y;
	cout << "Nhap x: ";
	cin >> x;
	p = l.head;
	px = taonut(x);
	cout << "Nhap gia tri y: ";
	cin >> y;
	while (p != NULL)
	{
		if (p->info == y)
		{
			px->next = p->next;
			p->next = px;
			if (p->next == NULL)
			{
				l.tail = p;
			}
			break;
		}
		p = p->next;
	}
}
void nhapFile()
{
	int a,n;
	ofstream file;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	file.open("dulieu.txt", ios::app);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu: ";
		cin >> a;
		file << a <<endl;
	}
	file.close();
}
void docFile(list& l)
{
	int a;
	ifstream file;
	string t;
	file.open("dulieu.txt");
	while (file)
	{
		file >> a;
		themtail(l, a);
	}
	file.close();
}
void themxty(list& l)
{
	node* p, * q, * px;
	int x, y;
	cout << "Nhap x: ";
	cin >> x;
	p = l.head;
	px = taonut(x);
	cout << "Nhap gia tri y: ";
	cin >> y;
	while (p != NULL)
	{
		q = p;
		if (p->next->info == y)
		{
			if (p==l.head)
			{
				l.head = px;
			}
			px->next = p->next;
			p->next = px;
			break;
		}
		p = p->next;
	}
}
void main()
{
	list l;
	int x,cn;
	l.head = l.tail = NULL;
	/*do
	{
		themdau(l, x);
	} while (x != 0);*/
	do
	{
		cout << "1. Tinh tong cac phan tu\n";
		cout << "2. dem so luong cac phan tu\n";
		cout << "3. kiem tra co x hay khong\n";
		cout << "4. tim phan tu lon nhat\n";
		cout << "5. dem so so luong so nguyen to\n";
		cout << "6. Them x sau y\n";
		cout << "7. Them x truoc y\n";
		cout << "8. nhap tu file\n";
		cin >> cn;
		switch (cn)
		{
		case 1:
			cout<<tinhtong(l)<<endl;
			break;
		case 2:
			cout<<dem(l);
			break;
		case 3:
			if (kiemtrax(l, x))
			{
				cout << "co\n";
			}
			else
			{
				cout << "Khong co\n";
			}
			break;
		case 4:
			cout<<timmax(l);
			break;
		case 5:
			cout<<demsnt(l);
			break;
		case 6:
			themxsy(l);
			break;
		case 7:
			themxty(l);
			break;
		case 8:
			nhapFile();
			docFile(l);
			xuat(l);
			break;
		default:
			cout << "Khong co chuc nang\n";
			break;
		}
		cout << "Nhan Esc de dung!\n";
	} while (_getch()!=27);
}