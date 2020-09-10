#include <iostream>
using namespace std;

class YoungOne 
{
    public:
    void Younger() 
    {
        cout << "He is younger than me!" << endl;
    }
};
class nameOfYoungOne : public YoungOne 
{
 
   public:
    void Name() 
    {
        cout << "Name of the younger one is Max !!" << endl;
    }
};

int main() 
{
    YoungOne YoungOne1;
    nameOfYoungOne nameOfYoungOne1;

    YoungOne1.Younger();

    nameOfYoungOne1.Name();

    return 0;
}