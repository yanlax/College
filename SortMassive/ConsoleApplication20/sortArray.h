using namespace std;

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