#include <iostream>
using namespace std;
int tinhtong(int so1, int so2) {
	//int sotong = so1,so2
	//return so tong
	return so1 + so2;
}



int main() {
	//khai bao bien
	int so1, so2, tong;
	//nhap du lieu vaobien
	cout << " CHUONG TRINH TINH TONG\n";
	cout << " NHAPSO THU NHAT:";
	cin >> so1;
	cout << "NHAP SO THU HAI:";
	cin >> so2;
	//tinh toan
	tong = tinhtong(so1, so2);
	//suat du lieu 
	cout << so1 << "+" << so2 << "=" << tong << endl;
	return 0;


}

	
