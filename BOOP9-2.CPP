#include<iostream.h>
#include<conio.h>
class classB;
class classA
{
private:
int numA;
friend class classB;
void display()
{
cout<<numA<<endl;
}
public:
classA()
{
numA=12;
}
};
class classB
{
private:
int numB;
public:
classB()
{
numB=5;
}
int add()
{
classA objectA;
objectA.display();
return objectA.numA + numB;
}
};
int main()
{
classB objectB;
clrscr();
cout<<"SUM="<<objectB.add();
getch();
return 0;
}       `