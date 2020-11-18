#include <iostream>

using namespace std;

int main(){

    int N;

    cout << "add N for N*N matrix: ";
    cin >> N;

    int a[N][N], b[N][N];

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << i+1 << ", " << j+1 << ": ";
            cin >> a[i][j];
        }
    }

    cout << "orginal matrix: " << endl;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            b[i][j] = a[j][i];
            cout << a[i][j] << "    ";
        }
        cout << endl;
    }

    cout << "Taranahae is: " << endl;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << b[i][j] << "    ";
        }
        cout << endl;
    }
    return 0;
}
