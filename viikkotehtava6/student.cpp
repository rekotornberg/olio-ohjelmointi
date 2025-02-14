#include "student.h"
#include <iostream>
#include <vector>

using namespace std;


Student::Student(string name, int age)
{
    Name = name;
    Age = age;
}

void Student::setAge(int age)
{
    Age = age;

}

void Student::setName(string name)
{
    Name = name;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout << "Nimi: " << Name << ", Ika: " << Age << endl;

}



