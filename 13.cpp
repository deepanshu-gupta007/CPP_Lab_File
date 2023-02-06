#include<iostream>
using namespace std;
class Student 
{
    
    int age;
    string name, enroll_no;
    float marks;
    public:
        void getStudent()
        {
            cout<<"Enter name: "; 
            cin>>name;
            cout<<"Enter enrollment number: "; 
            cin>>enroll_no;
            cout<<"Enter age: "; 
            cin>>age;
            cout<<"Enter marks: "; 
            cin>>marks;
        }
        void display()
        {
            cout<<"------------------------------\n";
            cout<<"Student details:\n";
            cout<<"Name: "<<name<<endl;
            cout<<"Enrollment Number: "<<enroll_no<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};
class Faculty 
{
    string facultyName, facultyCode, deptt, gender;
    float salary, experience;
    int age;
    public:
        void getFaculty()
        {
            cout<<"Enter Faculty Name: "; 
            cin>>facultyName;
            cout<<"Enter Faculty Code: "; 
            cin>>facultyCode;
            cout<<"Enter Faculty Department:"; 
            cin>>deptt;
            cout<<"Enter Faculty Gender:"; 
            cin>>gender;
            cout<<"Enter Faculty Salary: "; 
            cin>>salary;
            cout<<"Enter Faculty Age:"; 
            cin>>age;
            cout<<"Enter Faculty Experience:"; 
            cin>>experience;
        }
        void display()
        {
            cout<<"------------------------------\n";
            cout<<"Faculty details:\n";
            cout<<"Name: "<<facultyName<<endl;
            cout<<"Faclty Code: "<<facultyCode<<endl;
            cout<<"Department: "<<deptt<<endl;
            cout<<"Gender: "<<gender<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Experience level: "<<experience<<endl;
        }
};
class Person: public Student, public Faculty 
{
    public:
        void display()
        {
            Student::display();
            Faculty::display();
        }
};
int main()
{
    Person obj;
    obj.getStudent();
    obj.getFaculty();
    obj.display();
    return 0;
}