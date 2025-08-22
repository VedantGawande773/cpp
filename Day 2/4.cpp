#include<iostream>
using namespace std;

int main()
{
   int sub;
   cout<<"Enter the number of Subjects for student "<<"\n";
   cin>>sub;
   int sum = 0;

   cout<<"Enter the marks in subjects: ";
   int arr[sub];
   for(int i=0;i<sub;i++){
        cin>>arr[i];
        sum += arr[i];
   }

   float average = float(sum)/sub;
   cout<<"The sum and averga is "<<sum<<" "<<average;

}