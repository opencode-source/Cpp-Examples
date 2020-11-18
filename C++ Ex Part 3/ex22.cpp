#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int number;
    int remainer, new_number=0, i=0;

    cout << "convert number from base 5 to 10" << endl;
    cout << "add your number: ";
    cin >> number;

    while(number>0){
        remainer = number%10;
        new_number = (remainer*pow(5,i)) + new_number;
        number = number/10;
        i++;
    }

    cout << "converted number is: " <<  new_number << endl;
    return 0;
}
