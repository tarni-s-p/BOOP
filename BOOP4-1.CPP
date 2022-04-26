#include<iostream.h>
#include<conio.h>
void swap(int&,int&);
int main()
{
int a,b;
cout<<"ENTER A IS:";
cin>>a;
cout<<"ENTER B IS:";
cin>>b;
swap(a,b);
clrscr();
cout<<"AFTER SWAPING A IS:"<<a<<endl;
cout<<"AFTER SWAPING B IS:"<<b<<endl;
getch();
return 0;
}
void swap(int &x,int &y)
{
int t;
t=x;
x=y;
y=t;
}