#include <iostream>
 
// Используем параметры-ссылки, чтобы
// мы могли изменять значения переданных аргументов
void swap(int& a, int& b)
{
  // Временно сохраняем значение a
  int temp{ a };
 
  // Помещаем значение b в a
  a = b;
  // Помещаем предыдущее значение a в b
  b = temp;
}
 
int main()
{
  int a{ 6 };
  int b{ 8 };
  swap(a, b);
 
  if (a == 8 && b == 6)
    std::cout << "It works!\n";
  else
    std::cout << "It's broken!\n";
 
  return 0;
}
