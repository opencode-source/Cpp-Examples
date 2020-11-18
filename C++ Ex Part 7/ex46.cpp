#include <iostream>

using namespace std;

int main(){

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
    return 0;
}
