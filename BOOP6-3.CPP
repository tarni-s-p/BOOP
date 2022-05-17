#include<iostream.h>
#include<conio.h>
class employee
{
private:
int emp_id;
char emp_name[50];
char emp_delt[10];

public:
void get()
{
cout<<"ENTER EMPLOYEE ID :";
cin>>emp_id;
cout<<"ENTER EMPLOYEE NAME:";
cin>>emp_name;
cout<<"ENTER EMPLOYEE DELT:";
cin>>emp_delt;
}
void put()
{
cout<<"EMP_ID="<<emp_id<<endl;
cout<<"EMP_NAME="<<emp_name<<endl;
cout<<"EMP_DELT="<<emp_delt<<endl;
}
};
int main()
{
employee e1[100];
int n;
cout<<"ENTER NUMBER:";
cin>>n;
clrscr();
for(int i=0;i<n;i++)
{
e1[i].get();
}
for( i=0;i<n;i++)
{
e1[i].put();
}
getch();
return 0;
}
