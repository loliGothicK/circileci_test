#include <type_traits>
#include <iostream>

template < class T >
auto test(T&&) -> std::enable_if_t<std::is_integral<std::decay_t<T>>::value>
{
  std::cout << "ok" << std::endl;
}

int main(){
  test();
}