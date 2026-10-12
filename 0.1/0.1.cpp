#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int a, sum = 0;
    cin >> a;
    int mas[a];
    for (int i = 0; i < a; i++)
    {
        cin >> mas[i];
    }
    cout << mas[0] + mas[1];
    return 0;
}
