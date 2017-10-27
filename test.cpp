#include <type_traits>
#include <tuple>
#include <iostream>

template < class Tuple >
auto test(Tuple&&) -> std::enable_if_t<std::is_integral<std::tuple_element_t<0,std::decay_t<Tuple>>>::value>
{
  std::cout << "ok" << std::endl;
}

int main(){
  test(std::make_tuple(1,2,3,4));
}