// // Program to print sum of 10 numbers

#include<iostream>
using namespace std;
int main(){
  int sum = 0;
  int num;
 
  for(int i=1;i<=10;i++){
    cin>>num;
     sum = sum+num;
   
  }

  cout<<"The final result is :"<<sum;

  return 0;
}


// sum of first 10 even numbers

#include<iostream>
using namespace std;
int main() {
  int sum = 0;
  for(int i=1;i<=10;i++){
    sum = sum + (2*i);
  }

  cout<<"The final result is :"<<sum;

  return 0;
}

// sum of even numbers between 20 and 40


#include<iostream>
using namespace std;
int main () {
  int sum = 0;
  for(int i=20;i<=40;i++){
    if(i%2==0){
      sum = sum + i;
    }
  }

  cout<<"The final result is:"<<sum;
}