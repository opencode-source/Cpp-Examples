#include <iostream>

using namespace std;

int main(){

    int number[20] = {4,3,1,21,5,9,1,31,2,6,10,11,52,13,33,2,7,2,4,12};
    int temp, num;
    int lw=1, mx=20, md;

    cout << "add your number for search: ";
    cin >> num;

    for(int i=0; i<20-1; i++){
        for(int j=0; j<20-i-1; j++){
            if(number[j] > number[j+1]){
                temp = number[j+1];
                number[j+1] = number[j];
                number[j] = temp;
            }
        }
    }

    cout << "sorted array: " << endl;

    for(int i=0; i<20; i++){
        cout << number[i] << endl;
    }

    while(lw<mx){
        md = (lw+mx)/2;
        if(num < number[md]){
            mx = md - 1;
        }
        else if(num > number[md]){
            lw = md + 1;
        }
        else if(num == number[md]){
            lw, mx = md;
            cout << "your number is found in " << md + 1 << " posision" << endl;
        }
    }

    return 0;
}
