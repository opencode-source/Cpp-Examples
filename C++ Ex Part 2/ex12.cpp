#include <iostream>

using namespace std;

int main(){

    char c;

    cout << "add a char: ";
    cin >> c;

    if(c == 'y' || c == 'Y'){
        cout << "yes" << endl;
    }
    else if(c == 'n' || c == 'N'){
        cout << "no" << endl;
    }
    else{
        cout << "no valid key" << endl;
    }
    return 0;
}
