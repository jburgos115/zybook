#ifndef ARTWORKH
#define ARTWORKH

#include "Artist.h"
#include <string>
using namespace std;

class Artwork{
   public:
      Artwork();

      Artwork(string title, int yearCreated, Artist artist);

      string GetTitle();

      int GetYearCreated();

      void PrintInfo();
   
   private:
      string title;
      int yearCreated;
      Artist artist;

};

#endif