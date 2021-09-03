#include <iostream>
#include <string>

using namespace std;

int main()
{
    /* Get input from the console */
    string yourName;
    string favoriteFood;

    cout << "Hello! What's your name?" << endl;
    cin >> yourName;
    cout << "What's your favorite food?" << endl;
    cin >> favoriteFood;
    
    /* Use the input to print the message */
    cout << "Nice to meet you " << yourName << ", "
    << favoriteFood << " sounds yummy!" << endl;
    return 0;
}