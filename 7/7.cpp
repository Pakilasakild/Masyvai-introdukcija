#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int a, did = -1;
    cin >> a;
    int mas[a];
    for (int i = 0; i < a; i++)
    {
        cin >> mas[i];
        if (mas[i] % 2 == 0)
        {
            if (i != 0)
            {
                if (mas[i] > mas[did]){
                    did = i;
                }
            }
            else
            {
                if (mas[i] > INT_MIN)
                {
                    did = i;
                }
            }
        }
    }
    if (did == -1)
    {
        cout << "NE";
        return 0;
    }
    cout << mas[did];
    return 0;
}
