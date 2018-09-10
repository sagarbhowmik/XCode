//
//  main.cpp
//  class_inheritance_example
//
//  Created by Sagar  Bhowmik on 9/9/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <iostream>
using namespace std;

#define NAME_SIZE 50

class Person {
    int id; // all members are private by default
    char name[NAME_SIZE];
    
public:
    void about_me() {
        cout << "I am a person" << endl;
    }
    virtual void about_me_virtual() {
        cout << "I am a person in virtual" << endl;
    }
    /*
     Another usage of virtual functions is when we can't/don't want to implement a method for the parent class. For example, that we want Student and Teacher to interit from Person so that we can implement a common method such as add_course(string s). Calling add_course on Person however, wouldn't make much sense since the implementation depends on whether the object is actually a Student or Teacher.
     */
    /*
     If a class has "pure" virtual function (no implementation) then the class becomes abstract and cannot be insantiated.
     virtual void about_me_virtual() = 0;
     */
};

class Student : public Person {
public:
    void about_me() {
        cout << "I am a student" << endl;
    }
    void about_me_virtual() {
        cout << "I am a student in virtual" << endl;
    }
};

int main() {
    Student *s = new Student();
    Person *ps = new Student();
    Person *p = new Person();
    s->about_me(); // prints "I am a student"
    ps->about_me(); // prints "I am a person" //function about_me is resolved compile time and is called static binding. If we want to ensure that the Student's implementation of about_me is called, we can define about_me in the Person to be virtual.
    Person *vps = new Student;
    vps->about_me_virtual(); // prints "I am a student in virtual"
    p->about_me();  // prints "I am a person"
    delete s;
    delete ps;
    delete p;
    delete vps;
    return 0;
}
