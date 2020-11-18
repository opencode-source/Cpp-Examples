#include <iostream>

using namespace std;

int main(){

    int counter = 1;

    while(true){
        if(counter == 20){
            cout << "open code" << endl;
            break;
        }
        else if(counter == 3 || counter == 9 || counter == 11){
            counter++;
            continue;
        }
        else{
            cout << counter << endl;
        }

        counter++;
    }
    return 0;
}
