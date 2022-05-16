#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class mark;
class student
{
public:
int r_no;
char name[20];
int age;
char br[10];
float pr;

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
friend void display(student a,mark b);
};
class mark
{
int marks;
int pmarks;
int cmarks;
public:
void getmark()
{
cout<<"ENTER MARKS=";
cin>>marks;
cout<<"ENTER PMARKS=";
cin>>pmarks;
cout<<"ENTER CMARKS=";
cin>>cmarks;
}
friend void display(student a,mark b);
};
void display(student x,mark y)
{
cout<<"ROLL_NUMBER="<<x.r_no<<endl;
cout<<"N+AME="<<x.name<<endl;
cout<<"AGE="<<x.age<<endl;
cout<<"BRANCH="<<x.br<<endl;
cout<<"PR="<<x.pr<<endl;
cout<<"MARKS="<<y.marks<<endl;
cout<<"PMARKS="<<y.pmarks<<endl;
cout<<"CMARKS="<<y.cmarks<<endl;
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
mark b;
s.getdata();
b.getmark();
break;
case 2:
display(s,b);
break;
}
cout<<"do you wish to contiune?";
cin>>yn;
}while(yn=='Y'||yn=='N');
getch();
return 0;
}