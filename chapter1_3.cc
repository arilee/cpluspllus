#include <iostream>
#include <string>

int main()
{
  const std::string hello = "Hello";
  const std::string massage = hello + ", world" + "!";

  std::cout << std::endl;

  return 0;
}
