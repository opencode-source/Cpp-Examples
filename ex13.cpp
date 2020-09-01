#include <iostream>

using namespace std;

int main(){

    int a, x;

    cout << "a>1 --- 2x+1" << endl;
    cout << "a=1 --- 2x" << endl;
    cout << "a<1 --- 2x-1" << endl << endl;

    cout << "add a, x: "<< endl;
    cin >> a >> x;

    if(a>1){
        cout << (2*x)+1 << endl;
    }
    else if(a==1){
        cout << (2*x) << endl;
    }
    else{
        cout << (2*x)-1 << endl;
    }
    return 0;
}
