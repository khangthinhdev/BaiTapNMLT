#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i * i;
    }
    cout << sum << endl;
    return 0;
}