#include<iostream.h>
#include<conio.h>
int c=0;
class abc
{
public:
	abc()
	{
	c++;
	cout<<"COUNT THE CONSTRACTOR"<<c<<endl;
	}
};
void main()
{
clrscr();
abc x,y,z,e,f,g;
getch();
}