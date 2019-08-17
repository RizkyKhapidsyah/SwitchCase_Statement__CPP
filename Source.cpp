#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a;
	cout << "Masukkan Nilai A = "; cin >> a;

	switch (a)
	{
	case 1:
		cout << "A = 1" << endl;
		break;
	case 2:
		cout << "A = 2" << endl;
		break;
	case 3:
		cout << "A = 3" << endl;
		break;
	default:
		cout << "Nilai A tidak ada di daftar, namun nilai yang terdeteksi adalah : " << a << endl;
		break;
	}

	_getch();
	return 0;
}