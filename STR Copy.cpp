#include <iostream>
#include <cstring>

using namespace std;
int main() 
{
   char str1[100] = "String";
   char str2[100];
   strcpy(str2,str1);
   cout<<"The contents of str2 are: "<<str2;  
   return 0;
}