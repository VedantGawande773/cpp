#include <iostream>
using namespace std;

inline int calSquare(int a){
int square = a * a;
cout<<"The value of a square is "<<square<<"\n";
}

inline int calCube(int n){
int cube = n * n * n;
cout<<"The value of a square is "<<cube<<"\n";
}

inline int max(int& n1,int& n2){
return (n1 > n2 ? n1 : n2);
}

int main()
{
  calSquare(5);
  calCube(5);
  int ans = max(5,6);
  cout<<"The max number is "<<ans;
  return 0;
}