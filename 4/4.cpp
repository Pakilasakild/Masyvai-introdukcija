#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int a, sum = 0, k = 0;
    cin >> a;
    int mas[a];
    for (int i = 0; i < a; i++)
    {
        cin >> mas[i];
        sum += mas[i];
    }
    cout << fixed << setprecision(2) << sum / (double)a;
    return 0;
}
