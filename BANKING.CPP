#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<time.h>
#include<ctype.h>
#include<dos.h>
class data
{
 public:
 int a,b,p,d;
 void check()
 {
 int gd=DETECT,gm,hour,min;

  time_t now;
  struct date d;
  getdate(&d);

 struct tm *tm_now;
 now=time(NULL);
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

 tm_now=localtime(&now);
 hour=tm_now->tm_hour;
 min=tm_now->tm_min;
 cout<<"this is for installment of ur lon\n";
 cout<<"date & time "<<d.da_day<<"/"<<d.da_mon<<"/"<<d.da_year<<endl<<hour<<":"<<min;
 if(d.da_day==5&&d.da_year==2019&&hour==12&&min==0)
 {
 cout<<"hi";
 }
 else
 {
 cout<<endl<<"tnx";
 }
 }
 };
 void main()
 {
 data s;
 s.check();
 getch();
 }





