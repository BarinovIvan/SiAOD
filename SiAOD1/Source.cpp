#include <iostream>

using namespace std;

void coutp(unsigned int x)
{
	int n = sizeof(int) * 8;
	unsigned maska = (1 << (n - 1));
	for (int i = 1; i <= n; i++)
	{
		cout << ((x & maska) >> (n - i));
		maska = maska >> 1;
	}
}

void exer1() {

	cout << "���������� 1" << endl;

	/*	���������� ���������� ������ ����, ��������� �� ��������, ���������
		��������� � ����������������� ������� ���������.
		����������� �������� ������������ � ��� ���������, ������� ���������
		�������� � ������� ���� ��������� �������� ���������� � �������� 1,
		��������� ��������������� ����� � ����������� ��������  */

	const int x = 0x5555; // 0101010101010101
	int y = 0xAAAA;      //  1010101010101010
	cout << "�����: ";
	coutp(x);
	cout <<endl << "�����: ";
	coutp(y);
	y = y | x;
	cout <<"\n���������: "<<endl<< y << endl<< "       ";
	coutp(y);

}
void exer2(unsigned short int x)
{
	cout << "����������� �����: \n";
	coutp(x);
    x = x & 0x7F0F;
	
	cout <<endl<< hex << x;
	cout << endl;
	cout << "���������: \n";
	coutp(x);

	/*  ��������
		�������� � ������� ���� ��������� �������� ����������, ���������
		��������������� �����
		� 5�� ���� ������ ����� */
}

void exer3(unsigned long int y)  // �������� �� 32 // ����� ������ � 16�� 
{
	cout << "����������� �����: \n";
	coutp(y);
	y = y << 5;
	cout <<endl<< hex << y << endl;
	cout << "���������: \n";
	coutp(y);
}

void exer4(unsigned long int y)  // ����� �� 32
{
	cout << "����������� �����: \n";
	coutp(y);
	y = y >> 5;
	cout <<endl << hex << y << endl;
	cout << "���������: \n";
	coutp(y);
}

void exer5(unsigned long int x, int n)
{
	cout << "�����: ";
	coutp(x);
	cout << endl;
	//����� �������� n - �� ��� � ��������� �����.
	unsigned long long int y = 0x10000000;
	y = ~ (y >> (28 - n)); // n;
	cout << "�����: ";
	coutp(y);
	cout << endl;
	x = x & ~y;
	cout << "��������� � dec: ";
	cout << hex << x;
	cout << endl;
	cout << "���������: ";
	coutp(x);
	
}

int main()
{

	setlocale(LC_ALL, "rus");
	cout << "������� ����� ������� ����������" << endl;

	int k;
	cin >> k;

	switch (k)
	{
	case 1:
		exer1();
		break;
	case 2:
		unsigned short int y;
		cin >> hex >> y;
		exer2(y);
		cout << endl;
		break;
	case 3:
		unsigned long int c;
		cin >> hex >> c;
		exer3(c);
		cout << endl;
		break;
	case 4:
		unsigned long int f;
		cin >> hex >> f;
		exer4(f);
		cout << endl;
		break;
	case 5:
		unsigned long int g;
		int n;
		cin >> hex >> g;
		cin >> n;
		cout << endl;
		exer5(g, n);
		break;
		return 0;
	}
}

