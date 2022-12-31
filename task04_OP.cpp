#include <iostream>
using namespace std;

void isEven(int num);
void isOdd(int num);

main()
{
  while(true)
 {
  int num;
  cout << "Enter number: ";
  cin >> num;
  isEven(num);
  isOdd(num);
 }
}

void isEven(int num)
{
  int isEven;
  isEven = num%2;
  if (isEven == 0)
  {
  cout << "Number is even " << endl;
  } 
}

void isOdd(int num)
{
  int isOdd;
  isOdd = num%2;
  if (isOdd != 0)
  {
  cout << "Number is odd " << endl;
  } 
}