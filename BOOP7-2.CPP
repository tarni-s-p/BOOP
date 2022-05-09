#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int m=5;
class student
{
public:
static int c;
student()
{
c++;
}
int r_no;
char name[20];
int age;
char br[10];
float pr;
static void init_c();
static int get_count();

void getdata()
{
cout<<"ENTER ROLL NUMBER:";
cin>>r_no;
cout<<"ENTER NAME:";
cin>>name;
cout<<"ENTER AGE:";
cin>>age;
cout<<"ENTER BRANCH:";
cin>>br;
cout<<"ENTER PR:";
cin>>pr;
}
void display()
{
cout<<"ROLL_NUMBER="<<r_no<<endl;
cout<<"N+AME="<<name<<endl;
cout<<"AGE="<<age<<endl;
cout<<"BRANCH="<<br<<endl;
cout<<"PR="<<pr<<endl;
}
};
int student::c=0;
int student::get_count();
{
return c;
}

int main()
{
int ch;
char yn;
clrscr();
do{
cout<<"press 1 to create object \n press 2 to count object";
cout<<"enter your choice";
cin>>ch;
switch(ch)
{
case 1:
student s;
s.getdata();
s.display();
break;
case 2:
cout<<"enter object are"<<student::get_count();
break;
}
cout<<"do you wish to contiune?";
cin>>yn;
}while(yn=='Y'||yn=='N');
return 0;
}