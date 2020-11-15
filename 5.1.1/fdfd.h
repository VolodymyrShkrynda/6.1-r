// Рекурентний спосіб
// 22 варіант
#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* t, const int size, const int Low, const int High, int i)
{
    t[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(t, size, Low, High, i + 1);
}

void Print(int* t, const int size, int i)
{
    cout << setw(4) << t[i];
    if (i < size - 1)
        Print(t, size, i + 1);
    else
        cout << endl;
}

int Sum(int* t, const int size, int i, int S)
{
    if ((t[i] % 2 == 0) || (t[i] > 0))
        S += t[i];
    if (i < size - 1)
        return Sum(t, size, i + 1, S);
    else
        return S;
}

void Replacing(int* t, const int size, int i)
{
    if ((t[i] % 2 == 0) || (t[i] > 0))
        cout << 0 << "  ";
    else
        cout << t[i] << "  ";
    if (i < size - 1)
        return Replacing(t, size, i + 1);
}

int Count(int* t, const int size, int i, int j)
{
    if ((t[i] % 2 == 0) || (t[i] > 0))
        j++;
    if (i < size - 1)
        return Count(t, size, i + 1, j);
    else
        return j;
}

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    srand((unsigned)time(NULL));

    const int n = 25;
    int t[n];

    int Low = -5;
    int High = 12;

    Create(t, n, Low, High, 0);
    cout << "Початковий масив" << endl;
    Print(t, n, 0);
    cout << endl;

    cout << "Сума потрiбних елементiв" << endl;
    cout << "S = " << Sum(t, n, 0, 0) << endl;
    cout << endl;

    cout << "Кiлькiсть потрiбних елементiв" << endl;
    cout << "j = " << Count(t, n, 0, 0) << endl;
    cout << endl;

    cout << "Замiна потрiбних елементiв" << endl;
    Replacing(t, n, 0);
    cout << endl;

    system("pause");
    return 0;
}