#include <iostream>
using namespace std;

int Minimal_element(int* arr, int N);
void Conversion(int* arr, int min, int N);
int Sum(int* arr, int N);
int main()
{
	int N;
	cout << "Enter the number of elements in array: ";
	cin >> N;
	cout << "Enter elements of array: ";
	char str[1000];
	cin.get();
	gets_s(str);
	char num[10] = " ";
	int j = 0; // counter for curent num in string;
	int k = 0; // number of elements in  array
	int* A = new int[N];
	for (int i = 0; str[i] != '\0'; i++)
	{
		num[j] = str[i];
		j++;
		if (str[i] == ' ' || str[i + 1] == '\0')
		{
			j = 0;
			A[k] = atoi(num);
			k++;
			strcpy_s(num, "");
		}
		if (k > N) { break; }
	}
	int amount_of_conversation;
	cout << "Enter amount of conversation: ";
	cin >> amount_of_conversation;

	for (int i = 0; i < amount_of_conversation; i++)
	{
		Conversion(A, Minimal_element(A, N), N);
	}

	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl << Sum(A, N);
}

void Conversion(int* arr, int min, int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = min - arr[i];
	}
}

int Minimal_element(int* arr, int N)
{
	int min = arr[0];
	for (int i = 1; i < N; i++)
	{
		if (min > arr[i]) { min = arr[i]; }
	}
	return min;
}

int Sum(int* arr, int N)
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
	}
	return sum;
}