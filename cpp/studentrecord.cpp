#include <iostream>
#include <string>
using namespace std;

class Student 
{
private:
    string name;
    int rollNumber;
    int marks;
    int grade;
public:
    Student(string n = "", int roll = 0, int m =0) 
    {
        name = n;
        rollNumber = roll;
        marks = m;
    }

    void setName(string n) 
    {
        name = n;
    }

    void setRollNumber(int roll) 
    {
        rollNumber = roll;
    }

    string getName() const 
    {
        return name;
    }

    int getRollNumber() const 
    {
        return rollNumber;
    }

    int getmarks(int m) const
    {
        return m;
    }

    int getgrade() const
    {
        return grade;
    }
};

int main() 
{
    Student b("bg",1,100);
    return 0;
}
