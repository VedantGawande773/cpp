#include<iostream>
using namespace std;

int main()
{
  struct Student
  {
    int rollNo;
    string name;
    int totalMarks;
  };

  int maxMarks = 0;
  
  Student s[5];
  for(int i=0;i<5;i++){
   cout<<"Enter the Roll No, Name and Total Marks of a Student: ";
   cin>>s[i].rollNo>>s[i].name>>s[i].totalMarks;
   if(s[i].totalMarks > maxMarks){
        maxMarks = s[i].totalMarks;
   }
  }

  for(int i=0;i<5;i++){
   cout<<s[i].rollNo<<" "<<s[i].name<<" "<<s[i].totalMarks<<"\n";
  }

  cout<<"The student with the max marks is "<<maxMarks<<"\n";

  return 0;
}