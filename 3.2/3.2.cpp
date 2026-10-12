#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int a, did = INT_MIN;
    cin >> a;
    int mas[a];
    for (int i = 0; i < a; i++)
    {
        cin >> mas[i];
        if (mas[i] > did && mas[i] % 2 == 0)
        {
            did = mas[i];
        }
    }
    cout << did;
    return 0;
}
