#include <iostream>
using namespace std;

void ifGreater(int number1, int number2);

main()
{
 while(true)
 {
  int num1;
  int num2;
  
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;

  ifGreater(num1, num2);
 }
}

void ifGreater(int number1, int number2)
{
  if (number1>number2)
  {
  cout << "Greater number is: " << number1 << endl;
  }
  if (number2>number1)
  {
  cout << "Greater number is: " << number2 << endl;
  }
}