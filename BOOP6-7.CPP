#include<iostream.h>
#include<conio.h>
class distance
{
private:
float inch,feet;
public:
void get()
{
cout<<"enter inch:";
cin>>inch;
cout<<"enter feet:";
cin>>feet;
}
void add_distance(distance d1,distance d2)
{
inch=d1.inch+d2.inch;
feet=d1.feet+d2.feet;
feet=feet+(inch/12);
if(inch>12)
{
inch=12;
feet++;
}
cout<<"INCH="<<inch<<endl;
cout<<"FEET="<<feet<<endl;
}
};

int main()
{
distance d1,d2,d3;
clrscr();
d1.get();
d2.get();
d3.add_distance(d1,d2);
getch();
return 0;
}