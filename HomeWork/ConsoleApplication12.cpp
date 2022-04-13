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

void sortArray(int array[], int size)
{
	for (int j = 0; j < size; j++)
	{
		int min = 0;
		int max = 0;

		for (int i = 0; i < size; i++)
		{
			if (array[i] < array[i + 1])
			{
				max = array[i + 1];
				min = array[i];

				array[i] = max;
				array[i + 1] = min;
			}
		}

	}
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
	sortArray(massive, size);
	printNewArray(massive, size);

	system("pause");
}
