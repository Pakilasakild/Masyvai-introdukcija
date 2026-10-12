/******************************************************************************
Domantas Navikas Isf-26/1 U5
*******************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    long long a;
    cin >> a;
    long long el[a];
    for (int i = 0; i < a; i++)
    {
        cin >> el[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if (el[i] == el[j])
            {
                cout << "Taip";
                return 0;
            }
        }
    }
    cout << "Ne";
}
