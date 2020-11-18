#include <iostream>

using namespace std;

int main(){

    int number1, number2;
    int choice;

    cout << "1) sum" << endl;
    cout << "2) sub" << endl;
    cout << "3) mul" << endl;
    cout << "4) div" << endl << endl;
    cin >> choice;

    cout << "add 2 numbers: " << endl;
    cin >> number1 >> number2;

    switch(choice){
            case 1:
                cout << "sum is: " << number1+number2 << endl;
            break;
            case 2:
                cout << "sub is: " << number1-number2 << endl;
            break;
            case 3:
                cout << "mul is: " << number1*number2 << endl;
            break;
            case 4:
                cout << "div is: " << number1/number2 << endl;
            break;

            default:
                cout << "your number is not between 1-4";
    }
    return 0;
}
