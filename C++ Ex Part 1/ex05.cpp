#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "add a 2 digit number: ";
    cin >> number;

    int first_digit, second_digit;
    first_digit = number/10;
    second_digit = number%10;

    cout << "revers number is: " << second_digit << first_digit << endl;
    return 0;
}
