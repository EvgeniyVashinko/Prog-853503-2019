#include <iostream>
using namespace std;

bool Сheck_lucky_num(int);
int main()
{
	long long int num;
	int counter = 0;
	cin >> num;
	for (long int i = 4; num > 3; i++) 
	{
		if (num % i == 0)
		{
			if (Сheck_lucky_num(i))
			{
				counter++;
			}	
			num /= i;
			i--;
		}
		else { continue; }
	}
	cout << counter;
	return 0;
}

bool Сheck_lucky_num(int num)
{
	while (num)
	{
		if (num % 10 == 4 || num % 10 == 7)
		{
			return true;
		}
		num /= 10;
	}
	return false;
}