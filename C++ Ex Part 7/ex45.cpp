#include <iostream>

using namespace std;

int main(){

    int row, col;

    cout << "enter row and col" << endl;
    cin >> row >> col;

    int number1[row][col], number2[row][col], number3[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << i+1 << ", " << j+1 << ": ";
            cin >> number1[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << i+1 << ", " << j+1 << ": ";
            cin >> number2[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            number3[i][j] = number1[i][j] + number2[i][j];
            cout << number3[i][j] << "    ";
        }
        cout << endl;
    }
    return 0;
}
