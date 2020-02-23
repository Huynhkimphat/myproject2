#include<iostream>
#include<string>
#include<sstream>
#include <stdlib.h> 
using namespace std;
int main()
{
    char a[256];
    cin >> a;
    double x = 0, y = 0, w = 0, z = 0, u = 0, k = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (y == k && y!=0)
        {
            y = 0;
            k = 0;
        }
        if (a[i] >= '0' && a[i] <= '9')
        {
            int t = a[i] - '0';
            y = y * 10 + t;
        }
        if ((w == 0 && a[i] == '*') || (w == 0 && a[i] == '/')|| (w == 0 && a[i] == '+') || (w == 0 && a[i] == '-'))
        {
            x = y; w = 1;
            if (a[i] == '+' || a[i] == '-')
            {
                y = 0;
            }
        }
        if (a[i] == '+' || a[i] == '-')
        {
            x = x + y * z;
            y = 0;
            if (a[i] == '+')z = 1;
            if (a[i] == '-')z = -1;
        }
        if (a[i] == '*' || a[i] == '/')
        {
            k = y;
            y = 0;
            u = 0;
            if (a[i] == '*')u = 1;
            if (a[i] == '/')u = -1;
            i++;
            while (true)
            {
                if (a[i] >= '0' && a[i] <= '9')
                {
                    int t = a[i] - '0';
                    y = y * 10 + t;
                }
                if (a[i] == '*' || a[i] == '/')
                {
                    if (u == 1)k *= y;
                    if (u == -1)k /= y;
                    y = 0;
                    if (a[i] == '*')u = 1;
                    if (a[i] == '/')u = -1;
                }
                if (i == strlen(a) - 1)
                {
                    break;
                }
                if (a[i] == '+' || a[i] == '-')
                {
                    break;
                }
                i++;
            }
            if (u == 1)k *= y;
            if (u == -1)
            {
                k /= y;
            }
            if (z == 0)
            {
                x = k;
            }
            if (a[i] == '+' || a[i] == '-')
            {
                x = x + k * z;
                if (a[i] == '+')z = 1;
                if (a[i] == '-')z = -1;
            }
            y = k;
        }
    }
    x = x + y * z;
   cout << x;
    
    return 0;
}