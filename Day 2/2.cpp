#include<iostream>
using namespace std;

void sum(int n1,int n2){
cout<<"Sum is "<<n1+n2<<"\n";
}

void sum(int n1,float n2){
cout<<"Sum is "<<static_cast<float>(n1 + n2)<<"\n";        
}

void sum(float n1,float n2){
cout<<"Sum is "<<n1+n2<<"\n";
}

void sum(float n1,int n2){
cout<<"Sum is "<<static_cast<float>(n1 + n2)<<"\n";
}

int main()
{
  cout<<"Select form Menu "<<"\n";
  cout<<"1 int int"<<"\n";
  cout<<"2 float int"<<"\n";
  cout<<"3 int float"<<"\n";
  cout<<"4 float float"<<"\n";
  int menuOutput;
  cin>>menuOutput;

  switch (menuOutput)
  {
  case 1:
  {
   cout<<"Enter the numbers"<<"\n";
   int n1,n2;
   cin>>n1>>n2;
   sum(n1,n2);
   break;
  }
   case 2:
   {
   cout<<"Enter the numbers"<<"\n";
   float n1;
   int n2;
   cin>>n1>>n2;
   sum(n1,n2);
   break;
  }
   case 3:
  { cout<<"Enter the numbers"<<"\n";
    int n1;
    float n2;
    cin>>n1>>n2;
    sum(n1,n2);
   break;
  }
   case 4:
 { cout<<"Enter the numbers"<<"\n";
   float n1;
   float n2;
   cin>>n1>>n2;
   sum(n1,n2);    
   break;
  }
  default:
  break;
  }
 
  return 0;
}