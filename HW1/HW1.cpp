#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <iostream>
#include <time.h>
#include <math.h>
#include <ctime>
using namespace std;
void HW1a();
void HW1b();
void HW1c();
void HW1d();
void HW1e();
int main() {
    int k;
    cin >> k;
    switch (k)
    {
    case 1:
        HW1a();
        break;
    case 2:
        HW1b();
        break;
    case 3:
        HW1c();
        break;
    case 4:
        HW1d();
        break;
    case 5:
        HW1e();
        break;
    }
    return 0;
}
void HW1a()
{
    // current date/time based on current system
    time_t now = time(0);
    char* dt = ctime(&now);

    cout << "The local date and time is: " << dt << endl;
}
void HW1b()
{

}
void HW1c()
{
    string a;
    string b;
    cout << "First name: ";
    cin >> a;
    cout << "Last name: ";
    cin >> b;
    cout << a << " " << b;
}
void HW1d()
{
    float k;
    cout << "Input the number: ";
    cin >> k;
    cout << "Meter: " << k / 100 << endl;
    cout << "Kilometer: " << k / 100000 << endl;
}
void HW1e()
{
    float x1, x2, y1, y2;
    cout << "First Point: ";
    cin >> x1;
    cin >> y1;
    cout << "Second Point ";
    cin >> x2;
    cin >> y2;
    float a = (x2 - x1)*(x2 - x1);
    float b = (y2 - y1) * (y2 - y1);
    float k = sqrt(a + b);
    cout << k;
}
