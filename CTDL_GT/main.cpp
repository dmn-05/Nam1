#include <iostream>

using namespace std;

struct NGAY {
	int ngay;
	int thang;
	int nam;
};

struct SANPHAM {
	int MaSP;
	string TenSP;
	double donGia;
	NGAY NgaySX;
	int soNgaySuDung;
	string noiSanXuat;
};

struct Node {
	SANPHAM sanPham;
	Node* next;
};

struct List {
	Node* head;
	Node* tail;
};

Node* getNode(SANPHAM sanPhamMoi) {
	Node* newNode = new Node;
	if (newNode == NULL) {
		exit(1);
	}
	newNode->sanPham = sanPhamMoi;
	newNode->next = NULL;
	return newNode;
}

void themVaoCuoi(List& list, SANPHAM sanPhamMoi) {
	Node* newNode = getNode(sanPhamMoi);
	if (list.head == NULL) {
		list.head = list.tail = newNode;
	} else {
		list.tail->next = newNode;
		list.tail = newNode;
	}
}

void xuatDanhSachSanPham(List list) {
	if (list.head == NULL) {
		cout << "Danh sach rong, khong the in!\n";
		return;
	}
	
	Node* temp = list.head;
	while (temp != NULL) {
		cout << "Ma san pham: " << temp->sanPham.MaSP << '\n';
		cout << "Ten san pham: " << temp->sanPham.TenSP << '\n';
		cout << "Don gia: " << temp->sanPham.donGia << '\n';
		cout << "Ngay san xuat: " << temp->sanPham.NgaySX.ngay << '\n';
		cout << "Thang san xuat: " << temp->sanPham.NgaySX.thang << '\n';
		cout << "Nam san xuat: " << temp->sanPham.NgaySX.nam << '\n';
		cout << "So ngay su dung: " << temp->sanPham.soNgaySuDung << '\n';
		cout << "Noi san xuat: " << temp->sanPham.noiSanXuat << '\n' << '\n';
		temp = temp->next;
	}
	cout << '\n';
}

bool timKiemSanPhamTheoMaSP(List list, int MaSP) {
	Node* temp = list.head;
	while (temp != NULL) {
		if (temp->sanPham.MaSP == MaSP) {
			return true;
		}
		temp = temp->next;
	}
	return false;
}

int inSanPhamTheoMaSP(List list, int MaSP) {
	Node* temp = list.head;
	while (temp != NULL) {
		if (temp->sanPham.MaSP == MaSP) {
			cout << "Ma san pham: " << temp->sanPham.MaSP << '\n';
			cout << "Ten san pham: " << temp->sanPham.TenSP << '\n';
			cout << "Don gia: " << temp->sanPham.donGia << '\n';
			cout << "Ngay san xuat: " << temp->sanPham.NgaySX.ngay << '\n';
			cout << "Thang san xuat: " << temp->sanPham.NgaySX.thang << '\n';
			cout << "Nam san xuat: " << temp->sanPham.NgaySX.nam << '\n';
			cout << "So ngay su dung: " << temp->sanPham.soNgaySuDung << '\n';
			cout << "Noi san xuat: " << temp->sanPham.noiSanXuat << '\n' << '\n';
			cout << '\n';
			return 1;
		}
		temp = temp->next;
	}
	cout << "Khong tim thay san pham!\n";
	return -1;
}

bool timKiemSanPhamTheoTenSP(List list, string TenSP) {
	Node* temp = list.head;
	while (temp != NULL) {
		if (temp->sanPham.TenSP == TenSP) {
			return true;
		}
		temp = temp->next;
	}
	return false;
}

