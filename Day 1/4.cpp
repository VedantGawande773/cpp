#include<iostream>
using namespace std;

int main()
{
   char ch[50];
   cout<<"Enter String: ";
   cin.getline(ch,100);

   int size = 0;
   while (ch[size] != '\0')
    {
        size++;
    }

    cout << "String in reverse order: ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << ch[i];
    }
   
   return 0;
}