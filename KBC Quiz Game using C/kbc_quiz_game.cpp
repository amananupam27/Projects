#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<process.h>

//Kaun Banega Crorepati by Aman saxena

void logo()
{

   cleardevice();
   circle(310,240,230);
   setfillstyle(1,BLUE);
   floodfill(310,240,WHITE);
   circle(310,240,200);
   setfillstyle(2,RED);
   floodfill(310,240,WHITE);
   circle(310,240,180);
   setfillstyle(1,BROWN);
   floodfill(310,200,WHITE);

   circle(310,240,150);
   setfillstyle(11,LIGHTBLUE);
   floodfill(310,240,WHITE);

   settextstyle(4,0,5);
   setcolor(MAGENTA);
   outtextxy(250,120,"KAUN") ;
   outtextxy(220,180,"BANEGA");
   outtextxy(190,240,"CROREPATI");
   setcolor(YELLOW);
   outtextxy(250,300,"@M@N");
   settextstyle(7,0,7);
   setcolor(YELLOW);
   outtextxy(525,365,"$$$")  ;
   for(int h=0;h<=300;h++)
   {
   setcolor(MAGENTA);
   circle(10,0+h,10);
   delay(5);
   }
   for(int y=0;y<=250;y++)
   {
   setcolor(RED);
   circle(25,0+y,10);
   delay(5);
   }
   for(int f=0;f<=200;f++)
   {
    setcolor(BLUE);
   circle(40,0+f,10);
   delay(5);
   }
   for(int l=0;l<=150;l++)
   {
    setcolor(GREEN);
   circle(55,0+l,10);
   delay(5);
   }
   for(int b=0;b<=100;b++)
   {
    setcolor(YELLOW);
   circle(70,0+b,10);
   delay(5);
   }
   delay(10);


 sound(100);
   delay(500);
   sound(200);
   delay(500);
   sound(300);
   delay(500);
   sound(400);
   delay(500);
   sound(500);
   delay(500);
   sound(600);
   delay(500);
   sound(700);
   delay(500);
   sound(800);
   delay(500);
   sound(900);
   delay(500);
   sound(1000);
   delay(2000);
   nosound();
}

