#include <iostream>
#include "printArray.h"
#include "printNewArray.h"
#include "sortArray.h"
using namespace std;


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