#include <iostream>
#include "Triangle.h"
using namespace std;

int main(int argc, const char* argv[]) {
   Triangle triangle1;
   Triangle triangle2;

   double base, height;
   cin >> base;
   cin >> height;
   
   triangle1.SetBase(base);
   triangle1.SetHeight(height);
   
   cin >> base;
   cin >> height;
   
   triangle2.SetBase(base);
   triangle2.SetHeight(height);
   
   cout << "Triangle with larger area:" << endl;

   if(triangle1.GetArea() > triangle2.GetArea())
      triangle1.PrintInfo();
   else
      triangle2.PrintInfo();  
   
   return 0;
}