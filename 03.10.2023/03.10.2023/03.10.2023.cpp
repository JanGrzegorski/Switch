#include <iostream>
using namespace std;
float dodawanie(float liczba1, float liczba2);
float odejmowanie(float liczba1, float liczba2);
float mnożenie(float liczba1, float liczba2);
void dzielenie(float liczba1, float liczba2);
int main()
{
    setlocale(LC_ALL, "");
    float liczba1, liczba2;
    int menu;
    cout << "Kalkulator z switch case\n";
    cout << "dodawanie 1, odejmowanie 2, mnożenie 3,dzielenie 4" << endl;
    cout << "Wybierz operacje = "; cin >> menu;
    cout << "Podaj liczbe1 ="; cin >> liczba1;
    cout << "Podaj liczbe1 ="; cin >> liczba2;

    switch (menu)
    {
        case 1:
        cout << "Dodawanie = " << dodawanie(liczba1, liczba2) << endl;
        break;
        case 2:
        cout << "Odejmowanie= " << odejmowanie(liczba1, liczba2) << endl;
        break;
            case 3:
                cout << "Mnożenie = " << mnożenie(liczba1, liczba2) << endl;
                break;
            case 4:
                dzielenie(liczba1, liczba2);
        break;
            default:
                cout << "Nie zdefiniowano operacji:rozpocznij od początku" << endl;
                break;
    }

    system("pause");
    return 0;
}

float dodawanie(float liczba1, float liczba2)
{
    return liczba1 + liczba2;
}

float odejmowanie(float liczba1, float liczba2)
{
    return liczba1 - liczba2;
}

float mnożenie(float liczba1, float liczba2)
{
    return liczba1 * liczba2;
}

void dzielenie(float liczba1, float liczba2)
{
    if (liczba1 != 0) {
        cout << "dzielenie = " << liczba1 / liczba2 << endl;
    }
    else {
        cout << "nie dziel szlachcicu przez zero " << endl;
    }
}
