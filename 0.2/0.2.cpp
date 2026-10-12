#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
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
    sort(mas, mas+a);
    cout << mas[0] + mas[a-1];
    return 0;
}
