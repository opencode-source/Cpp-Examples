#include <iostream>

using namespace std;

int main()
{
    float number1, number2;
    float sum, sub, mul, div;

    cout << "add 2 numbers: " << endl;
    cin >> number1 >> number2;

    sum = number1+number2;
    sub = number1-number2;
    mul = number1*number2;
    div = number1/number2;

    cout << "sum is: " << sum << endl;
    cout << "sub is: " << sub << endl;
    cout << "mul is: " << mul << endl;
    cout << "div is: " << div << endl;

    return 0;
}
