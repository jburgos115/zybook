#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Write method to create and output all permutations of the list of names.
void AllPermutations(const vector<string> &permList, const vector<string> &nameList) {
   if(nameList.empty()){
      for(size_t i = 0; i < permList.size(); i++){
         cout << permList.at(i) << " ";
      }
      cout << endl;
   }
   else {
      for(size_t i = 0; i < nameList.size(); i++){
         vector<string> newPerm = permList;
         newPerm.push_back(nameList.at(i));
         vector<string> newName = nameList;
         newName.erase(newName.begin() + i);
         AllPermutations(newPerm, newName);
      }
   }
}

int main(int argc, char* argv[]) {
   vector<string> nameList;
   vector<string> permList;
   string name;

   cin >> name;
   while(name != "-1"){
      nameList.push_back(name);
      cin >> name;
   }
   
   AllPermutations(permList, nameList);
   
   return 0;
}