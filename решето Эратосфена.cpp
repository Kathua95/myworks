
#include <iostream>
using namespace std;
int main()
{
    int o;
    cout << "o = ";
    cin >> o;
    int* a = new int[o + 1];
    for (int i = 0; i < o + 1; i++)
        a[i] = i;
    for (int p = 2; p <o + 1; p++)
    {
        if (a[p] != 0)
        {
            cout << a[p] << '\n';
            for (int x = p * p; x < o + 1;x += p)
                a[x] = 0;
        }
    }
    cin.get(); cin.get();
}