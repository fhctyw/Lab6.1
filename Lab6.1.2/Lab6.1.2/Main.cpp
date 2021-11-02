// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 6.1
// Пошук елементів одновимірного масиву ітераційним та рекурсивним способом
// Варіант 13(Рекурсивний спосіб)
#include <iostream>
using namespace std;

void InitArray(int arr[], const int size, int i)
{
	if (i < size)
	{
		arr[i] = -10 + rand() % 25;
		InitArray(arr, size, i + 1);
		return;
	}
}

void PrintArray(int arr[], const int size, int i)
{
	if (i < size)
	{
		if (i == 0)
			cout << "{";
		cout << arr[i];
		if (i != size - 1)
			cout << ", ";
		else cout << "}" << endl;
		PrintArray(arr, size, i + 1);
		return;
	}
}

int SumArray(const int *const arr, const int size, int i)
{
	if (i < size)
	{
		if (arr[i] > 0 || i % 2 == 0)
			return arr[i] + SumArray(arr, size, i + 1);
		else 
			return SumArray(arr, size, i + 1);
	}
	else return 0;
}

int CountElementArray(int const *const arr, const int size, int i)
{
	if (i < size)
	{
		if (arr[i] > 0 || i % 2 == 0)
			return 1 + CountElementArray(arr, size, i + 1);
		else
			return CountElementArray(arr, size, i + 1);
	}
	else return 0;
}

void ReplaceElementArray(int arr[], const int size, int i)
{
	if (i < size)
	{
		if (arr[i] > 0 || i % 2 == 0)
			arr[i] = 0;
		ReplaceElementArray(arr, size, i + 1);
		return;
	}
}

int main()
{
	srand(time(0));
	const int size = 24;
	int arr[size];

	InitArray(arr, size, 0);
	PrintArray(arr, size, 0);
	cout << "Array sum by condition = " << SumArray(arr, size, 0) << endl;
	cout << "Count element by condition = " << CountElementArray(arr, size, 0) << endl;
	ReplaceElementArray(arr, size, 0);
	PrintArray(arr, size, 0);

	return 0;
}