#include <iostream>
using namespace std;
int main(){
   int safe =100;
   int userInput;
   cout << "Before:\n";
   cout <<  "safe = " <<safe << endl;
   cout <<"\nEnter a number between 0 and 200:";
   cin>> userInput;
   if (userInput >=0 && userInput <=200) {
        safe = userInput;
   }
    else {
        cout <<"Invalid input! safe value will not change." << endl;
    }
   cout << "\nAfter:\n";
   cout << "safe = " << safe << endl;
   return 0;

   }


