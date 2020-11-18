#include <iostream>

using namespace std;

int main(){

    int number;

    cout << "how many rows: ";
    cin >> number;

    for(int i=1; i<=number; i++){
        for(int j=1; j<=number+1-i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
