#include <iostream>

using namespace std;

// TODO: Write recursive PrintNumPattern() function
void PrintNumPattern(int num_1, int num_2){
   if(num_1 <= 0)
      cout << num_1 << " ";
   else{
      cout << num_1 << " ";
      PrintNumPattern(num_1 - num_2, num_2);
      cout << num_1 << " ";
   }
}

int main(int argc, char* argv[]) {
   int num1;
   int num2;

   cin >> num1;
   cin >> num2;
   PrintNumPattern(num1, num2);
   
   return 0;
}