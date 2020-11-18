#include <iostream>

using namespace std;

int main(){

    int number;
    int remainer, new_number=0, i=1;

    cout << "convert number from base 10 to 4" << endl;
    cout << "add your number: ";
    cin >> number;

    while(number>0){
        remainer = number%4;
        new_number = (remainer*i)+new_number;
        number = number/4;
        i=i*10;
    }

    cout << "convert number is: " << new_number << endl;
    return 0;
}
