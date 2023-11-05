//Nhập số chia x và số bị chia y.
//In ra kết luận x có chia hết cho y hay ko ? Nếu ko, in ra số dư.Nếu số bị chia bằng 0 thì in ra thông báo ko hợp lệ

#include <iostream>
using namespace std;


int main()
{
	int x, y;
	cout << "Nhap so chia x: "; cin >> x;
	cout << "Nhap so bi chia y: "; cin >> y;

	if (y == 0)
	{
		cout << "Phep chia khong hop le";
		return 0;
	}
	int z = x % y;
	if (z == 0)
	{
		cout << x << " chia het cho " << y;
	}
	else
	{
		cout << x << " khong chia het cho " << y << ". So du la " << z;
	}
}
