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
    float x = 0, y = 0, z = 0, w = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            int t = a[i] - '0';
            y = y * 10 + t;
        }
        if ((w == 0 && a[i]=='*') ||(w == 0 && a[i] == '/'))
        {
            x = y; w = 1; y = 0;
        }
        if (a[i] == '*')
        {
            if (z == 1)
            {
                x = x*y ;
                y = 0;
            }
            if (z == -1)
            {
                x = x / y;
                y = 0;
            }
            z = 1;
        }
        if (a[i] == '/')
        {
            if (z == 1)
            {
                x = x * y;
                y = 0;
            }
            if (z == -1)
            {
                x = x / y;
                y = 0;
            }
            z = -1;
        }

    }
    if (z == 1)
    {
        x = x * y;
    }
    if (z == -1)
    {
        x = x / y;
    }
    cout << x;
    return 0;
}