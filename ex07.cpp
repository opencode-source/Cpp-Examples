#include <iostream>

using namespace std;

int main()
{
    int a = 7;
    int b = 2;
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "a is: " << a << " b is: " << b <<endl;
    return 0;
}
