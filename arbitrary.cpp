#include <iostream>
using namespace std;
int main (){
    int safe =100;
    int target =50;
    int *ptr;
    cout << "Before change:" << endl;
    cout << "safe = "<< safe << endl;
    cout << "target = "<< target << endl;
    cout << "\nAfter arbitrary write:" << endl;
    cout << "safe =" << safe << endl;
    cout << "target =" << target << endl;
    return 0;
}

