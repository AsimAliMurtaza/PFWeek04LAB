#include <iostream>
using namespace std;

void calculateBill(string day, int amount);
main()
{
 while(true)
 {
  string day;
  int amount;

  cout << "Enter day: ";
  cin >> day;
  cout << "Enter amount: ";
  cin >> amount;

  calculateBill(day, amount);
 }
}

void calculateBill(string day, int amount)
{
  int calculateBill = amount * 0.9;
  float calculateBill2 = amount * 0.95;
  if (day == "Sunday")
  {
  cout << "Total payable amount is: " << calculateBill << endl;
  }
  if (day != "Sunday")
  {
  cout << "Total payable amount is: " << calculateBill2 << endl;
  }
}