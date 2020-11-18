#include <iostream>

using namespace std;

int main(){

    int a, b;
    int sum =0;

    cout << "add a, b to show sum from a to b" << endl;
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        sum = sum + i;
    }

    cout << "sum is: " << sum << endl;
    return 0;
}
