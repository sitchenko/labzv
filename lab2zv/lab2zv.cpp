#include <iostream>
#include <cmath>
#include <fstream>

using namespace std; // спрощення переходу на новий рядок

double CalculateYLeftBranch(int j, int n)
{
    double y = 0;
    while (j < n)
    {
        y += (j / pow(j, 2) + j);
        j++;
    }
    return y;
}

double CalculateYRightBranch(int i, int a)
{
    double y = 0;
    while (i < a)
    {
        y += i * i;
        i++;
    }
    return y;
}

int main()
{
    setlocale(LC_ALL, "UKRAINIAN"); // інтеграція мови

    // введення данних
InputValues:
    int n;
    cout << "Введiть значення n(>1): ";
    cin >> n;
    int a = (n - 1);
    int x = a;
    int b;
    cout << "Введiть значення b(>=0): ";
    cin >> b;
    int h;
    cout << "Введiть значення h(>0): ";
    cin >> h;
    cout << " \n";

    double y = 0;
    int i = 1;
    int j = 1;

    // перевірка виконнання умов
    if (n <= 1 || b < 0 || h <= 0)
    {
        cout << "Помилка. Введіть корректні значення \n";
        cout << " \n";
        goto InputValues;
    }

    // основний цикл
    while (x <= b)
    {
        if (x < 0)
        {
            x += h;
            y = CalculateYLeftBranch(j, n);
        }
        else
        {
            x += h;
            y = CalculateYRightBranch(i, a);
        }
    }

    cout << "x = " << x << ", y = " << y << ". \n";
    cout << " \n";

    // додавання результатів в текстовий файл
    ofstream outfile;
    outfile.open("Results.txt", ios::app);
    outfile << "x = " << x << ", y = " << y << "\n";
    outfile.close();

    return 0;
}
