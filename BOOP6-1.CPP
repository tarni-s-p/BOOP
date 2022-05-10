#include<iostream.h>
#include<conio.h>
class temp
{
private:
float f;
public:
void getdata()
{
cout<<"enter f";
cin>>f;
}
float display()
{
float c=(f-32)*float(5)/9;
return c;
}
};
int main()
{
temp x;
clrscr();
x.getdata();
cout<<"answer::"<<x.display();
getch();
return 0;
}