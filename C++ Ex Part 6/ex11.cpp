#include <iostream>

using namespace std;

int main(){

    int number;
    bool flag = true;

    cout << "add your number: ";
    cin >> number;

    for(int i=2; i<number; i++){
        if(number%i == 0){
            cout << "your number is not prime" << endl;
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "your number is prime" << endl;
    }
    return 0;
}
