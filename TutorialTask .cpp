#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a = 1234, b = 20;
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    cout << " a = " << setw(10) << a << endl;
    cout << " b = " << setw(10) << a << endl;
    return 0;
}
