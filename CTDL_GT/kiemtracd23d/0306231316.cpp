 /*
MSSV: 0306231316
HOTEN: DO MINH NHAT
LOP: CDTH23D
De: Chan
*/
#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
using namespace std;

struct SACH
{
	string Tensach;
	int Giaban;
};
struct node
{
	SACH info;
	node* next;
};
struct list
{
	node* head, * tail;
};
node* Getnode(SACH sach)
{
	node* p;
	p = new node;
	if (p==NULL)
	{
		cout << "Khong du bo nho\n";
		exit(1);
	}
	p->info = sach;
	p->next = NULL;
	return p;
}
void themtail(list &l, SACH sach)
{
	node* p;
	p = Getnode(sach);
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
		l.tail->next = p;
		l.tail = p;
	}
}
void docFile(list& l)
{
	ifstream file;
	SACH sach;
	string t;
	file.open("Dulieu.txt");
	while (file)
	{
		getline(file, sach.Tensach);
		file >> sach.Giaban;
		getline(file,t);
		themtail(l, sach);
	}
	file.close();
}
void xuatFile(list l)
{
	node *p = l.head;
	while (p!=NULL)
	{
		cout << "Ten Sach: " << p->info.Tensach << endl;
		cout << "Gia ban: " << p->info.Giaban << endl;
		p = p->next;
	}
}
void tim(list l)
{
	node* p;
	int n;
	p = l.head;
	cout << "Nhap gia ban: ";
	cin >> n;
	cin.ignore();
	while (p!=NULL)
	{
		if (p->info.Giaban<n)
		{
			cout << "Ten Sach: " << p->info.Tensach << endl;
		}
		p = p->next;
	}
}
void xoa(list& l)
{
	node* p, * q;
	string tenxoa;
	p = l.head;
	q = NULL;
	cout << "Nhap ten sach can xoa: ";
	getline(cin,tenxoa);
	while (p!=NULL)
	{
		if (p->info.Tensach==tenxoa)
		{
			if (p==l.head)
			{
				l.head = l.head->next;
				delete p;
				return;
			}
			else
			{
				if (p==l.tail)
				{
					l.tail = q;
					q->next = NULL;
					delete p;
					return;
				}
				else
				{
					q->next = p->next;
					delete p;
					return;
				}
			}
		}
		q = p;
		p = p->next;
	}

}
void main()
{
	list l;
	l.head = l.tail = NULL;
	SACH sach;
	string TenNL = "DO MINH NHAT\n";
	cout << TenNL;
	docFile(l);
	xuatFile(l);
	do
	{
		tim(l);
		cout << "Nhan Esc dung, phim bat ki de tiep tuc\n";
	} while (_getch()!=27);
	do
	{
		xoa(l);
		xuatFile(l);
		cout << "Nhan Esc dung, phim bat ki de tiep tuc\n";
	} while (_getch()!=27);
}