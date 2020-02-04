#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    char* p;
    char c1;
    int count = 0, alp = 0, digt = 0, spcchr = 0, oth = 0;
    char arr[100];
    string str1;
    getline(cin, str1);
    cout << endl;
    strcpy(arr, str1.c_str());
    for (p = arr; *p != '\0'; p++)
    {
        c1 = *p;
        count++;
        if (isalpha(c1))
        {
            alp++;
        }
        else
            if (isdigit(c1))
            {
                digt++;
            }
            else
                if (isspace(c1))
                {
                    spcchr++;
                }
                else
                {
                    oth++;;
                }
    }
    cout << " Characters: " << count << endl;
    cout << " Alphabets: " << alp << endl;
    cout << " Digits: " << digt << endl;
    cout << " Spaces: " << spcchr << endl;
    cout << " Other " << oth << endl << endl;
    return 0;
}