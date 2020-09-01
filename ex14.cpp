#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a, b, c;
    int delta;
    int x1, x2;

    cout << "add (a,b,c) in (ax^2 + bx + c): " << endl;
    cin >> a >> b >> c;

    delta = (b*b)-(4*a*c);

    if(delta>0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        cout << "2 answer: " << x1 << ", " << x2 << endl;
    }
    else if(delta == 0){
        x1 = (-b)/(2*a);
        cout << "1 answer: " << x1 << endl;
    }
    else{
        cout << "no answer!" << endl;
    }
    return 0;
}
