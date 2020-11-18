#include <iostream>

using namespace std;

int main(){

    int number[10];

    cout << "add 10 numbers: " << endl;

    for(int i=0; i<10; i++){
        cin >> number[i];
    }

    for(int i=9; i>=0; i--){
        cout << number[i] << endl;
    }

    return 0;
}
