#include <iostream>
#include "dice.hpp"

int main (int argc, char * argv[])
{
  srand(time(NULL));

  Die d4(4);
  Die d20(20);
  int number = d20.roll(10);
  std::cout << "Result: " << number << ".\n"; 

  return 0;
}
