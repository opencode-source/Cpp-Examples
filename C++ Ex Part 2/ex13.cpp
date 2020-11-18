#include <iostream>

using namespace std;

int main(){

    int number;

    cout << "add a number between 1-20: ";
    cin >> number;

    if(number>=1 && number<=4){
        cout << "bad" << endl;
    }
    if(number>=5 && number<=8){
        cout << "zaief" << endl;
    }
    if(number>=9 && number<=12){
        cout << "motavaset" << endl;
    }
    if(number>=13 && number<=16){
        cout << "khoob" << endl;
    }
    if(number>=17 && number<=20){
        cout << "awli" << endl;
    }
    return 0;
}
