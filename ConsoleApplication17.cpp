#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int length = 0;
    int width = 0;
    int number = 0;
    int finalLenght = 0;
    int finalWidth = 0;
    int i = 0;

    cout << "Введите длину X: ";
    cin >> length;
    cout << "Введите ширину Y: ";
    cin >> width;

    for (;;)
    {
        if ((length > 1) && (width > 1))
        {
            number = length / width;
            finalLenght = width;
            finalWidth = length - (width * number);
            width = finalWidth;
            length = finalLenght;
            i = i + number;
        }
        else
        {
            break;
        }
    }
    cout << "Кол-во получившихся квадратов: " << i;
    cout << "\nСторона последнего квадрата: " << length << endl;

    system("pause");
}
