#include<iostream>
using namespace std;

class employee
{
    public:
    double salary;
    int number_of_hours;

    void getinfo()
    {
        cout<<"Enter salary: ";
        cin>>salary;
        cout<<"Enter the number of hours: ";
        cin>>number_of_hours;
    }

    void addsal()
    {
        if(salary<500)
        {
            salary += 10;
        }
    }

    void addwork()
    {
        if(number_of_hours>6)
        {
            salary += 5;
        }
    }

    void display()
    {
        cout<<salary;
    }
};

int main()
{
    int num;
    cout<<"Enter the number of employees: ";
    cin>>num;
    employee *emp=new employee[num];
    for(int i=0;i<num;i++)
    {
        emp[i].getinfo();
        emp[i].addsal();
        emp[i].addwork();
    }
    for(int i=0;i<num;i++)
    {
        cout<<"Final salary of employee"<<i+1<< " is: ";
        emp[i].display();
        cout<<endl;
    }

    return 0;

}