#include<iostream>
using namespace std;

int main()
{
   int BasicSal;
   cout<<"Enter the Basic Salary: ";
   cin>>BasicSal;
   cout<<BasicSal<<"\n";

   int HRA = BasicSal * 15/100;
   cout<<HRA<<"\n";

   int DA = BasicSal * 30/100;
   cout<<DA<<"\n";

   int GrossSal = BasicSal + HRA + DA;
   cout<<GrossSal<<"\n";

   float PF = GrossSal * 12.5/100;
   cout<<PF<<"\n";

   float NetSal = GrossSal - PF;
   cout<<"The Net Salary of an employee is "<<NetSal<<"\n";

   return 0;
}