void start()
{
cleardevice();
circle(330,240,100);
setfillstyle(10,BLUE) ;
floodfill(330,240,WHITE);
for(int i=0;i<=101;i++)
{


setcolor(MAGENTA);
circle(-50+i,0+i,30+i);
setcolor(BLUE);
circle(700-i,0+i,30+i);
setcolor(YELLOW);
circle(-50+i,500-i,30+i);
setcolor(RED);
circle(700-i,500-i,30+i);
setcolor(GREEN);
circle(330,580-i,30+i);
setcolor(LIGHTRED);
circle(330,-100+i,30+i);

}
   settextstyle(4,0,4);
setcolor(MAGENTA);
outtextxy(200,190,"AMAN SAXENA");
settextstyle(7,0,5);
setcolor(LIGHTBLUE);
outtextxy(210,240,"PRESENTS..");

}
void menu()
{
cleardevice();
settextstyle(7,0,3) ;
setcolor(CYAN);
outtextxy(120,0,"Welcome To Kaun Bnega Crorepati......!")  ;
setcolor(BLUE);
outtextxy(120,2,"Welcome To Kaun Bnega Crorepati......!");
settextstyle(7,0,2);
setcolor(YELLOW);
outtextxy(0,50,"This is a very great opportunity for you to earn 1 Crore");
outtextxy(0,100,"While playing our game, you will be able to enhance your general")   ;

outtextxy(0,150,"knowledge,skills and mental ability.") ;
outtextxy(0,240,"This software is developed by Aman Saxena")   ;
outtextxy(0,290,"(12-A)(2016-2017).")    ;
outtextxy(0,340,"Just go through all 15 Questions to Win $")     ;

settextstyle(4,0,3);
setcolor(BLUE);
outtextxy(0,370,"Enter Your Name-")  ;
setcolor(MAGENTA);
outtextxy(0,372,"Enter Your Name-") ;
char name[20];

gotoxy(25,25);
{

gets(name);
}
}
void loading()
{
cleardevice();
setcolor(YELLOW);
line(0,0,700,0);
line(0,0,0,475);
line(0,475,700,475);
line(639,475,639,0);
setcolor(BLUE);
line(10,10,630,10);
line(10,10,10,465);
line(10,465,630,465);
line(630,465,630,10);
for(int t=0;t<2;t++)
{
setbkcolor(9);
if(t==1)
{
for(int g=0;g<=350;g++)
{
setcolor(10);
circle(70,50+g,14);

settextstyle(4,0,5);
setcolor(YELLOW);
outtextxy(210,200,"LOADING...");
}
for(int f=0;f<=500;f++)
{
setcolor(BLUE);
circle(70+f,400,14);

 settextstyle(4,0,5);
setcolor(GREEN);
outtextxy(210,200,"LOADING...");
}
for(int a=0;a<=350;a++)
{
setcolor(3);
circle(570,400-a,14);

settextstyle(4,0,5);
setcolor(RED);
outtextxy(210,200,"LOADING...");
}
for( a=0;a<=500;a++)
{
setcolor(RED);
circle(570-a,50,14);

settextstyle(4,0,5);
setcolor(BLUE);
outtextxy(210,200,"LOADING...");
}
}

else
{
for(int g=0;g<=500;g++)
{
setcolor(MAGENTA);
circle(70+g,50,15);

settextstyle(4,0,5);
setcolor(YELLOW);
outtextxy(210,200,"LOADING...");
}
for(int f=0;f<=350;f++)
{
setcolor(RED);
circle(570,50+f,15);

 settextstyle(4,0,5);
setcolor(GREEN);
outtextxy(210,200,"LOADING...");
}
for(int a=0;a<=500;a++)
{
setcolor(6);
circle(570-a,400,15);

settextstyle(4,0,5);
setcolor(RED);
outtextxy(210,200,"LOADING...");
}
for( a=0;a<=350;a++)
{
setcolor(BLUE);
circle(70,400-a,15);

settextstyle(4,0,5);
setcolor(BLUE);
outtextxy(210,200,"LOADING...");
}
}
}
}
void progress(int a)
{
cleardevice();
for(int i=0;i<=100;i++)
{
setbkcolor(BLACK);
settextstyle(4,0,5);

setcolor(BLUE);

outtextxy(180,0,"Your Progress");
setcolor(MAGENTA);
outtextxy(180,2,"Your Progress");
outtextxy(180,5,"__________");
settextstyle(7,0,4);
setcolor(BLUE);
outtextxy(180,110,"Congratulations..!") ;
setcolor(YELLOW);
settextstyle(4,0,5);
outtextxy(180,190,"You Have Won");


setcolor(WHITE);
line(151,0,0,401);
setcolor(BLUE);
line(150-i,0,0,400);
setcolor(WHITE);
line(459,0,619,400);
setcolor(BLUE);
line(460+i,0,620,400);
settextstyle(4,0,6);
setcolor(GREEN);
if(a==1)
outtextxy(210,300,"5000 Rs");
else if(a==2)
outtextxy(130,300,"10,000 RS");
else if(a==3)
outtextxy(130,300,"20,000 RS");
else if(a==4)
outtextxy(130,300,"50,000 RS");
else if(a==5)
outtextxy(130,300,"1,60,000 RS");
else if(a==6)
outtextxy(130,300,"5,40,000 RS");
else if(a==7)
outtextxy(130,300,"12,10,000 RS");
else if(a==8)
outtextxy(130,300,"24,20,000 RS");
else if(a==9)
outtextxy(130,300,"32,50,000 RS");
else if(a==10)
outtextxy(130,300,"50,10,000 RS");
else if(a==11)
outtextxy(130,300,"60,20,000 RS");
else if(a==12)
outtextxy(130,300,"70,30,000 RS");
else if(a==13)
outtextxy(130,300,"80,40,000 RS");
else if(a==14)
outtextxy(130,300,"90,50,000 RS");
else if(a==15)
outtextxy(130,300,"1 CRORE RS");
if(i<50);
{
setcolor(RED);
line(50+i,0,0,400);
line(560-i,0,620,400);
}

}

}

