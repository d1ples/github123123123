#include <iostream>
 
void printCString(const char* str)
{
  // Пока мы не встретили нулевой терминатор
  while (*str != '\0')
  {

    std::cout << *str;
 
    ++str;
  }
}
 
int main()
{
  printCString("Hello world!");
 
  std::cout << '\n';
 
  return 0;
}
