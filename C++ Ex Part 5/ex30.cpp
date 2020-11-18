#include <iostream>

using namespace std;

int main(){

    int number;
    int fact = 1;

    cout << "add your number: ";
    cin >> number;

    for(int i=1; i<=number; i++){
        fact = fact * i;
    }

    cout << "fact is: " << fact << endl;
    return 0;
}
