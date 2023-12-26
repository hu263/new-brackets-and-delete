#include <stdlib.h>
#include <iostream>

using namespace std;

class inner
{
public:
  inner() { cout << "Constructing" << endl; }
  ~inner() { cout << "Destructing" << endl; }
};

int main(int argc, char **argv) {
  inner *p = new inner[2];

  delete p;
  
  return 0;
}