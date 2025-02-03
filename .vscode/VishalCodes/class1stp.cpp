#include<iostream>
#include <list>

using namespace std;
class fruits 
{
    private:
    string name; 
    int code;
   
    public:
    fruits( string name , int code )
    {
        this->name = name;
        this->code = code;
    }
    // method
    void printData()
    {
        cout << name << " " << code << endl;
    } 
};
int main(void)
{
    list<int>l1;

    fruits f1("Mango" , 4);

    f1.printData();
    
    return 0;
}