int inSanPhamTheoTenSP(List list, string TenSP) {
	Node* temp = list.head;
	while (temp != NULL) {
		if (temp->sanPham.TenSP == TenSP) {
			cout << "Ma san pham: " << temp->sanPham.MaSP << '\n';
			cout << "Ten san pham: " << temp->sanPham.TenSP << '\n';
			cout << "Don gia: " << temp->sanPham.donGia << '\n';
			cout << "Ngay san xuat: " << temp->sanPham.NgaySX.ngay << '\n';
			cout << "Thang san xuat: " << temp->sanPham.NgaySX.thang << '\n';
			cout << "Nam san xuat: " << temp->sanPham.NgaySX.nam << '\n';
			cout << "So ngay su dung: " << temp->sanPham.soNgaySuDung << '\n';
			cout << "Noi san xuat: " << temp->sanPham.noiSanXuat << '\n' << '\n';
			cout << '\n';
			return 1;
		}
		temp = temp->next;
	}
	cout << "Khong tim thay san pham!\n";
	return -1;
}
void ingiatrentb(List list )
{Node*p=list.head;
double tb=0;
int count=0;
	for(int i =0;i<5;i++)
	{
		tb+=p->sanPham.donGia ;
		count++;
	}
	tb=tb/count;
	cout<<"gia tb====:"<<tb<<"\n count = "<<count<<"\n";
		Node* temp = list.head;
	while (temp != NULL) {
		if (temp->sanPham.donGia >= tb) {
			cout << "Ma san pham: " << temp->sanPham.MaSP << '\n';
			cout << "Ten san pham: " << temp->sanPham.TenSP << '\n';
			cout << "Don gia: " << temp->sanPham.donGia << '\n';
			cout << "Ngay san xuat: " << temp->sanPham.NgaySX.ngay << '\n';
			cout << "Thang san xuat: " << temp->sanPham.NgaySX.thang << '\n';
			cout << "Nam san xuat: " << temp->sanPham.NgaySX.nam << '\n';
			cout << "So ngay su dung: " << temp->sanPham.soNgaySuDung << '\n';
			cout << "Noi san xuat: " << temp->sanPham.noiSanXuat << '\n' << '\n';
			cout << '\n';
			temp=temp->next;
		}
	}
	
}
int xep()
int main() {
	List list;
	list.head = list.tail = NULL;
	SANPHAM sp[5];
	sp[0].MaSP = 1;
	sp[0].TenSP = "Bot giat OMO";
	sp[0].donGia = 20000;
	sp[0].NgaySX.ngay = 12;
	sp[0].NgaySX.thang = 5;
	sp[0].NgaySX.nam = 2012;
	sp[0].soNgaySuDung = 365;
	sp[0].noiSanXuat = "Viet Nam";
	
	sp[1].MaSP = 2;
	sp[1].TenSP = "Bot giat ABA";
	sp[1].donGia = 25000;
	sp[1].NgaySX.ngay = 7;
	sp[1].NgaySX.thang = 8;
	sp[1].NgaySX.nam = 2018;
	sp[1].soNgaySuDung = 360;
	sp[1].noiSanXuat = "Indonesia";
	
	sp[2].MaSP = 33;
	sp[2].TenSP = "Nuoc xa vai";
	sp[2].donGia = 50000;
	sp[2].NgaySX.ngay = 11;
	sp[2].NgaySX.thang = 12;
	sp[2].NgaySX.nam = 2015;
	sp[2].soNgaySuDung = 500;
	sp[2].noiSanXuat = "Thai Lan";
	
	sp[3].MaSP = 45;
	sp[3].TenSP = "Dau goi Dove";
	sp[3].donGia = 35000;
	sp[3].NgaySX.ngay = 5;
	sp[3].NgaySX.thang = 4;
	sp[3].NgaySX.nam = 2005;
	sp[3].soNgaySuDung = 450;
	sp[3].noiSanXuat = "Duc";
	
	sp[4].MaSP = 124;
	sp[4].TenSP = "Dau goi X-MEN";
	sp[4].donGia = 65000;
	sp[4].NgaySX.ngay = 6;
	sp[4].NgaySX.thang = 9;
	sp[4].NgaySX.nam = 2005;
	sp[4].soNgaySuDung = 700;
	sp[4].noiSanXuat = "Viet Nam";
	
	for (int i = 0; i < 5; ++i) {
		themVaoCuoi(list, sp[i]);
	}
	
	// Xuat danh sach san pham
	cout << "DANH SACH SAN PHAM\n";
	xuatDanhSachSanPham(list);
	
	cout<<"=== gia tri tren tb ===";
	ingiatrentb(list);
	int MaSP;
	cout << "Nhap ma san pham ma ban muon tim: ";
	cin >> MaSP;
	cin.ignore();
	if(timKiemSanPhamTheoMaSP(list, MaSP)){
cout <<" co san pham \n";		
	}
	else 
	cout<<"khong tim thay \n";
	
	
	
	string TenSP;
	cout << "Nhap ten san pham ma ban muon tim: ";
	getline(cin, TenSP);
	if(timKiemSanPhamTheoTenSP(list, TenSP))
	{
		cout<<"co\n";
	}
	else 
	cout<<"khong co\n";
	
	inSanPhamTheoMaSP(list, MaSP);
	inSanPhamTheoTenSP(list, TenSP);
	
	return 0;
}
