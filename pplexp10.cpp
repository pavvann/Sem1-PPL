#include <iostream>

using namespace std;

class employee
{
    private:
        int empno;
        char empname[30];
        float bsal;
        float allo;
        float tax;
        float netsal;
    public:
        void getdata();
        void calcnetsalary();
        void dispdata();
};

void employee :: getdata()
    {
        cout<<"\nenter employee number: ";
        cin>>empno;
        cout<<"enter employee name: ";
        cin>>empname;
        cout<<"enter basic salary: ";
        cin>>bsal;
    }

void employee :: calcnetsalary()
    {
        tax = 0.3;
        allo = 1.23;
        netsal = bsal + (allo*bsal) - (tax*bsal);
        cout<<"\nnet salary = "<<netsal;
    }

void employee :: dispdata()
    {
        cout<<"\nemployee no: "<<empno;
        cout<<"\nemployee name: "<<empname;
        cout<<"\nemployee basic salary: "<<bsal;
    }

int main()
{
    int n;
    cout<<"enter number of employees: ";
    cin>>n;

    class employee x[n];

    for (int i = 0; i < n; i++)
    {
        x[i].getdata();
    }

    for (int j = 0; j < n; j++)
    {
        x[j].dispdata();
        x[j].calcnetsalary();
        cout<<"\n";
    }
    
    
}