#include <iostream>

using namespace std;

class Student
{
    private:
        int rno;
        char name[30];
    
    public:
        void get_data();
        void put_data()
        {
            cout<<"\nRoll no = "<<rno<<"\tName = "<<name;
        }
};

void Student :: get_data()
{
    cout<<"\nEnter roll no : ";
    cin>>rno;
    cout<<"\n Enter name : ";
    cin>>name;
}

int main()
{
    Student s[100];
    int i,n;
    cout<<"Enter the number of students (max 100) = ";
    cin>>n;

    cout<<"\n\nStart entering the details...\n";

    for ( i = 0; i < n; i++)    
    {
        s[i].get_data();
    }
    cout<<"\n\n--------------\n";

    cout<<"\nEntered details are:\n";

    for ( i = 0; i < n; i++)    
    {
        s[i].put_data();
    }
    return 0;
}