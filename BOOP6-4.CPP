#include<iostream.h>
#include<conio.h>
class student
{
private:
int en_no;
char name[10];
char c[20];
int m1,m2,m3;

public:
void getdata()
{
cout<<"ENTER ENROLLMENT :";
cin>>en_no;
cout<<"ENTER NAME:";
cin>>name;
cout<<"ENTER COURSE:";
cin>>c;
cout<<"ENTER THREE SUB MARKS:";
cin>>m1>>m2>>m3;
}
void putdata()
{
cout<<"ENROLLMENT="<<en_no<<endl;
cout<<"NAME="<<name<<endl;
cout<<"COURSE="<<c<<endl;
}
void sum()
{
int total;
total=m1+m2+m3;
cout<<"TOTAL="<<total<<endl;
}
};
int main()
{
student s;
int n;
cout<<"ENTER THE NUMBER:";
cin>>n;
clrscr();
for(int i=0;i<n;i++)
{
s.getdata();
}
for(i=0;i<n;i++)
{
s.putdata();
s.sum();
}
getch();
return 0;
}