int loose()
{
cleardevice();
setbkcolor(BLACK);
setcolor(BLUE);
line(0,0,700,0);
line(0,0,0,475);
line(0,475,700,475);
line(639,475,639,0);
settextstyle(4,0,7);
setcolor(MAGENTA);
outtextxy(130,100,"Never Give Up");
setcolor(RED);
outtextxy(190,250,"Try Again") ;
settextstyle(7,0,3);
setcolor(BLUE);
outtextxy(120,370,"Enter Y To Try Again Or N To Exit");
 delay(500);
   sound(1000);
   delay(500);
   sound(900);
   delay(500);
   sound(800);
   delay(500);
   sound(700);
   delay(500);
   sound(600);
   delay(500);
   sound(500);
   delay(500);
   sound(400);
   delay(500);
   sound(300);
   delay(500);
   sound(200);
   delay(2000);
   nosound();
char x;
gotoxy(40,22)  ;
{
cin>>x;
}
if(x=='y'|| x=='Y')
{
return 1;
}
else if(x=='n' || x=='N')
{
return 2;
}
}

int question(char a[],char f[],char b[],char c[],char d[],int an,char qn[])
{
cleardevice();
for(int i=0;i<=65;i++)
{
setbkcolor(BLACK);
setcolor(BLUE);
line(0,200,640,200);
setcolor(RED);
line(0,190,640,190);
setcolor(MAGENTA);
line(0,195,640,195);
setcolor(BLUE);
rectangle(40,260,600,210);
line(0,90,90,30+i);
line(550,30+i,630,90);

rectangle(90,30,550,160);
setcolor(RED);
line(0,90,90,160-i);
line(550,160-i,630,90);
setcolor(MAGENTA);
line(0,235,40,210);
setcolor(GREEN);
line(0,235,40,235);
setcolor(RED);
line(0,235,40,260);
setcolor(MAGENTA);
line(600,210,640,235);
setcolor(GREEN);
line(600,235,640,235);
setcolor(RED);
line(600,260,640,235);
setcolor(BLUE);
rectangle(40,300,300,350);
line(0,360,40,300);
line(600,300,650,365);
setcolor(MAGENTA);
line(0,360,40,430);
line(600,430,650,330)    ;
setcolor(BLUE);


rectangle(335,300,600,350);
rectangle(40,380,300,430);
rectangle(335,380,600,430);
setcolor(YELLOW);
line(0,0,700,0);
line(0,0,0,475);
line(0,475,700,475);
line(639,475,639,0);


}
settextstyle(4,0,6);
setcolor(MAGENTA);
outtextxy(140,60,"QUESTION");
outtextxy(420,60,qn);
settextstyle(7,0,1);
setcolor(YELLOW);
outtextxy(50,220,a);
setcolor(6);
settextstyle(7,0,1);
outtextxy(50,315,f);
outtextxy(50,395,c);
outtextxy(345,315,b);
outtextxy(345,395,d);
int x;
gotoxy(26,18);
{

cout<<"Enter Your Answer(1,2,3,4)-";
cin>>x;
}
if(x==an)
{
sound(100);
   delay(300);
   sound(1000);
   delay(300);
   sound(1500);
   delay(300);
   sound(2000);
   delay(400);
   nosound();
return 1;
}
else
{
return 2;
}

}
void prize()
{
cleardevice();
setcolor(RED);
line(0,0,700,0);
line(0,0,0,475);
line(0,475,700,475);
line(639,475,639,0);

settextstyle(4,0,5);
setcolor(BLUE);
outtextxy(110,100,"Enter Your Name Again");
char namm[20];
setcolor(GREEN);
rectangle(200,210,440,250);
setcolor(BLUE);
gotoxy(35,15);
{
gets(namm);
}
cleardevice();
setcolor(YELLOW);
line(0,0,700,0);
line(0,0,0,475);
line(0,475,700,475);
line(639,475,639,0);
setcolor(MAGENTA);
outtextxy(180,0,"Congratulations...!");

setcolor(GREEN);
outtextxy(20,55,"Here is your 1 Crore Rs Cheque") ;
setcolor(WHITE);
rectangle(60,200,590,380);
line(60,240,590,240);
setcolor(BLUE);
settextstyle(4,0,2);
outtextxy(70,210,"$@ SaXeNa'S BaNk Of InDiA,FATEHPUR");
settextstyle(7,0,1);
setcolor(WHITE);
outtextxy(70,250,"Pay-__________________________") ;
outtextxy(120,250,namm);
outtextxy(70,280,"Rupees-_______________________");
outtextxy(150,278,"1 Crore(10,000,000 Rs)")  ;
setcolor(RED);
outtextxy(70,320,"With Love-Aman");
setcolor(GREEN) ;

outtextxy(300,320,"27/1/2016");
setcolor(MAGENTA);
rectangle(290,310,420,350);
}

