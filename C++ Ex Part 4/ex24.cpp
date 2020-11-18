#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int number;
    int remainer, new_number=0, i=0;
    int x, y;

    cout << "add x, y to convert from base x to y: " << endl;
    cin >> x >> y;

    cout << endl << "convert number from base " << x << " to " << y << endl;
    cout << "add your number: ";
    cin >> number;

    while(number>0){
        remainer = number%10;
        new_number = (remainer*pow(x,i)) + new_number;
        number = number/10;
        i++;
    }

    number = new_number;
    new_number = 0;
    i=1;

    while(number>0){
        remainer = number%y;
        new_number = (remainer*i)+new_number;
        number = number/y;
        i=i*10;
    }

    cout << "converted number is: " <<  new_number << endl;
    return 0;
}
