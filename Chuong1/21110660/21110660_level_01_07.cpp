#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
    if (a != 0 && b != 0 && c != 0)
    {
        if ((a + b) > c && (b + c) > a && (c + a) > b)
        {
            if ((a - b) < c && (b - c) < a && (c - a) < b)
            {
                cout << a << " " << b << " " << c << " la do dai 3 canh cua tam giac" << endl;
            }
            else
            {
                cout << a << " " << b << " " << c << " khong phai la do dai 3 canh cua tam giac" << endl;
            }
        }
        else
        {
            cout << a << " " << b << " " << c << " khong phai la do dai 3 canh cua tam giac" << endl;
        }
    }
    else
    {
        cout << a << " " << b << " " << c << " khong phai la do dai 3 canh cua tam giac" << endl;
    }
    return 0;
}
