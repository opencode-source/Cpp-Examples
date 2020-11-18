#include <iostream>

using namespace std;

int main()
{
    float number1, number2, number3;
    float result;

    cout << "add 3 numbers: " << endl;
    cin >> number1 >> number2 >> number3;

    result = (number1+number2+number3)/3;
    cout << "avg of 3 numbers is: " << result << endl;
    return 0;
}
