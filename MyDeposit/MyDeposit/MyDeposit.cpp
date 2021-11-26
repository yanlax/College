#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    double sumDeposit = 0;
    double percentBet = 0;
    double accruedPercent = 0;

    while (true)
    {
        cout << "\nВведите сумму вклада: "; cin >> sumDeposit;

        if (sumDeposit > 0)
        {
            cout << "\nВведите проценьную ставку: ";  cin >> percentBet;

            if ((percentBet > 0) && (percentBet < 50))
            {
                accruedPercent = sumDeposit * percentBet / 100;

                cout << "\nДанные по вкладу:"
                    << "\nСумма вклада: " << sumDeposit
                    << "\nПроцентная ставка: " << percentBet
                    << "\nНачисленные проценты: " << accruedPercent
                    << "\nОбщая сумма: " << sumDeposit + accruedPercent << endl;
                break;
            }
            else
            {
                cout << "\nПроцентная ставка не может быть меньше 0 или больше 50! Повторите попытку!" << endl;
                continue;
            }
        }
        else
        { 
            cout << "\nВклад не может быть отрицательным! Повторите попытку!" << endl;
            continue;
        }
    }
    system("pause");    
}

