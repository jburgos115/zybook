#include <string>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
   string inputName;
   int age;
   // Set exception mask for cin stream
   cin.exceptions(ios::failbit);

   cin >> inputName;
   while(inputName != "-1") {
      try{
         cin >> age;
         cout << inputName << " " << (age + 1) << endl;    
      }
      catch(...) { //Note: '...' catches all exceptions
         cin.clear();
         cout << inputName << " " << (0) << endl;
         getline(cin, inputName);
      }
      cin >> inputName;
   }
   
   return 0;
}