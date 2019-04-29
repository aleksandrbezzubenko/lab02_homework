#include <hello_world.hpp>
#include <string>

int
main()
{
  std::string name; // объявлена переменная типа string
  std::cout << "enter your name" << std::endl; // вывод строки "enter your name"
  std::cin >> name; // ввод строки в переменную name
  std::cout << std::endl
            << "hello world" << std::endl; // вывод строки "hello world"
}
