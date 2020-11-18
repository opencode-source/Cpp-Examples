#include <iostream>

using namespace std;

int main(){

    int number;
    int max_number=0, min_number=9999;
    bool flag = true;

    cout << "add your number exit with(-1): " << endl;

    while(flag){
        cin >> number;

        if(number == -1){
            flag = false;
        }
        else{
            if(number>max_number){
                max_number = number;
            }
            if(number<min_number){
                min_number=number;
            }
        }
    }

    cout << "max is: " << max_number << " min is: " << min_number << endl;
    return 0;
}
