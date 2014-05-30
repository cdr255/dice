#ifndef DICE_HPP
#define DICE_HPP

#include <iostream>
#include <cstdlib>

class Die {
  int max;
public:
  int roll(int);
  Die(int);
};

Die::Die(int num_of_sides) {
  max = num_of_sides;
}

int Die::roll(int times) 
{
  int min = 1;
  int out = 0;
  
  for(;times>0;times--)
    {
      int result = min + (rand() % (int)(max - min + 1));
      out = out + result;
      std::cout << result << ", \n";
    }

  return out;
}


#endif
