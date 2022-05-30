#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int m=5;
class student
{
public:
int r_no;
char name[20];
int age;
char br[10];
float pr;

int getdata()
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
int display()
{
cout<<"ROLL_NUMBER="<<r_no<<endl;
cout<<"NAME="<<name<<endl;
cout<<"AGE="<<age<<endl;
cout<<"BRANCH="<<br<<endl;
cout<<"PR="<<pr<<endl;
}
};
int main()
{
int i,n=5;
student s[10];
clrscr();
cout<<"ENTER STUDENT DATA"<<endl;
for(i=0;i<n;i++)
{
s[i].getdata();
}

cout<<"DISPLAY STUDENT DATA"<<endl;
for(i=0;i<n;i++)
{
s[i].display();
}
getch();
return 0;
}
