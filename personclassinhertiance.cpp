#include<iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;
    public:
Person(string n,int a):name(n),age(a){}
void display()
{
    cout<<"NAME:"<<name<<endl;
	cout<<"AGE:"<<age<<endl;
}
};
    class Student:public Person
    {
        public:
        int roll_no;
     Student(string n,int a,int r):Person(n,a),roll_no(r){}
        void showdata()
        {
            cout<<"NAME:"<<name<<endl;
			cout<<"AGE:"<<age<<endl;
			cout<<"ROLL NO:"<<roll_no<<endl;
        }
    
    };
           int main()
           {
            Person P1("RAZA:",40);
            P1.display();
             Student s1("RAZA:",35,12);
             s1.showdata();

             return 0;
           }