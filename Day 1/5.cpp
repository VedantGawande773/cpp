#include<iostream>
using namespace std;

int main()
{

   int sub1,sub2,sub3,sub4,sub5;
   cout<<"Enters the marks for the subjects"<<"\n";
   cin>>sub1>>sub2>>sub3>>sub4>>sub5;

   int sum = sub1 + sub2 + sub3 + sub4 + sub5;
   int avg = sum/5;

   cout<<"The sum is "<<sum<<" and the average is "<<avg;
   return 0;
}