#include <iostream>

int main()
{
  int sum = 0;
  for(int i=1; i<101; i++){
    sum = sum + i;
  } 
  std::cout << sum << std::endl;
}
