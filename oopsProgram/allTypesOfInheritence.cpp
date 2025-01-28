// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Animal
{
public:
    string name;

protected:
    void printHello()
    {
        cout << "hello world" << endl;
    }
};
class Dog : public Animal
{
public:
    string voice;

    Dog(string name, string voice)
    {
        this->name = name;
        this->voice = voice;
    }

    void print()
    {
        cout << name << " " << voice << endl;
    }
    void printGreeting()
    {
      printHello();
    }
};
int main(void)
{
    Dog d1("pitbull", "bark");
    d1.print();
    d1.printGreeting();
    return 0;
}
