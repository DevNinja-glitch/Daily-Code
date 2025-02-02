#include <iostream>
using namespace std;
class Student
{
private:
    int age;

public:
    string name;
    float *gradePtr;
    Student(string name, int age, float grade)
    {
        this->name = name;
        this->age = age;
        gradePtr = new float;
        *gradePtr = grade;
    }
    Student(Student &s1)
    {
        this->name = s1.name;
        this->age = s1.age;
        gradePtr = new float;
        *gradePtr = *s1.gradePtr;
    }
    void display()
    {
        cout << name << endl
             << age << endl
             << *gradePtr << endl;
    };
};
int main()
{
    Student s1("zara", 20, 3.8);
    s1.display();
    Student s2(s1);
    *(s2.gradePtr) = 4.0;
    s2.name = "khushi";
    s2.display();
}