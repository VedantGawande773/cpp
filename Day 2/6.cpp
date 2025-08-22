#include<iostream>
using namespace std;

void accept(int *arr,int n){
for(int i=0;i<n;i++){
  cout<<"Enter the element "<<i + 1<<" : ";
  cin>>arr[i];
}
}

void display(int *arr,int n){
cout<<"The elements are ";
for(int i=0;i<n;i++){
 cout<<arr[i]<<" ";
}
}

void findMinMax(int *arr,int n, int &maxVal, int &minVal){
maxVal = minVal = arr[0];
for(int i=0;i<n;i++){
if(arr[i] > maxVal) maxVal = arr[i];
if(arr[i] < minVal) minVal = arr[i];
}
}

int searchVal(int *arr,int n,int target){
for(int i=0;i<n;i++){
 if(arr[i] == target) return i;
} 
return -1;    
}

void findEvenOdd(int *arr,int n, int &even,int &odd){
 even = odd = 0;
 for(int i=0;i<n;i++){
  if(arr[i] % 2 ==  0) even++;
  else odd++;
 }
}

int main()
{
  int n;
  cout<<"Enter size of the array: ";
  cin>>n;

  int *arr = new int[n];

  accept(arr,n);
  display(arr,n);

  int maxVal,minVal;
  findMinMax(arr,n,maxVal,minVal);
  cout <<"\n" << "Maximum = " << maxVal << ", Minimum = " << minVal << endl;

  int target;
  cout<<"Enter value to search in an array: ";
  cin>>target;
  int ans = searchVal(arr,n,target);
  if(ans != -1){
  cout<<"The target found at postion "<<ans + 1;
  }
  else{
  cout<<"The target not found ";
  }

  int even,odd;
  findEvenOdd(arr,n,even,odd);
  cout <<"\n"<< "Even count = " << even << ", Odd count = " << odd << endl;

  return 0;
}