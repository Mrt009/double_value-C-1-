#include <iostream> // iostream is the directory to define cout and cin used in line 4,6,7
int main()
{
  std::cout<< "Could you enter the number? : \n"; // to inform the user they need to provide the number
  int x; // initialize the variable x
  std ::cin>> x; // to fetech the data(number) provided by the user
  std ::cout << " Double of the number you provide is " << 2*x << "."; // to provide the outcomes to the user
  return 0; // to localize the program to the inital point 
}