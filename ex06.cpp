#include <iostream>

using namespace std;

int main()
{
    float length, width, side, radius;
    float re_area, re_perimeter, sq_area, sq_perimeter, ci_area, ci_perimeter;

    cout << "plz enter" << endl;
    cout << "length,width rectangular: ";
    cin >> length >> width;

    cout << endl << "side square: ";
    cin >> side;

    cout << endl << "radius circle: ";
    cin >> radius;

    re_area = length*width;
    re_perimeter = (length+width)*2;

    sq_area = side*side;
    sq_perimeter = side*4;

    ci_area = radius*radius*3.14;
    ci_perimeter = radius*2*3.14;

    cout << "area of -rectangular is " << re_area << " -square is " << sq_area << " -circle is " << ci_area << endl;
    cout << "perimeter of -rectangular is " << re_perimeter << " -square is " << sq_perimeter << " -circle is " << ci_perimeter << endl;
    return 0;
}
