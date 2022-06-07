#include<iostream.h>
#include<conio.h>
class time
{
private:
int hour;
int minute;
public:
void get(int h,int m)
{
hour=h;
minute=m;
}
void put(void)
{
cout<<"HOURS="<<hour<<endl;
cout<<"MINUTE="<<minute<<endl;
}
void sum(time,time);
};
void time::sum(time t1,time t2)
{
minute=t1.minute+t2.minute;
hour=minute/60;
minute=minute%60;
hour=hour+t1.hour+t2.hour;
}
};
int main()
{
time t1,t2.t3;
t1.get(2,25);
t2.get(3,4);
t3.sum(t1,t2);
cout<<"T1:";
t1.put();
cout<<"T2:";
t2.put();
cout<<"T3:";
t3.put();
getch();
return 0;
}