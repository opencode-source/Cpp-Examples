#include <iostream>

using namespace std;

int main(){

    int number[10];
    int max_number, min_number;
    int max_counter=0, min_counter=0;

    cout << "add 10 numbers: " << endl;

    for(int i=0; i<10; i++){
        cin >> number[i];

        if(number[i] > max_number){
            max_number = number[i];
        }
        if(number[i] < min_number){
            min_number = number[i];
        }
    }

    for(int i=0; i<10; i++){
        if(number[i] == max_number){
            max_counter++;
        }
        if(number[i] == min_number){
            min_counter++;
        }
    }

    cout << "your max number is: " << max_number << " and you have " << max_counter << " of them " << endl;
    cout << "your min number is: " << min_number << " and you have " << min_counter << " of them " << endl;
    return 0;
}
