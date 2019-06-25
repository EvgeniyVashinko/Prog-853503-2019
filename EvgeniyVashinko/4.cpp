// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int NumLenghth(int num);
int Reverse(int num);
int main()
{
	char str[1000];
	gets_s(str);
	char num[10] = " ";
	int price[3], j = 0, k = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		num[j] = str[i];
		j++;
		if (str[i] == ' ' || str[i + 1] == '\0')
		{
			j = 0;
			price[k] = atoi(num);
			k++;
			strcpy_s(num, "");
		}
		if (k > 3) { break; }
	}
	int counter = 0;
	for (int i = price[0]; i <= price[1]; i++)
	{
		if (abs(i - Reverse(i)) <= price[2])
		{
			counter++;
		}
	}
	cout << counter;
}

int Reverse(int num) {
	int rev_num = 0;
	int deg = NumLenghth(num);
	while (num)
	{
		rev_num += (num % 10) * powl(10, deg);
		deg--;
		num /= 10;
	}
	return rev_num / 10;
}

int NumLenghth(int num) {
	int counter = 0;
	while (num) {
		counter++;
		num /= 10;
	}
	return counter;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
