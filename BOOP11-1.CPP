#include<iostream.h>
#include<conio.h>
class account
{
public:
float salary;
account()
{
salary = 30000;
}
void disp_acc()
{
cout<<"salary"<<salary<<endl;
}
};
class programmer:public account
{
public:
float Bouns;
programmer()
{
Bouns = 25000;
}
void disp_prof()
{
cout<<"Bouns"<<Bouns<<endl;
}
};
int main()
{
programmer p;
clrscr();
cout<<"salary:"<<p.salary<<endl;
cout<<"Bouns:"<<p.Bouns<<endl;
p.disp_acc();
p.disp_prof();
getch();
return 0;
}