void main()
{
 again:
 int gd=DETECT,gm,x,y;
   initgraph(&gd,&gm,"c:\\TC\\bgi");

logo();
 delay(2000);
  start();
  delay(2000);
menu();
    delay(1000);
   loading();




  char a1[]={"1-Which is the largest organ in human body?"},f1[]={"1-Intestines"},b1[]={"2-Kidney"},c1[]={"3-Lungs"},d1[]={"4-Lever"};int an1=4;char qn1[]={"-1"};
  char a2[]={"2-Who played the lead role in Talash(FILM)?"},f2[]={"1-Shah Rukh Khan"},b2[]={"2-Aamir Khan"},c2[]={"3-Salman Khan"},d2[]={"4-Sunny Deol"};int an2=2;char qn2[]={"-2"};
  char a3[]={"3-Where is Fort William located?"},f3[]={"1-Chennai"},b3[]={"2-Goa"},c3[]={"3-Kolkata"},d3[]={"4-Mysore"};int an3=3;char qn3[]={"-3"};
  char a4[]={"4-Which state is largest producer of soyabean(India)?"},f4[]={"1-Madhya Pradesh"},b4[]={"2-Gujrat"},c4[]={"3-Uttar Pradesh"},d4[]={"4-Rajasthan"};int an4=1;char qn4[]={"-4"};
  char a5[]={"5-Which of the following is used in pencils?"},f5[]={"1-Silicon"},b5[]={"2-Charcoal"},c5[]={"3-Graphite"},d5[]={"4-Phosphorus"};int an5=3;char qn5[]={"-5"};
  char a6[]={"6-Which is the highest gallantry award in India?"},f6[]={"1-Khel Ratna Award"},b6[]={"2-Param Vir Chakra"},c6[]={"3-Kirti Chakra"},d6[]={"4-Vir Chakra"};int an6=2;char qn6[]={"-6"};
  char a7[]={"7-What is the longest bone in human body?"},f7[]={"1-Femur"},b7[]={"2-Ulna"},c7[]={"3-Tibia"},d7[]={"4-Sternum"};int an7=1;char qn7[]={"-7"};
  char a8[]={"8-Which country has the largest armed forces?"},f8[]={"1-North Korea"},b8[]={"2-U.S.A."},c8[]={"3-Russia"},d8[]={"4-China"};int an8=4;char qn8[]={"-8"};
  char a9[]={"9-Which is the biggest underground railway network?"},f9[]={"1-China"},b9[]={"2-New York"},c9[]={"3-Tokyo"},d9[]={"4-Japan"};int an9=3;char qn9[]={"-9"};
  char a10[]={"10-To which sport Arjun Atwal is associated with?"},f10[]={"1-Squash"},b10[]={"2-Golf"},c10[]={"3-Shooting"},d10[]={"4-Football"};int an10=2;char qn10[]={"-10"};
  char a11[]={"11-Which city is called as the 'Mecca Of Soccer'?"},f11[]={"1-Mumbai"},b11[]={"2-Cochin"},c11[]={"3-Goa"},d11[]={"4-Kolkata"};int an11=4;char qn11[]={"-11"};
  char a12[]={"12-Where is the headquarters of Asian Games Situated?"},f12[]={"1-Beijing"},b12[]={"2-Singapore"},c12[]={"3-New Delhi"},d12[]={"4-U.S.A."};int an12=2;char  qn12[]={"-12"};
  char a13[]={"13-Who was the founder of HOTMAIL?"},f13[]={"1-Manish Lakhani"},b13[]={"2-J.C. Bose"},c13[]={"3-Sabeer Bhatia"},d13[]={"4-Manoj Bhatia"};int an13=3;char qn13[]={"-13"};
  char a14[]={"14-Which car is the first indigenous car of india?"},f14[]={"1-Indica"},b14[]={"2-Ambassador"},c14[]={"3-Padmini"},d14[]={"4-Maruti"};int an14=1;char qn14[]={"-14"};
  char a15[]={"15-Who directed the movie 'Goblet Of Fire'?"},f15[]={"1-Stuart Craig"},b15[]={"2-David Barron"},c15[]={"3-David Heyman"},d15[]={"4-Mike Newell"};int an15=4;char qn15[]={"-15"};

   int lo,ans;
    ans=question(a1,f1,b1,c1,d1,an1,qn1);
   if(ans==1)
   {
   progress(1);
   }
   else
   {
   lo=loose();
   if(lo==1)
   {
   goto again;
   }
   else if(lo==2)
   {
   exit(0);
   }
   }
    ans=question(a2,f2,b2,c2,d2,an2,qn2);
   if(ans==1)
   {
   progress(2);
   }
   else
   {
   lo=loose();
   if(lo==1)
   {
   goto again;
   }
   else if(lo==2)
   {
   exit(0);
   }
   }
    ans=question(a3,f3,b3,c3,d3,an3,qn3);
   if(ans==1)
   {
   progress(3);
   }
   else
   {
   lo=loose();
   if(lo==1)
   {
   goto again;
   }
   else if(lo==2)
   {
   exit(0);
   }
   }

    ans=question(a4,f4,b4,c4,d4,an4,qn4);
   if(ans==1)
   {
   progress(4);
   }
   else
   {
   lo=loose();
   if(lo==1)
   {
   goto again;
   }
   else if(lo==2)
   {
   exit(0);
   }
   }
    ans=question(a5,f5,b5,c5,d5,an5,qn5);
   if(ans==1)
   {
   progress(5);
   }
   else
   {
   lo=loose();
   if(lo==1)
   {
   goto again;
   }
   else if(lo==2)
   {
   exit(0);
   }
   }
    ans=question(a6,f6,b6,c6,d6,an6,qn6);
   if(ans==1)
   {
   progress(6);
   }
   else
   {
   lo=loose();
   if(lo==1)
   {
   goto again;
   }
   else if(lo==2)
   {
   exit(0);
   }
   }
    ans=question(a7,f7,b7,c7,d7,an7,qn7);
   if(ans==1)
   {
   progress(7);
   }
   else
   {
   lo=loose();
   if(lo==1)
   {
   goto again;
   }
   else if(lo==2)
   {
   exit(0);
   }
   }
    ans=question(a8,f8,b8,c8,d8,an8,qn8);
   if(ans==1)
   {
   progress(8);
   }
   else
   {
   lo=loose();
   if(lo==1)
   {
   goto again;
   }
   else if(lo==2)
   {
   exit(0);
   }
   }
    ans=question(a9,f9,b9,c9,d9,an9,qn9);
   if(ans==1)
   {
   progress(9);
   }
   else
   {
   lo=loose();
   if(lo==1)
   {
   goto again;
   }
   else if(lo==2)
   {
   exit(0);
   }
   }
    ans=question(a10,f10,b10,c10,d10,an10,qn10);
   if(ans==1)
   {
   progress(10);
   }
   else
   {
   lo=loose();
   if(lo==1)
   {
   goto again;
   }
   else if(lo==2)
   {
   exit(0);
   }
   }
    ans=question(a11,f11,b11,c11,d11,an11,qn11);
   if(ans==1)
   {
   progress(11);
   }
   else
   {
   lo=loose();
   if(lo==1)
   {
   goto again;
   }
   else if(lo==2)
   {
   exit(0);
   }
   }
    ans=question(a12,f12,b12,c12,d12,an12,qn12);
   if(ans==1)
   {
   progress(12);
   }
   else
   {
   lo=loose();
   if(lo==1)
   {
   goto again;
   }
   else if(lo==2)
   {
   exit(0);
   }
   }
    ans=question(a13,f13,b13,c13,d13,an13,qn13);
   if(ans==1)
   {
   progress(13);
   }
   else
   {
   lo=loose();
   if(lo==1)
   {
   goto again;
   }
   else if(lo==2)
   {
   exit(0);
   }
   }
    ans=question(a14,f14,b14,c14,d14,an14,qn14);
   if(ans==1)
   {
   progress(14);
   }
   else
   {
   lo=loose();
   if(lo==1)
   {
   goto again;
   }
   else if(lo==2)
   {
   exit(0);
   }
   }
    ans=question(a15,f15,b15,c15,d15,an15,qn15);
   if(ans==1)
   {
   progress(15);
   }
   else
   {
   lo=loose();
   if(lo==1)
   {
   goto again;
   }
   else if(lo==2)
   {
   exit(0);
   }
   }
   prize();
getch();
closegraph();
}

 






 
 
