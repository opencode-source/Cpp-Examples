#include <iostream>

using namespace std;

int main()
{
    char letter;
    string sentence;
    int counter = 0;

    cout << "add your sentence: " << endl;

    while(letter != '.'){
        letter = cin.get();
        sentence = sentence + letter;
        counter++;
    }

    cout << "sentence is: " << endl << sentence << endl;
    cout << counter << endl;
    return 0;
}
