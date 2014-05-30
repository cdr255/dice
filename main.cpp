#include <iostream>
#include "dice.hpp"

int main (int argc, char * argv[])
{
  srand(time(NULL));
  int number = d20.roll(10);
  std::cout << "Result: " << number << ".\n"; 

  return 0;
}
