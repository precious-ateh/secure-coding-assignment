#include <iostream>
using namespace std;
int main () {
    cout << "==== UNSAFE PROGRAM =====" << endl;
    char name1[5];
    int safe1 = 100;
    cout << "Enter your name (unsafe): ";
    cin >> name1;
    cout << "You entered: " << name1 << endl;
    cout << "Safe value = " << safe1 << endl;
    cout << "\n=== Safe Program === " << endl;ss
    char name2[5];
    int safe2 = 100;
    cout <<"Enter your name (safe): ";
    cin.getline(name2, 5);
    cout << " You entered: " << name2 << endl;
    cout << "Safe value = " << safe2 << endl;
    return 0;
}
