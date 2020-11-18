#include <iostream>

using namespace std;

int main(){

    int number[10];
    int max_number, min_number;
    int min_holder, max_holder;

    cout << "add 10 numbers: " << endl;

    for(int i=0; i<10; i++){
        cin >> number[i];

        if(number[i] > max_number){
            max_number = number[i];
            max_holder = i;
        }
        if(number[i] < min_number){
            min_number = number[i];
            min_holder = i;
        }
    }

    cout << "your max number is: " << max_number << " and is in " << max_holder + 1 << " place" << endl;
    cout << "your min number is: " << min_number << " and is in " << min_holder + 1 << " place" << endl;
    return 0;
}

