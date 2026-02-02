// What is Operator ?
// An operator is a symbol that perform specific operations on one or more operands.

// What is Operand?
// An operand is a value, variable or expression on which an operator performs an operation.

// Example: a + b 
// Here "+" is an operation and "a" and "b" are operands. 



// OPERATIONS OF NUMBERS
#include<iostream>
using namespace std;
int main() {
  int a;
  cout<<"Enter a :";
  cin>>a;

  int b;
  cout<<"Enter b :";
  cin>>b;

  int sum = a+b;
  int difference = a-b;
  int multiplication = a*b;
  int division = a/b;
  int modulus = a%b;


  // Here,Modulus(%) gives remainder.

  cout<<"The sum is:"<<sum<<endl;
  cout<<"The Differnce is:"<<difference<<endl;
  cout<<"The Multiplication is:"<<multiplication<<endl;
  cout<<"The Division is:"<<division<<endl;
  cout<<"The Modulus is:"<<modulus<<endl;
  


  return 0;
}