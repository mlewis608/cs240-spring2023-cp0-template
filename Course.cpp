#include <iostream>
#include <stdlib.h>
using namespace std;

class Course {
   public:
      Course(string name, unsigned int capacity, string instruct) {
         courseName = name;
	 maximumCapacity = capacity;
	 instructor = instruct;
      }

      Course() {
         courseName = "";
         maximumCapacity = 0;
         instructor = "";
      }

      void show() {
         cout << courseName << " (" << maximumCapacity << "): " << instructor << endl;
      }

   private:
      string courseName = "";
      unsigned int maximumCapacity = 0;
      string instructor = "";
};

int main(int argc, char *argv[]) {
   Course one;
   Course *two = new Course("CS 240", 100, "Dracula");
   one.show();
   two->show();
   delete(two);
}
