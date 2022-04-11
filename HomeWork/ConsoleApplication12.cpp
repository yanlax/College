#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
	cout << "\nВ массиве содержатся следующие элементы:\n" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ": " << array[i] << endl;
	}
}

void printNewArray(int array[], int size)
{
	cout << "\nВ новом массиве содержатся следующие элементы:\n" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ": " << array[i] << endl;
	}
}

void minAndMax(int array[], int size)
{
	int max = array[0];
	int min = array[0];

	for (int i = 1; i < 10; i++)
	{
		if (array[i] > max)
			max = array[i];
		else if (array[i] < min)
			min = array[i];
	}
	array[0] = max;
	array[size] = min;

}

int main()
{
	setlocale(LC_ALL, "rus");

	int massive[128];
	int size = 0;

	for (; size < 128; size++)
	{
		int num = 0;
		cout << "Введите значение: ";
		cin >> num;

		if (num == 0)
		{
			break;
		}
		else
		{
			massive[size] = num;
		}
	}
	printArray(massive, size);
	//minAndMax(massive, size);
	/*int min = 0, max = 0;

	for (int i = 0; i < size; i++)
	{
		if (massive[i] < massive[min])
			min = i;

		if (massive[i] > massive[max])
			max = i;
	}

	int tmp = massive[max];
	massive[max] = massive[min];
	massive[min] = tmp;*/
	sort(massive, massive + size, greater<int>());

	printNewArray(massive, size);

	system("pause");
}
