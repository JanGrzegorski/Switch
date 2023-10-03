#include <iostream>
#include <math.h>
using namespace std;
float obli1(float&);
float obli2(float&);
float obli3(float&, float&, float&);
float obli4(float&, float&);


int main() {
    setlocale(LC_ALL, "");
    float mc, mv, m, h, g, ek, ep;
    int menu;
    cout << "rówania switch\n";
    cout << "1: E=mc^2,  2: Ek=(mv^2)/2  3: Ep=mhg  4: Em=Ek+Ep" << endl;
    cout << "Wybierz operacje ="; cin >> menu;
    cout << "Podaj mc ="; cin >> mc;
    cout << "Podaj mv ="; cin >> mv;
    cout << "Podaj m ="; cin >> m;
    cout << "Podaj h ="; cin >> h;
    cout << "Podaj g ="; cin >> g;
    cout << "Podaj Ek ="; cin >> ek;
    cout << "Podaj Ep ="; cin >> ep;


    switch (menu)
    {
    case 1:
        cout << "równanie 1 = " << obli1(mc) << endl;
        break;

    case 2:
        cout << "rówanie 2 = " << obli2(mv) << endl;
        break;

    case 3:
        cout << "równanie 3 = " << obli3(m, h, g) << endl;
        break;

    case 4:
        cout << "równanie 4 = " << obli4(ek, ep) << endl;
        break;



    default:
        cout << "Nie zdefiniowano operacji:rozpocznij od początku" << endl;
        break;


        system("pause");
        return 0;
    }
}

float obli1(float& mc)
{
    return pow(mc, 2);
}

float obli2(float& mv)
{
    return (pow(mv, 2)) / 2;
}

float obli3(float& m, float& h, float& g)
{
    return m * h * g;
}

float obli4(float& ek, float& ep)
{
    return  ek + ep;
}
