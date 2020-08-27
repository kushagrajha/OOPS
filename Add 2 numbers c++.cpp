#include <iostream>
using namespace std;
class Add
{
    public:
    int num1, num2;
    void ask(){
       cout<<"Enter first number: ";
       cin>>num1;
       cout<<"Enter second number: ";
       cin>>num2;
    }
    int sum(int n1, int n2){
       return n1+n2;
    }
       void show(){
       cout<<sum(num1, num2);
    }
};
int main(){
  
   Add obj;
   obj.ask();
   obj.show();
   return 0;
}