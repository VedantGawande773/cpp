#include<iostream>
using namespace std;

bool isPrime(int num){
   if(num == 0){
        return false;
   }

    for(int i=2;i*i<=num;i++){
        if(num%i == 0){
          return false;
        }
    }
    return true;
}

int main()
{
   int num;
   cout<<"Enter the number "<<"\n";
   cin>>num;

   bool Prime = isPrime(num);
   if(Prime){
    cout<<"The number is Prime ";
   }
   else{
    cout<<"The number is not Prime ";
   }

   return 0;
}