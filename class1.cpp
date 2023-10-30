#include <iostream>
#include <string>
using namespace std;

class animal
{
private:
    int weight;

public:
    int age;
    string name;

    void sleep()
    {
        cout << "I am sleeping" << endl;
    }
    void eating()
    {
        cout << "I am Eating" << endl;
        ;
    }

    int getWeight()
    {
        return weight;
    }

    void setWeight(int w)
    {
        weight = w;
    }

    //  default constructer
    animal()
    {
        this->weight = 0;
        this->age = 0;
        this->name = "";
        cout << "Hello,I am Constructer" << endl;
    }

    // parameteric constructer
    animal(int age)
    {
        this->age = age;
        cout << "I am Parameteric Constructer" << endl;
    }

    animal(int age, int weight)
    {
        this->age = age;
        this->weight = weight;
        cout << " This is Parametric Constructer 2" << endl;
    }

    animal(int age, int weight, string name)
    {
        this->age = age;
        this->weight = weight;
        this->name = name;
        cout << "Parametric Constructer 3" << endl;
    }

    //  copy Constructer
    animal(animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout << "this is copy Constructer" << endl;
    }

    ~animal()
    {
        cout << "I am inside Destructer" << endl;
    }
};
int main()
{
    // stack allocation
    // animal a1;

    // a1.age = 20;
    // a1.name = "Pawan";
    // a1.setWeight(75);

    // cout << "Age :" << a1.age << endl;
    // cout << "Name : " << a1.name << endl;
    // cout << "Weight :" << a1.getWeight() << " KG" << endl;
    // a1.eating();

    // Dynamic allocation
    // animal *sur = new animal;
    // (*sur).age = 25;
    // (*sur).name = "Nishu";

    // cout << "Age :" << sur->age << endl;
    // cout << "NAme :" << sur->name << endl;
    // sur->eating();
    // sur->sleep();

    animal a;
    a.age  = 5;

    animal *b = new animal(100, 20, "Pawan");

    // animal c = a;
    delete b;

    

    return 0;
}