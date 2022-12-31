#include <iostream>
using namespace std;

void add(int num1, int num2);
void product(int num1, int num2);
void subtract(int num1, int num2);
void divide(int num1, int num2);

main()
{
 while(true)
 {
  int number1;
  int number2;
  char op;

  cout << "Enter first number: ";
  cin >> number1;
  cout << "Enter second number: ";
  cin >> number2;
  cout << "Choose Operator +, -, *, /: ";
  cin >> op;
  
  if (op == '+')
  {
  add(number1, number2);
  }
  if (op == '-')
  {
  subtract(number1, number2);
  }

  if (op == '*')
  {
  product(number1, number2);
  }
  if (op == '/')
  {
  divide(number1, number2);
  }
 }
}

void add(int num1, int num2)
{
  int sum;
  sum = num1 + num2;
  cout << "Sum is = " << sum << endl;
}

void product(int num1, int num2)
{
  int product;
  product = num1 * num2;
  cout << "Product is = " << product << endl;
}

void subtract(int num1, int num2)
{
  int subtract;
  subtract = num1 - num2;
  cout << "Difference is = " << subtract << endl;
}

void divide(int num1, int num2)
{
  int divide;
  divide = num1 / num2;
  cout << "Answer is = " << divide << endl;
}