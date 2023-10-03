#include <iostream>
#include <math.h>
using namespace std;
double potegowanie(float a);
double pierwiastkowanie(float a);
float obli1(float a, float b);
float obli2(float a, float b);


int main()
{
    setlocale(LC_ALL, "");
    float b,a;
    int menu;
    cout << "Kalkulator z switch case\n";
    cout << "potęgowanie 1,pierwiastek z (a) 2, a+b/a*b 3,(a*b-b*a)/a 4" << endl;
    cout << "Wybierz operacje = "; cin >> menu;
    cout << "Podaj a ="; cin >> a;
    cout << "Podaj b ="; cin >> b;
    

    switch (menu)
    {
    case 1:
        cout << "potęgowanie = " << potegowanie(a) << endl;
        break;
    case 2:
        cout << "pierwiastek z (a)= " << pierwiastkowanie(a) << endl;
        break;
    case 3:
        cout << "a+b/a*b = " << obli1(a, b) << endl;
        break;
    case 4:
        obli2(a, b);
        break;
    default:
        cout << "Nie zdefiniowano operacji:rozpocznij od początku" << endl;
        break;
    }

    system("pause");
    return 0;
}

float obli1(float a, float b)
{
    return a + b - a * b;
}



double potegowanie(float a)
{
     return pow( a, 2);
}

double pierwiastkowanie(float a)
{
    return sqrt(a);
}

float obli2(float a, float b)
{
    return (a * b - b * a) / a;
}
