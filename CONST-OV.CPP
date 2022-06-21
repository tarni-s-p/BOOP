#include<iostream.h>
#include<conio.h>
class test
{
public:
test()
{
cout<<"HELLO"<<endl;
}
test(char s)
{
cout<<"I AM TARNI"<<s<<endl;
}
test(char f,char l)
{
cout<<"I AM COMPUTER STUDENT"<<f<<endl;
cout<<"BRANCH : PALSANA"<<l<<endl;
}
};
int main()
{
char a,b,c;
clrscr();
test x;
test y(a);
test z(b,c);
getch();
return 0;
}