//Author Kushagra Jha
//Code was written by Kushagra Jha
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstdlib>
using namespace std;

class staff
{
        int staff_id;
        char name[20];
        float salary;
    public:
        staff()
        {

        }
        void accept()
        {
                cout<<"\n Enter Staff Id : ";
                cin>>staff_id;
                cout<<"\n Enter Staff Name : ";
                cin>>name;
                cout<<"\n Enter Salary : ";
                cin>>salary;
        }
        void display();
        friend void sort(char nm[], int n, staff *s);
        void operator =(staff s1);
};
void staff::operator=(staff s1)
{
        staff_id = s1.staff_id;
        strcpy(name,s1.name);
        salary = s1.salary;
}
void staff::display()
{
        cout<<"\n Staff Id : "<<staff_id;
        cout<<"\n Name : "<<name;
        cout<<"\n Salary : "<<salary<<"\n";
}
void sort(char nm[], int n, staff *s)  //Function for sorting the data by employee name
{
        staff temp;
        for(int i=0; i<n; i++)
        {
                for(int j=i+1; j<n; j++)
                {
                        int r = strcmp(s[i].name,s[j].name);
                        if(r>0)
                        {
                                temp=s[i];
                                s[i]=s[j];
                                s[j]=temp;
                        }
                }
        }
}
int main()
{
        int ch;
        staff *s;
        int n;
        cout<<"\n Enter No.of Records You Want : ";
        cin>>n;
        s = new staff[n];
        do
        {
                cout<<"\n 1. Accept Data ";
                cout<<"\n 2. Display Data ";
                cout<<"\n 3. Sort Data by Name ";
                cout<<"\n 4. Exit: ";
                cout<<"\n\n Enter Your Choice : ";
                cin>>ch;
                switch(ch)
                {
                        case 1:
                                for(int i=0; i<n; i++)
                                {
                                        cout<<"\n\n Enter Data for Employee " <<i+1<<"\n";
                                        s[i].accept();
                                }
                                break;
                        case 2:
                                for(int i=0; i<n; i++)
                                {
                                        s[i].display();
                                }
                                break;
                        case 3:
                                sort("a", n, s);  //Passing parameter to sort() function
                                cout<<"\n Data is Sorted!!!\n";
                                break;
                        case 4:
                                exit(0);
                        default:
                                cout<<"\n Invalid Choice . . .";
        }
        }
        while(ch!=4);
        return 0;
}