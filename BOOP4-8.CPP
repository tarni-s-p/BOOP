#include<iostream.h>
#include<conio.h>
const float Pie=3.14;
inline float area(float r)
{
return(Pie*r*r);
}
int main()
{
float radius;
clrscr();
cout<<"enter R::";
cin>>radius;
cout<<"AREA="<<area(radius)<<endl;
getch();
return 0;
}