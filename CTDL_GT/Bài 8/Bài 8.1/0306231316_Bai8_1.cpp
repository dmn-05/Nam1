#include<iostream>
#include<string>
#include<conio.h>
#include<fstream>
using namespace std;

struct SINHVIEN
{
	string mssv;
	int diem;
	string ghichu;
};
struct node
{
	SINHVIEN info;
	node* next;
};
struct list
{
	node* head, * tail;
};
//tao nut moi
node* taonut(SINHVIEN sv)
{
	node* p;
	p = new node;
	if (p==NULL)
	{
		cout << "Khong du bo nho\n";
		exit(1);
	}
	p->info = sv;
	p->next = NULL;
	return p;
}
//them vao sau
void themtail(list &l,SINHVIEN sv)
{
	node* p;
	p = taonut(sv);
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
// nhap thong tin sinh vien
void in(list &l)
{
	int n;
	fstream file;
	SINHVIEN sv;
	cout << "Nhap so luong sinh vien: ";
	cin >> n;
	/*xoa dau enter luc nhap n va chi xoa 1 lan,
	vi khi lap lai thi getline(cin,sv.ghichu) 
	da nhap luon dau enter vao tring do luon roi*/
	cin.ignore();
	file.open("Dulieu.txt", ios::app);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ma so sinh vien: ";
		getline(cin, sv.mssv);
		do
		{
			cout << "Nhap diem: ";
			cin >> sv.diem;
		} while (sv.diem<0||sv.diem>10);
		cout << "Nhap ghi chu: ";
		/*dung cin.ignore o day de xoa dau enter cua cin>>sv.diem*/
		cin.ignore();
		getline(cin, sv.ghichu);
		//nhap xong thi se them vao sau danh sach list l
		themtail(l, sv);
		file << sv.mssv << endl;
		file << sv.diem << endl;
		file << sv.ghichu << endl;
	}
	file.close();
}
void docFile(list& l)
{
	SINHVIEN sv;
	fstream file;
	string key;
	file.open("Dulieu.txt",ios::in);
	while (file)
	{
		getline(file, sv.mssv);
		file >> sv.diem;
		getline(file, key);
		getline(file, sv.ghichu);
		if (sv.mssv == "")
		{
			break;
		}
		themtail(l, sv);
	}
	file.close();
}
//xuat danh sach l
void out(list l)
{
	node* p;
	p = l.head;
	while (p!=NULL)
	{
		cout <<"MASOSV: "<< p->info.mssv << endl;
		cout <<"DIEM: "<< p->info.diem << endl;
		cout <<"Ghi Chu: "<< p->info.ghichu << endl;
		p = p->next;
	}
}
//tim danh sach sinh vien co diem tren 8
void diemtren8(list l)
{
	node* p;
	p = l.head;
	cout << "Danh sach sinh vien co diem tu 8 tro len\n";
	while (p!=NULL)
	{
		if (p->info.diem >= 8)
		{
			cout << "MASOSV: " << p->info.mssv << endl;
			cout << "DIEM: " << p->info.diem << endl;
			cout << "Ghi Chu: " << p->info.ghichu << endl;
		}
		p = p->next;
	}
}
//tim sinh vien bang ma so sinh vien
void tim(list l)
{
	node* p;
	p = l.head;
	string mssv;
	bool kt=true;
	cout << "Nhap ma sinh vien an tim\n";
	/*khong can cin.ignore vi o day
	khong co dau enter hay dau khoang trang*/
	getline(cin, mssv);
	while (p!=NULL)
	{
		if (p->info.mssv==mssv)
		{
			cout << "MASOSV: " << p->info.mssv << endl;
			cout << "DIEM: " << p->info.diem << endl;
			cout << "Ghi Chu: " << p->info.ghichu << endl;
			kt = false;
		}
		p = p->next;
	}
	if (kt)
	{
		cout << "Khong co\n";
	}
}
//huy sinh vien co diem duoi 2 khoi danh sach
void huy(list& l)
{
	node* p,*q,*r;
	/*p luu va chay tu dau den vi tri cuoi trong danh sach
	sinh vien
	*q luu vi tri truoc p de tro den vi tri sau p
	*r dung de luu vi tri can xoa va cho p chay vao vi tri
	ke tiep tranh lam dut lien ket cua danh sach*/
	p = l.head;
	q = NULL;
	while (p!=NULL)
	{
		if (p->info.diem<2)
		{
			if (p==l.head)
			{
				l.head = p->next;
				r = p;
				p = l.head;
				delete(r);
				if (l.head==NULL)
				{
					l.tail = NULL;
				}
				/*continue dung de bo qua
				q = p;
				p = p->next; o ben duoi*/
				continue;
			}
			else
			{
				if (p == l.tail)
				{
					l.tail = q;
				}
				r = p;
				q->next = p->next;
				p = p->next;
				delete(r);
				/*continue dung de bo qua
				q = p;
				p = p->next; o ben duoi*/
				continue;
			}
		}
		/*khi p->info.diem lon hon 2 chay toi vi tri ke tiep*/
		q = p;
		p = p->next;
	}
}
//sap xep danh sach sinh vien theo diem giam dan
void sapxeptdiem(list& l)
{
	node* p,* q;
	p = l.head->next;
	q = l.head;
	while (p!=NULL)
	{
		if (p->info.diem>q->info.diem)
		{
			//doi cho hai info
			swap(q->info, p->info);
			//reset lai tu dau de kiem tra lai
			p = l.head->next;
			q = l.head;
			//continue dung bo qua q=p va p=p->next ben duoi
			continue;
		}
		q = p;
		p = p->next;
	}
}
//them 1 sinh vien vao danh sach dung thu tu diem giam dan
void them1sv(list& l)
{
	/*p luu va chay tu dau den vi tri cuoi trong danh sach
	sinh vien
	*q luu vi tri truoc q
	*r dung de luu vi tri chua du lieu sinh vien vua nhap*/
	node* p, * q, * r;
	SINHVIEN sv;
	p = l.head->next;
	q = l.head;
	cout << "Nhap ma so sinh vien moi: ";
	getline(cin, sv.mssv);
	do
	{
		cout << "Nhap diem: ";
		cin >> sv.diem;
	} while (sv.diem < 0 || sv.diem>10);
	cout << "Nhap ghi chu: ";
	cin.ignore();
	getline(cin, sv.ghichu);
	r = taonut(sv);
	while (p!=NULL)
	{
		//lon hon diem cua sinh sinh dung dau thi thay l.heal=r
		if (r->info.diem > q->info.diem)
		{
			r->next = l.head;
			l.head = r;
			break;
		}
		/*be hon hoac bang diem sinh vien tai vi tri q 
		va lon hon diem sinh vien tai vi tri p nen 
		chen vao giua danh sach
		*/
		else if (p->info.diem<r->info.diem && q->info.diem>=r->info.diem)
		{
			r->next = p;
			q->next = r;
			break;
		}
		/*be hon diem tai vi tri sinh vien l.tail nen 
		chen vao cuoi danh sach va thay l.tail=r */
		else if (p==l.tail)
		{
			l.tail->next = r;
			l.tail = r;
			break;
		}
		q = p;
		p = p->next;
	}
}
void main()
{
	list l;
	SINHVIEN sv;
	l.head = l.tail = NULL;
	in(l);
	docFile(l);
	out(l);
	diemtren8(l);
	do
	{
		tim(l);
		cout << "Esc de dung\n";
	} while (_getch()!=27);
	huy(l);
	sapxeptdiem(l);
	them1sv(l);
	out(l);
}