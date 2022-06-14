#include<iostream.h>
#include<conio.h>
class sam
{
private:
int sum;
public:
	sam(int a,int b)
	{
	sum=a+b;
	}
	void show()
	{
	cout<<"SUM="<<sum<<endl;
	}
};
int main()
{
int x,y;
cout<<"ENTER X:";
cin>>x;
cout<<"ENTER Y:";
cin>>y;
clrscr();
sam ob(x,y);
ob.show();
getch();
return 0;
}