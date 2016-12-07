#include <iostream>
#include <string>
using namespace std;

bool checkNumberPartition(const int number, const int min, const int max)
{
    if (number > min && number < max)
        return true;
    return false;
}

string boolToString(bool x)
{
    if (x == false)
        return "NIE";
    return "TAK";
}

int main()
{
    int requestChoice;
    string str;

    do
    {   

        cout << "1.  Sprawdzic czy liczba x wprowadzona z klawiatury miesci sie w przedziale [10,20) " << endl
             << "0. Koniec zadania" << endl;
        cout << "Podaj numer: ";
        cin >> requestChoice;
        switch (requestChoice)
        {
        case 1 :
            int x;
            cout << "Podaj x: ";
            cin >> x;
            cout << "Czy x miesci sie w przedziale: " << boolToString(checkNumberPartition(x, 9, 20)) << endl;
            break;
        case 0 : 
            break;
        default:
            break;
        }
    } while (0 != requestChoice);
    system("pause");
}