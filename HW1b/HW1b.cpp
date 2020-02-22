#include<iostream>
#include<string>
#include<sstream>
#include <stdlib.h> 
using namespace std;
int main()
{
    char a[256];
    cin >> a;
    int k = strlen(a);
    int x = 0, y = 0, z = 0, w = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            int t = a[i] - '0';
            y = y * 10 + t;
        }
        if ((w == 0 && a[i] == '+') || (w == 0 && a[i] == '-'))
        {
            x = y; w = 1; y = 0;
        }
        if (a[i] == '+')
        {
            if (z == -1 || z==1)
            {
                x = x + y * z;
                y = 0;
            }
            z = 1;
        }
        if (a[i] == '-')
        {
            if (z == -1 || z == 1)
            {
                x = x + y * z;
                y = 0;
            }
            z = -1;
        }

    }
    x = x + y * z;
    cout << x;
    return 0;
}