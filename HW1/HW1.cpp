#include <iostream>
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
    /*
    // current date/time based on current system
    time_t now = time(0);

    // convert now to string form
    char* dt = ctime(&now);

    cout << "The local date and time is: " << dt << endl;*/
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

}
