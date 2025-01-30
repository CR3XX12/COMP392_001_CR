// Week3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Student {
public:
    string name;
    int id;
public:
    Student(string aName, int aId) {

        this->name = aName;
        this->id = aId;


    }
};

int adder(int s, int b) {
    return s + b;
}

/* Exercise:
* Develop a functin calculator that takes a pointer to a function and two integers 
* The function returns the result of application of that function to those integers
*/


int main()
{
    Student* s = new Student("Alex", 2);
    Student* p = s;


    cout << (*s).name << endl;
    cout << s->name << endl;

    int sum = adder(3, 5);
    cout << sum << endl;

    int (*funcPtr)(int, int) = adder;

    unique_ptr<Student> student_pointer = make_unique<Student>("Adam", 11);
    shared_ptr<Student> sp = make_shared<Student>("Adam", 11);
    shared_ptr<Student> sp2 = sp;

   // int result = funcPtr(10, 20);
    //cout << result << endl;


}

