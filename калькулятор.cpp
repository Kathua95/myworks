#include <iostream>
#include<cmath>
#include<ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, selection;
    cout << "������� �����:" << '\n';
    cin >> a >> b;

    cout << "�������� ��������:" << '\n' <<
        "1) ��������" << '\n' <<
        "2) ���������" << '\n' <<
        "3) �������" << '\n' <<
        "4) ���������" << '\n' <<
        "5) ���������� � �������" << '\n' <<
        "6) ������" << '\n' <<
        "7) � �����" << '\n' <<
        "8) � ����" << '\n';
        

    cin >> selection;
    switch (selection)
    {
    case 1:
        cout << "��������� ��������:" << a + b << '\n';
        break;
    case 2:
        cout << "��������� ��������� :" << a - b << '\n';
        break;
    case 3:
        cout << "��������� �������:" << a / b << '\n';
        break;
    case 4:
        cout << "��������� ���������:" << a * b << '\n';
        break;
    case 5:
        cout << "��������� ���������� � �������:" << pow(a,b) << '\n';
        break;
    case 6:
        cout << "��������� ������:" << sqrt(a ) << '\n';
        break;
    case 7:
        cout << "�����:" << a*3.91 << '\n';
        break; 
    case 8:
            cout << "����:" <<a*10 << '\n';
            break;
    


    default:
        cout << "������";
        break;
    }






    return 0;



}


