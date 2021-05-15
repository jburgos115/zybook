#include "Plant.h"
#include "Flower.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Define a PrintVector function that prints a vector of plant (or flower) object pointers
void PrintVector(vector<Plant*> garden){
   for (size_t i = 0; i < garden.size(); ++i) {
      garden.at(i)->PrintInfo();
      cout << endl;
   }
}

int main(int argc, char* argv[]) {
   // TODO: Declare a vector called myGarden that can hold object of type plant pointer
   vector<Plant*> myGarden;

   // TODO: Declare variables - plantName, plantCost, flowerName, flowerCost,
   //       colorOfFlowers, isAnnual
   string input;
   string plantName, flowerName, colorOfFlowers, isAnn;
   int plantCost, flowerCost;
   bool isAnnual;
   Plant* plant;
   Flower* flower;


   cin >> input;

   while(input != "-1") {
   // TODO: Check if input is a plant or flower
   //       Store as a plant object or flower object
   //       Add to the vector myGarden
      if(input == "plant"){
         cin >> plantName;
         cin >> plantCost;
         
         plant = new Plant;
         plant->SetPlantName(plantName);
         plant->SetPlantCost(plantCost);
         myGarden.push_back(plant);
      }
      else{
         cin >> flowerName;
         cin >> flowerCost;
         cin >> isAnn;
         isAnnual = (isAnn == "true");
         cin >> colorOfFlowers;
         
         flower = new Flower;
         flower->SetPlantName(flowerName);
         flower->SetPlantCost(flowerCost);
         flower->SetPlantType(isAnnual);
         flower->SetColorOfFlowers(colorOfFlowers);
         myGarden.push_back(flower);
      }
      
      cin >> input;
   }

   // TODO: Call the method PrintVector to print myGarden
   PrintVector(myGarden);

   for (size_t i = 0; i < myGarden.size(); ++i) {
      delete myGarden.at(i);
   }
   
   return 0;
}