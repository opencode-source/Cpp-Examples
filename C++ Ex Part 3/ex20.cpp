#include <iostream>

using namespace std;

int main(){

    float number;
    float sum=0, avg;
    int counter=0;

    cout << "add a number for sum and avg exit with (-1): " << endl;

    while(number != -1){
        sum = sum + number;
        counter++;

        cin >> number;
    }

    avg = sum/(counter-1);
    cout << endl << "sum is: " << sum << " avg is: " << avg << endl;
    return 0;
}
