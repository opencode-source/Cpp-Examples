#include <iostream>

using namespace std;

int main(){

    int number;
    int remainer, new_number=0;

    cout << "add your number: ";
    cin >> number;

    while(number>0){
        remainer = number%10;
        new_number = (new_number*10) + remainer;
        number = number/10;
    }

    cout << "revers number is: " << new_number << endl;

    return 0;
}
