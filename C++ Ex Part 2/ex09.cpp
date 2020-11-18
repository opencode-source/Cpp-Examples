#include <iostream>

using namespace std;

int main(){

    float number1, number2;

    cout << "add 2 number: " << endl;
    cin >> number1 >> number2;

    if(number1 < number2){
        cout << "small number is: " << number1 << endl;
    }
    else{
        cout << "small number is: " << number2 << endl;
    }
    return 0;
}
