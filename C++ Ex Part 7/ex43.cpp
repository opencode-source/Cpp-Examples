#include <iostream>

using namespace std;

int main(){

    int number[20] = {4,3,1,21,5,9,1,31,2,6,10,11,52,13,33,2,7,2,4,12};
    int temp;

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
    return 0;
}
