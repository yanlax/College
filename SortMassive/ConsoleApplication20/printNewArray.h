using namespace std;

void printNewArray(int array[], int size)
{
	cout << "\nВ новом массиве содержатся следующие элементы:\n" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ": " << array[i] << endl;
	}
}
