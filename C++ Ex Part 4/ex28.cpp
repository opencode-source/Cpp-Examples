#include <iostream>

using namespace std;

int main(){

    int a, b;

    cout << "add a, b to show odd number from a to b" << endl;
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        if(i%2 != 0){
            cout << i << endl;
        }
    }
    return 0;
}
