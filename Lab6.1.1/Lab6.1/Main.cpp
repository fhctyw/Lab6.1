// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 6.1
// Пошук елементів одновимірного масиву ітераційним та рекурсивним способом
// Варіант 13(Ітераційний спосіб)
#include <iostream>
#include <iomanip>
using namespace std;

void InitArray(int arr[], const int size)	
{
	for (size_t i = 0; i < size; i++)
		arr[i] = -10 + rand() % 25;
}

void PrintArray(int arr[], const int size)
{
	cout << "{";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i];
		if (i != size-1)
			cout << ", ";
	}
	cout << "}" << endl;
}

int SumArray(const int *const arr, const int size)
{
	int S = 0;
	for (size_t i = 0; i < size; i++)
		if (arr[i] > 0 || i % 2 == 0)
			S += arr[i];
	return S;
}

int CountElementArray(const int *const arr, const int size)
{
	int C = 0;
	for (size_t i = 0; i < size; i++)
		if (arr[i] > 0 || i % 2 == 0)
			C++;
	return C;
}

void ReplaceElementArray(int arr[], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > 0 || i % 2 == 0)
			arr[i] = 0;
	}
}

int main()
{
	srand(time(0));

	const int size = 24;
	int Arr[size];
	
	InitArray(Arr, size);
	PrintArray(Arr, size);
	cout << "Array sum by condition = " << SumArray(Arr, size) << endl;
	cout << "Count element by condition = " << CountElementArray(Arr, size) << endl;
	ReplaceElementArray(Arr, size);
	PrintArray(Arr, size);

	return 0;
}