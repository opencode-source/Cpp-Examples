#include<iostream>

using namespace std;

int main(){

    int number;

    cout << "how many rows: ";
    cin >> number;
    cout << endl;

    for(int i=1; i<=number; i++){
        for(int j=1; j<=i-1; j++){
            cout << " ";
        }
        for(int k=1; k<=2*(number-i)+1; k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
