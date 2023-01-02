#include <iostream>
using namespace std;

void statement(int number1, int number2);

main() 
{
 while(true)
 {
  int number1;
  int number2;

  cout << "Enter number1: ";
  cin >>number1;
  cout <<"Enter number2: ";
  cin >>number2;

  statement(number1, number2);
  }
}

void statement(int number1, int number2)
{ 
  if (number1 == number2)
  {
    cout <<"Statement is true"<<endl;
  }

  if (number1 != number2)
  {
    cout <<"Statement is false"<<endl;
  }
}