#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
   
   int arraySize = 0;
   cin >> arraySize;
   string words[arraySize];
   int wordFreq[arraySize];
   
   for(int i = 0; i < arraySize; i++){
      cin >> words[i];
   }
   
   for(int i = 0; i < arraySize; i++){
      //string word = words[i];
      int count = 0;
      for(int j = 0; j < arraySize; j++){
         if(words[i] == words[j])
            count++;
      }
      wordFreq[i] = count;
   }
   
   for(int i = 0; i < arraySize; i++){
      cout << words[i] << " - " << wordFreq[i] << endl;
   }
   return 0;
}
