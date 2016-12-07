#include <iostream>
#include <string>
using namespace std;

bool checkNumberInPartition(const int number, const int min, const int max)
{
    if (number > min && number < max)
        return true;
    return false;
}

string boolToString(bool x)
{
    if (x == true)
        return "TAK";
    return "NIE";
}

string boolToString(bool x, bool y)
{
    if (x == true && y == true)
        return "TAK";
    return "NIE";
}

int main()
{
    int requestChoice,
        x,
        y;
    string str;

    do
    {   

        cout << "1.  Sprawdzic czy liczba x wprowadzona z klawiatury miesci sie w przedziale [10,20) " << endl
             << "2. Sprawdzic czy x nalezy do (-20,5] i y nalezy do [15,100]" << endl
             << "3. Sprawdzic czy x nalezy (20,40) lub y nalezy [23,27) " << endl
             << "4. Podac wyniki dzialan" << endl
             << "0. Koniec zadania" << endl;
        cout << "Podaj numer: ";
        cin >> requestChoice;
        switch (requestChoice)
        {
        case 1 :
            cout << "Podaj x: ";
            cin >> x;
            cout << "Czy x miesci sie w przedziale: " << boolToString(checkNumberInPartition(x, 9, 20)) << endl;
            break;
        case 2:
            cout << "Podaj x, y: ";
            cin >> x >> y;
            cout << "Czy x oraz y miesci sie w przedziale: " << boolToString(checkNumberInPartition(x, -20, 6), checkNumberInPartition(y, 14, 101)) << endl;
            break;
        case 3:
            cout << "Podaj x, y: ";
            cin >> x >> y;
            cout << "Czy x lub y miesci sie w przedziale: " << boolToString(checkNumberInPartition(x, 20, 40) - checkNumberInPartition(y, 22, 27)) << endl;
            break;
        case 4:
            cout << "Podaj x, y: ";
            cin >> x >> y;
            cout << "x & 5: " << (x & 5) << endl
                << "x | 3: " << (x | 5) << endl
                << "x ^ 8: " << (x ^ 8) << endl
                << "x % y: " << (x % y) << endl
                << "~x: " << (~x) << endl;
            break;
        case 0 : 
            break;
        default:
            break;
        }
    } while (0 != requestChoice);
    system("pause");
}