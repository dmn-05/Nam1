#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int info;
	node* next;
};
struct list
{
	node* head, * tail;
};
node* taonut(int x)
{
	node* p;
	if (x == 0)
	{
		return 0;
	}
	p = new node;
	if (p == NULL)
	{
		cout << "Khong du bo nho\n";
		exit(1);
	}
	p->info = x;
	p->next = NULL;
	return p;
}
void themhead(list& l,int &x)
{
	node* p;
	p = taonut(x);
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
void themtail(list& l, int &x)
{
	node* p;
	p = taonut(x);
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
//void xoavtk(list& l, int& k)
//{
//	node* p;
//	node* q;
//	p = l.head;
//	q = NULL;
//	cout << "Nhap k: ";
//	cin >> k;
//	for (int i = 1; i <= k; i++)
//	{
//		if (i == k)
//		{
//			q->next = p->next;
//			if (q->next==NULL)
//			{
//				l.tail = q;
//			}
//			delete p;
//			break;
//		}
//		q = p;
//		p = p->next;
//	}
//}
void DeleteK(list& l, int& k)
{
	node* p;
	node* q;
	p = l.head;
	q = NULL;
	cout << "Nhap vi tri can xoa: ";
	cin >> k;
	for (int i = 1; i <= k; i++)
	{
		if (i == k)
		{
			q->next = p->next;
			if (q->next == NULL)
			{
				l.tail = q;
			}
			delete p;
			break;
		}
		q = p;
		p = p->next;
	}
}
void chengtkbx(list l, int &x, int &k)
{
	node* p;
	p = l.head;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap k: ";
	cin >> k;
	for (int i = 1; i <= k; i++)
	{
		if (i==k)
		{
			p->info = x;
			break;
		}
		p = p->next;
	}
}
void xuat(list l)
{
	node* p;
	p = l.head;
	while (p != NULL)
	{
		cout << p->info << " ";
		p = p->next;
	}
	cout << endl;
}
void xoagtx(list& l, int& x)
{
	node* p, * q;
	p = l.head;
	q = NULL;
	cout << "Nhap x: ";
	cin >> x;
	while (p!=NULL)
	{
		if (p->info==x)
		{
			q->next = p->next;
			if (q->next==NULL)
			{
				l.tail = q;
			}
			delete p;
			break;
		}
		q = p;
		p = p->next;
	}
}
void dao(list& l)
{
	/*node* dao = l.head;
	l.head = l.head->next;
	node* ke = l.head->next;
	l.head->next = dao;
	dao->next = NULL;
	while (ke != NULL)
	{
		dao = l.head;
		l.head = ke;
		ke = ke->next;
		l.head->next = dao;
	}*/

	if (l.head == NULL)
		return;

	l.tail = l.head; // cap tail

	node* p = NULL, * q = NULL;

	while (l.head)
	{
		p = l.head;  // di chuyen p
		l.head = l.head->next;// di chuyen head
		p->next = q; // cap nhat moi lien ket
		q = p; // cap nhat q
	}
	// cap nhat head moi
	l.head = p;
}
void phandt(list l, list& ch, list& le)
{
	node* p, * pc, * ple;
	p = l.head;
	pc = ch.head;
	ple = le.head;
	while (p!=NULL)
	{
		if (p->info%2==0)
		{
			themtail(ch, p->info);
		}
		else
		{
			themtail(le, p->info);
		}
		p = p->next;
	}
}
void dao1(list& l)
{
	node* p, * q;
	p = l.head, q = NULL;
	l.tail = l.head;
	while (l.head != NULL)// 1 2 3 4 5
	{
		p = l.head;
		l.head = l.head->next;
		p->next = q;
		q = p;
	}
	l.head = p;
}
void xoa(list& l)
{
	node* p, * q;
	p = l.head;
	while (p!=l.tail)
	{
		q = p->next;
		while (q != NULL)
		{
			if (p->info > q->info)
			{
				swap(p->info, q->info);
			}
			q = q->next;
		}
		p = p->next;
	}
}
void main()
{
	list l,ch,le;
	int x,k;
	l.head = l.tail = NULL;
	ch.head = ch.tail = NULL;
	le.head = le.tail = NULL;
	do
	{
		cout << "Nhap gia tri khoi tao: ";
		cin >> x;
		themtail(l,x);
		//cout << "Nhap 0 de dung\n";
	} while (x!=0);
	//xoavtk(l, k);
	//DeleteK(l, k);
	//xoagtx(l, k);
	//chengtkbx(l, x, k);
	//dao1(l);
	xuat(l);
	/*phandt(l, ch, le);
	cout << "Danh sach chan\n";
	xuat(ch);
	cout << "Danh sach le\n";
	xuat(le);*/
	//dao(l);
	xoa(l);
	xuat(l);
}