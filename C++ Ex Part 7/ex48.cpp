#include <iostream>
#include <stdlib.h>

using namespace std;

sum_matrix(){

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
}

sub_matrix(){
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
            number3[i][j] = number1[i][j] - number2[i][j];
            cout << number3[i][j] << "    ";
        }
        cout << endl;
    }
}

mul_matrix(){

    int row1, col1, col2;

    cout << "add row of first matrix: ";
    cin >> row1;

    cout << "add col of first matrix: ";
    cin >> col1;

    cout << "add col of second matrix: ";
    cin >> col2;

    int a[row1][col1], b[col1][col2], c[row1][col2] = {0};

    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            cout << i+1 << ", " << j+1 << ": ";
            cin >> a[i][j];
        }
    }

    for(int i=0; i<col1; i++){
        for(int j=0; j<col2; j++){
            cout << i+1 << ", " << j+1 << ": ";
            cin >> b[i][j];
        }
    }

    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            for(int k=0; k<col1; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
            cout << c[i][j] << "    ";
        }
        cout << endl;
    }
}

int main(){


    int choice;
    bool flag = true;

    while(flag){

        cout << "choose one of this: " << endl;
        cout << "1) sum of 2 matrix" << endl;
        cout << "2) sub of 2 matrix" << endl;
        cout << "3) mul of 2 matrix" << endl;
        cout << "4) exit" << endl;
        cin >> choice;

        system("CLS");

        switch(choice){
            case 1:
                sum_matrix();
                break;
            case 2:
                sub_matrix();
                break;
            case 3:
                mul_matrix();
                break;
            case 4:
                flag = false;
                break;
            default:
                cout << "your number is not between 1-4" << endl;
        }
    }
    return 0;
}
