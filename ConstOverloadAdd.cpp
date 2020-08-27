#include<iostream>
using namespace std;

class Test 
{
   float c;
public:

   Test() 
    {
       cout << "Sum is:";
    }

   Test(float a, float b) {
        c = a + b;
   }

   void display() 
   {
       cout << c;
   }
};

int main() 
{
    float a, b;

    cout << "Enter two numbers:";
    cin >> a>>b;

    Test t;
    Test tt(a, b);
    tt.display();

    return 0;
}