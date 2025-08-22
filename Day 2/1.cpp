#include<iostream>
using namespace std;

const float PI = 3.14;

float calCircle(int& r){
 float area = PI * r * r;
 float circumference = 2 * PI * r;
 cout<<"The area and circumference of Circle is "<<area<<" "<<circumference<<"\n";
};

int calSquare(int &side){
 int area = side * side;
 int perimeter = 4 * side;
 cout<<"The area and perimeter of Square is "<<area<<" "<<perimeter<<"\n";
}

int calTriangle(int &l,int& b,int& h){
 int area = 0.5 * b * h;
 int perimeter = l+b+h;
 cout<<"The area and perimeter of Triangle is "<<area<<" "<<perimeter<<"\n";
}

int calRectangle(int& l,int& b){
 int area = l*b;
 int perimeter = 2 * (l+b);
 cout<<"The area and perimeter of Rectangle is "<<area<<" "<<perimeter<<"\n";
}


int main()
{
  cout<<"Select form Menu "<<"\n";
  cout<<"1 Circle"<<"\n";
  cout<<"2 Square"<<"\n";
  cout<<"3 Triangle"<<"\n";
  cout<<"4 Rectangle"<<"\n";
  int menuOutput;
  cin>>menuOutput;

  switch (menuOutput)
  {
  case 1:
  {
   int r;
   cout<<"Enter radius of the circle"<<"\n";
   cin>>r;
   calCircle(r);
   break;
  }

   case 2:
  {  int side;
   cout<<"Enter the side of a square"<<"\n";
   cin>>side;
   calSquare(side);
   break;
  }
   case 3:
  { int l,b,h;
   cout<<"Enter breadth and height of a triangle"<<"\n";
   cin>>l>>b>>h;
   calTriangle(l,b,h);
   break;
  }
   case 4:
 {  int l,b;
   cout<<"Enter length and breadth of a rectangle"<<"\n";
   cin>>l>>b;
   calRectangle(l,b);   
   break;
  }
  default:
  break;
  }

  return 0;
}