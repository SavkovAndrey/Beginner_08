#include <iostream>
#include <time.h>
#include <chrono> 

using namespace std;
//---------------------������� � ���������---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------���� �����-------------------------------------

	int x, y, z;

	//string a,b,c,d;
	char a[256];
	char b[256];
	char c[256];
	char d[256];

	cout << "������� ���:  ";
	cin >> a;

	cout << endl << "������� �������:  ";
	cin >> b;

	cout << endl << "������� ��������:  ";
	cin >> c;

	cout << endl << "������� ����� ������:  ";
	cin >> d;
	cout << endl;

	

	x = strlen(a) + strlen(b) + strlen(c) + 6;  // ���
	
	y = strlen(d) + 25;                         // ������

	cout << x << endl;
	cout << y << endl;

	if (x >= y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	
	if (z < 27)                                  // ���
	{
		z = 27;
	}
	
	cout << z << endl;


	// 1)

	cout << endl;
	for (int i = 0; i < z; i++)
	{
		cout << "*";
    }
	
	// 2)

	cout << endl << "* ������������ ������ � 1";
	for (int i = 0; i < z - 26; i++)
	{
		cout << " ";
	}
	cout << "*";

	//3)

	cout << endl << "* ��������(�): ��. ��. " << d;
	for (int i = 0; i < z - 24 - strlen(d); i++)
	{
		cout << " ";
	}
	cout << "*";

	// 4)

	cout << endl << "* " << a << " " << b << " " << c;
	for (int i = 0; i < z - x + 1; i++)
	{
		cout << " ";
	}
	cout << "*";

	// 5)

	cout << endl;
	for (int i = 0; i < z; i++)
	{
		cout << "*";
	}
	cout << endl;

	return 0;
}
