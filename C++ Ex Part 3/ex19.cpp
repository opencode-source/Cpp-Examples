#include <iostream>

using namespace std;

int main(){

    int number1 = 0, number2 = 1, number3;
    int element;
    int counter=2;

    cout << "how many elements: ";
    cin >> element;

    cout << endl << "fibonacci in " << element << " element: " << endl;
    cout << number1 << " " << number2 << " ";

    while(counter < element){
        number3 = number1+number2;
        cout << number3 << " ";

        number1 = number2;
        number2 = number3;

        counter++;
    }
    return 0;
}
