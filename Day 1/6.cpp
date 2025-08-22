#include<iostream>
using namespace std;

void swapByValue(int num1,int num2)
{
  int temp = num1;
  num1 = num2;
  num2 = temp;
  cout << "Inside swapValue (after swapping): " << num1 << " " << num2 << "\n";
}

void swapByAdd(int *num1,int *num2)
{
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
  cout << "Inside swapByAdd (after swapping): " << *num1 << " " << *num2 << "\n";
}

int main()
{
   int num1,num2;
   cout<<"Enter two numbers "<<"\n";
   cin>>num1>>num2;
   cout<<"Number entered before swap are "<<num1<<" "<<num2 << "\n";
   swapByValue(num1,num2);
   swapByAdd(&num1,&num2);
   cout<<"Number entered after swap are "<<num1<<" "<<num2 << "\n";
   return 0;
}