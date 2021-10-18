#include <iostream>

using namespace std;

int main()
{
    double a;
    cout << "Nhap a: ";
    cin >> a;
    double phanLe = a - long(a);
    if (a == 0)
    {
        cout << -1;
    }
    else if (a > 0)
    {
        if (phanLe == 0)
        {
            cout << a - 1;
        }
        else
        {
            cout << a - phanLe;
        }
    }
    else
    {
        if (phanLe == 0)
        {
            cout << a - 1;
        }
        else
        {
            cout << a - phanLe - 1;
        }
    }
    return 0;
}
