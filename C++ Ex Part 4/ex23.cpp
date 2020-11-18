#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int number;
    int remainer, new_number=0, i=0;

    cout << "convert number from base 3 to 7" << endl;
    cout << "add your number: ";
    cin >> number;

    while(number>0){
        remainer = number%10;
        new_number = (remainer*pow(3,i)) + new_number;
        number = number/10;
        i++;
    }

    number = new_number;
    new_number = 0;
    i=1;

    while(number>0){
        remainer = number%7;
        new_number = (remainer*i)+new_number;
        number = number/7;
        i=i*10;
    }

    cout << "converted number is: " <<  new_number << endl;
    return 0;
}
