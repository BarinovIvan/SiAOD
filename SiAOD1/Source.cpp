#include <iostream>

using namespace std;

void exer1() {

	cout << "Упражнение 1" << endl;

	/*	Определить переменную целого типа, присвоить ей значение, используя
		константу в шестнадцатеричной системе счисления.
		Разработать оператор присваивания и его выражение, которое установит
		заданные в задании биты исходного значения переменной в значение 1,
		используя соответствующую маску и поразрядную операцию  */

	const int x = 0x5555; // 0101010101010101
	int y = 0xAAAA;      //  1010101010101010
	y = y | x;
	cout << y << endl;
}
void exer2(unsigned short int x)
{
    x = x & 0x7F0F;
	
	cout << hex << x;

	/*  обнулить
		заданные в задании биты исходного значения переменной, используя
		соответствующую маску
		с 5го бита четыре слева */
}

void exer3(unsigned long int y)  // умножаем на 32 // Число вводим в 16ой 
{
	
	y = y << 5;
	cout << hex << y;
}

void exer4(unsigned long int y)  // делим на 32
{
	
	y = y >> 5;
	cout << hex << y;
}

void exer5(unsigned long int x, int n)
{
	//нужно обнулить n - ый бит в введенном числе.
	
	unsigned long int y = 1;
	y = y << n;
	x = x & ~y;
	cout << hex << x;
	
}

int main()
{

	setlocale(LC_ALL, "rus");
	cout << "Введите номер нужного упражнения" << endl;

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

