#include <iostream>
#include <string>
using namespace std;

// Base class
class Student
{
protected:
    string name;
    int roll;
    int ID;

public:
    // Constructor for Student
    Student(string name, int roll, int ID)
    {
        this->name = name;
        this->roll = roll;
        this->ID = ID;
    }

    void printBaseData()
    {
        cout << "Name: " << name << ", Roll: " << roll << ", ID: " << ID << endl;
    }
};

// Derived class
class SpecialStudent : public Student
{
private:
    string grade;

public:
    // Constructor for SpecialStudent
    SpecialStudent(string name, int roll, int ID, string grade)
        : Student(name, roll, ID) // Calling base class constructor
    {
        this->grade = grade;
    }

    void printData()
    {
        // Print base class and derived class data
        printBaseData();
        cout << "Grade of student: " << grade << endl;
    }
};

int main()
{
    // Create a SpecialStudent object
    SpecialStudent s1("Faisal", 101, 12345, "A");

    // Display details of the SpecialStudent
    s1.printData();

    return 0;
}
