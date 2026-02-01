//  What is Variable?
// Variable is simply a name given to a memory location where we store data that can change while the program runs.

#include<iostream>
using namespace std;
int main () {
  int a;
  // Here, int is a data types (integer) and "a" is Variable

  cout<<"Enter a :";
  cin>>a;

  int b;
  cout<<"Enter b :";
  cin>>b;

   cout << "The Value of a and b is: " << a << " " << b;

  return 0;
}