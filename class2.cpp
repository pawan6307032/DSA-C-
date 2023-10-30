#include <iostream>
using namespace std;

class animal{
    public:
        int age;
        int weight;

        void eat()
        {
            cout << "Eating" << endl;
        }
};

class Dog : public animal{

};

int main()
{
    Dog d1;
    d1.eat();
    return 0;
}