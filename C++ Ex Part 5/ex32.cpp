#include <iostream>

using namespace std;

int main(){

    int number;
    float new_number, sum = 0.0, fact = 1.0;

    cout << "add your number: ";
    cin >> number;

    for(int i=1; i<=number; i++){
        fact = fact * i;
        new_number = i/fact;
        sum = sum + new_number;
    }

    cout << "your number: " << number << endl;
    cout << "answer is: " << sum << endl;
    return 0;
}
