/*a / Write a program in C++ to display the sum of the series[1 + x + x ^ 2 / 2!+ x ^ 3 / 3!+ ....]
b / Write a program in C++ to display the first n terms of Fibonacci series
c / Write a program in C++ to count the letters, spaces, numbersand other characters of an input string
d / Write a program in C++ to create and display unique three - digit number using 1, 2, 3, 4. Also count how many three - digit numbers are there.
e / Write a program in C++ to convert a hexadecimal number to octal number
*/
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <iostream>
#include <math.h>
#include <string>
#include <cstring>
#include<cstdio>
using namespace std;
void HW2a();
void HW2b();
void HW2c();
void HW2d();
void HW2e();
int main() {
    int k;
    int tutu = 1;
    while(tutu == 1){
        cin >> k;
        switch (k)
        {
        case 1:
            HW2a();
            break;
        case 2:
            HW2b();
            break;
        case 3:
            HW2c();
            break;
        case 4:
            HW2d();
            break;
        case 5:
            HW2e();
            break;
        case 0:
            tutu = 0;
            break;
        }
        
    }
    return 0;
}
void HW2a()
{
    int n;
    cout << "Input n: ";
    cin >> n;
    float result = 1;
    int P = 1;
    int S = 1;
    for (int i = 1; i <= n; i++)
    {
        P = P * n;
        S = S * i;
        result += P / S;
    }
    cout << result << endl;
}
void HW2b()
{
    int prv = 0, pre = 1, trm, i, n;
    cout << " Input the amount: ";
    cin >> n;
    cout << prv << " " << pre;
    for (i = 3; i <= n; i++)
    {
        trm = prv + pre;
        cout << " " << trm;
        prv = pre;
        pre = trm;
    }
    cout << endl;
}
void HW2c()
{
}
void HW2d()
{
    int amount = 0;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            for (int k = 1; k <= 4; k++)
            {
                if (k != i && k != j && i != j)
                {
                    amount++;
                    cout << i << j << k << " ";
                }
            }
        }
    }
    cout << endl << " Total: " << amount << endl << endl;
}
void HW2e()
{
    
}
