#include <iostream>
#include<cmath>
#include<ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, selection;
    cout << "введите числа:" << '\n';
    cin >> a >> b;

    cout << "выберите операцию:" << '\n' <<
        "1) Сложение" << '\n' <<
        "2) Вычитание" << '\n' <<
        "3) Деление" << '\n' <<
        "4) Умножение" << '\n' <<
        "5) возведение в степень" << '\n' <<
        "6) корень" << '\n' <<
        "7) в рубли" << '\n' <<
        "8) в евро" << '\n';
        

    cin >> selection;
    switch (selection)
    {
    case 1:
        cout << "результат сложения:" << a + b << '\n';
        break;
    case 2:
        cout << "результат вычитания :" << a - b << '\n';
        break;
    case 3:
        cout << "результат деления:" << a / b << '\n';
        break;
    case 4:
        cout << "результат умножения:" << a * b << '\n';
        break;
    case 5:
        cout << "результат возведения в степень:" << pow(a,b) << '\n';
        break;
    case 6:
        cout << "результат кореня:" << sqrt(a ) << '\n';
        break;
    case 7:
        cout << "рубли:" << a*3.91 << '\n';
        break; 
    case 8:
            cout << "евро:" <<a*10 << '\n';
            break;
    


    default:
        cout << "ошибка";
        break;
    }






    return 0;



}


