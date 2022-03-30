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
void minAndMax(int array[], int size)
{

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

	system("pause");
}

