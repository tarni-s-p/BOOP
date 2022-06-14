#include<iostream.h>
#include<conio.h>
class exa
{
public:
int a;
exa add(exa Ea,exa Eb)
{
exa Ec;
Ec.a=Ea.a+Eb.a;
return Ec;
}
};
int main()
{
exa E1,E2,E3;
clrscr();
E1.a=50;
E2.a=100;
E3.a=0;
cout<<"Initial values\n";
cout<<"Value of object1:"<<E1.a
	<<"\n object2:"<<E2.a
	<<"\n object3:"<<E3.a
	<<endl;
E3=E3.add(E1,E2);
cout<<"New values\n";
cout<<"Value of object1:"<<E1.a
	<<"\n object2:"<<E2.a
	<<"\n object3:"<<E3.a
	<<endl;
getch();
return 0;
}