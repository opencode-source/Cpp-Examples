#include <iostream>

using namespace std;

int main(){

    int number;

    cout << "how many rows: ";
    cin >> number;

    for(int i=1; i<=number; i++){
        for(int j=1; j<=number; j++){
            if(j >= i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
