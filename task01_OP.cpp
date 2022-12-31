#include <iostream>
using namespace std;

void isEligible(int age);

main()
{
 while(true)
 {
  int age;
  cout << "Enter age: ";
  cin >> age;
  isEligible(age);
 }
}

void isEligible(int age)
{
  if (age >= 18)
  {
  cout << "Person is eligible for voting" << isEligible << endl;
  }
}