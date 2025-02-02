#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name = " ";
    int age;
    char grade;

public:
    Student(string nam, int ag, char gre)
    {
        name = nam;
        age = ag;
        grade = gre;
    }
    void update(char newGrade)
    {
        this->grade = newGrade;
    }
    void display()
    {
        cout << "Name of the student " << name << endl
             << "Age of " << name << " is " << age << endl
             << "Grade of " << name << " is " << grade << endl;
    }
    void compare(Student other)
    {
        if (age <= other.age)
        {
            cout << other.name << " is elder";
        }
        else
        {
            cout << name << " is elder";
        }
    }
};
int main()
{
    Student s1("zara", 21, 'A');
    s1.display();
    Student s2("khushi", 19, 'D');
    s2.display();
    s1.compare(s2);
    return 0;
}