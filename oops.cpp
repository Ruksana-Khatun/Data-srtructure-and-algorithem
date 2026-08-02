#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    float cgpa;

public:

    // Setters
    void setName(string nameValue)
    {
        name = nameValue;
    }

    void setCgpa(float cgpaValue)
    {
        cgpa = cgpaValue;
    }

    // Getters
    string getName()
    {
        return name;
    }

    float getCgpa()
    {
        return cgpa;
    }

    void percentage()
    {
        cout << "Percentage = " << cgpa * 10 << "%" << endl;
    }
};

int main()
{
    Student s1;

    s1.setName("Ruksana Khatun");
    s1.setCgpa(8.4);

    cout << "Name : " << s1.getName() << endl;
    cout << "CGPA : " << s1.getCgpa() << endl;

    s1.percentage();

    return 0;
}