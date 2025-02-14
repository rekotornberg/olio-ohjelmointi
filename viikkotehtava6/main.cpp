#include <iostream>
#include <vector>
#include "student.h"
#include <algorithm>

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;
    studentList.push_back(Student("Mikko", 120));
    studentList.push_back(Student("Matti", 30));
    studentList.push_back(Student("Minna", 40));


    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:{

            string Name;
            int Age;
            cout << "Anna uuden opiskelijan nimi: " << endl;
            cin >> Name;
            cout << "Ika" << endl;
            cin >> Age;
            studentList.push_back(Student(Name, Age));
            }
            break;


        case 1:
            for (Student &student : studentList) {
                cout << "Nimi:\n"
                     << student.getName()
                     << " ika: "
                     << student.getAge() << endl;
            }
            break;

        case 2: {

            sort(studentList.begin(), studentList.end(), [](Student &a, Student &b) {
                return a.getName() < b.getName();
            });


            for (auto &student : studentList) {
                student.printStudentInfo();
            }
            break;
        }


        case 3: {
            sort(studentList.begin(), studentList.end(), [](Student &a, Student &b) {
                return a.getAge() < b.getAge();
            });

            for (auto &student : studentList) {
                student.printStudentInfo();
            }
            break;
        }
        case 4: {
            string Name;
            cout << "Anna opiskelijan nimi: " << endl;
            cin >> Name;

            auto etsi = find_if(studentList.begin(), studentList.end(),
                [&Name](Student &student) {
                    return student.getName() == Name;

            });

            if (etsi != studentList.end()) {
                etsi ->printStudentInfo();

            } else {
                cout << "Ei loytynyt";
            }
        }
            break;

        default:
            cout << "Wrong selection, stopping..."<<endl;
            break;
        }
    } while (selection < 5);

    return 0;
}
