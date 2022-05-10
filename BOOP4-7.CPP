#include<iostream.h>
#include<conio.h>
const float Pie=3.14;
float area(float r)
{
return(Pie*r*r);
}
float area(float l,float b)
{
return(l*b);
}
int main()
{
float r;
cout<<"enter radius:";
cin>>r;
cout<<"area of circle:"<<area(r)<<endl;
int l,b;
cout<<"enter a::";
cin>>l;
cout<<"enter b::";
cin>>b;
cout<<"area of rectangle::"<<area(l,b)<<endl;
getch();
return 0;
}
