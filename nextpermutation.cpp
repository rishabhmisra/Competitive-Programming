#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
using namespace std;
int main () {
  char a[] = {'a','b','c'};

  sort (a,a+3);

  std::cout << "The 3! possible permutations with 3 elements:\n";
  do {
   	cout << a[0] << ' ' << a[1] << ' ' << a[2] << '\n';
  } while ( next_permutation(a,a+3) );

  cout << "After loop: " << a[0] << ' ' << a[1] << ' ' << a[2] << '\n';

  return 0;
}
