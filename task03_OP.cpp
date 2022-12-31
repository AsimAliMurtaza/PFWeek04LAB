#include <iostream>
using namespace std;

void ifPass(int marks);

main()
{
 while(true)
 {
  int marks;
  cout << "Enter your marks: ";
  cin >> marks;
  ifPass(marks);
 }
}

void ifPass(int marks)
{
  if (marks>50)
  {
  cout << "Congratulations! You have passsed barely." << endl;
  }
  if (marks<50)
  {
  cout << "Congratulations! You have failed miserably." << endl;
  }
  if (marks==50)
  {
  cout << "Wow! You need to improve UwU." << endl;
  }

}
