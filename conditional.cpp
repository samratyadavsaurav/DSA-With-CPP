#include<iostream>
using namespace std;
int main() {
 
//   Write a C++ program to check whether a given number is positive, negative, or zero using conditional statements (if, else if, else).
// 👉 Input:
// An integer number entered by the user.

int number;

cout<<"Enter Number:";
cin>>number;

if(number > 0) {
  cout<<"The number is Positive"<<endl;
}

else if(number < 0) {
  cout<<"The number is Negative"<<endl;
}

else {
  cout<<"The number is equal to Zero";
}

  return 0;
}


