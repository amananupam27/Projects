//Railway Reservation System
//By-Aman Saxena
//Files Associated With The Project
//amans.dat-Login File
//reservation.dat-Ticket storage file
//train.dat-stores train information
#include<iostream.h>
#include<string.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
struct detail
{
char name[30];
char password[20];
}obst;
struct train
{
char number[10];
char trainname[20];
}tb;







void succ()
{     int f;
clrscr();
cout<<"\t\t\t  IRCTC Reservation System\n";
cout<<"\t\t\t  =+=+=+=+=+=+=+=+=+=+=+=+\n";
cout<<"Welcome "<<"User"<<"\n";
cout<<"1-Book TrainTickets\n";
cout<<"2-Book Platform Tickets\n";
cout<<"3-Credits\n";
cout<<"4-Exit\n";
cout<<"Choose An Option=";
cin>>f;
if(f==1)
{
int noa,nok;
char no[10]; char ss[30],es[30],date[10];
clrscr();

cout<<"\t\t\t  IRCTC Reservation System\n";
cout<<"\t\t\t  =+=+=+=+=+=+=+=+=+=+=+=+\n";
cout<<"Booking Window\n";
cout<<"Enter Train Number=";
gets(no);
   char tr[35],ch;                           //book
       long noo;
ifstream oh;
oh.open("train.dat",ios::in|ios::binary);
oh.seekg(0);
while(oh)
{
 oh.read((char*) & tb,sizeof(train));
  if(strcmp(tb.number,no)==0)
  {
  cout<<"Your Train Is=";
  puts(tb.trainname);
  break;
  }

}
oh.close();

int hg;
cout<<"Enter Source Station(Enter Station code)=";
gets(ss);
cout<<"Enter Destination Station(Enter Station Code)=";
gets(es);
if(strcmp(ss,"ALD")==0 || strcmp(ss,"ald")==0)
{
hg=60;
}
if(strcmp(ss,"ALY")==0 || strcmp(ss,"aly")==0)
{
hg=100;
}
if(strcmp(ss,"AGA")==0 || strcmp(ss,"aga")==0)
{
hg=120;
}
if(strcmp(ss,"CNB")==0 || strcmp(ss,"cnb")==0)
{
hg=112;
}
if(strcmp(ss,"ANDN")==0 || strcmp(ss,"andn")==0)
{
hg=75;
}
if(strcmp(ss,"AME")==0 || strcmp(ss,"ame")==0)
{
hg=89;
}

if(strcmp(ss,"AMH")==0 || strcmp(ss,"amh")==0)
{
hg=120;
}
if(strcmp(ss,"BMU")==0 || strcmp(ss,"bmu")==0)
{
hg=113;
}
if(strcmp(ss,"BE")==0 || strcmp(ss,"be")==0)
{
hg=233;
}
if(strcmp(ss,"FTP")==0 || strcmp(ss,"ftp")==0)
{
hg=135;
}


cout<<"Enter Number Of Adults=";
cin>>noa;
cout<<"Enter Number Of Child=";
cin>>nok;



cout<<"Enter Journey Date(DD/MM/YYYY)=";
gets(date);
int sum;
sum=hg*noa+(hg/2)*nok;
cout<<"Cost Per Adult="<<hg<<"\n";
cout<<"Cost Per Child="<<hg/2<<"\n";
cout<<"Total Amount="<<sum<<"\n";
cout<<"\nTotal="<<sum<<" Rs";
char j;


ofstream qua;
qua.open("reservation.dat",ios::app);
qua<<"\n\nIndian Railways\nTrain Number="<<tb.number<<"\nTrain Name="<<tb.trainname<<"\nSource Station="<<ss<<"\t\t\tDestination Station="<<es<<"\n"<<"Number Of Adults="<<noa<<"\nNumber Of Kids="<<nok<<"\nDate="<<date<<"\t\t"<<"Fare="<<sum;

qua.close();


cout<<"\n\nPress Y/y To Checkout=";
cin>>j;
if(j=='y'||j=='Y')
{                   clrscr();
cout<<"\t\t\t  IRCTC Reservation System\n";
cout<<"\t\t\t  =+=+=+=+=+=+=+=+=+=+=+=+\n";
cout<<"Checkout\n";
cout<<"Total="<<sum<<"\n";
cout<<"1-Pay Using Paytm-Wallet\n";
cout<<"2-Pay Using Atm/Credit/Debit Card(Maestro/Visa/Rupay)\n";
int df;
cout<<"Choose an option=";
cin>>df;
long wal;char po[20],email[30];
if(df==1)
{

cout<<"\n"<<"Enter your E-Wallet Phone Number=";
cin>>wal;
cout<<"\n";
cout<<"Enter paytm password=";
gets(po);
cout<<"\nTransaction Successfull\n";
cout<<"Your Ticket Will Be Sent To Your E-Mail Id\n";
cout<<"Enter your e-mail id=";
gets(email);
cout<<"\nTicket Sent On Your E-Mail Id..\nWe Wish You A Happy And Safe Jouney";
cout<<"\nProgram will now exit";
delay(3000);
exit(0);
}
else if(df==2)
{
cout<<"\n"<<"Enter your Credit/Debit/ATM Card Number=";
cin>>wal;
cout<<"\n";
cout<<"Enter pin=";
gets(po);
cout<<"\nTransaction Successfull\n";
cout<<"Your Ticket Will Be Sent To Your E-Mail Id\n";
cout<<"Enter your e-mail id=";
gets(email);
cout<<"\nTicket Sent On Your E-Mail Id..\nWe Wish You A Happy And Safe Jouney";
cout<<"\nProgram will now exit";
delay(3000);
exit(0);
}
else
{
cout<<"\nWrong Input.\nProgram Will Exit";
delay(2000);
exit(0);
}





}
else
{
cout<<"\nWrong Input.Program Will Exit";
	delay(2000);
exit(0);
}


}

else if(f==2)
{
clrscr();
char code[10],datt[10];    int nh;
cout<<"Platform Ticket Booking Window\n";
cout<<"==============================\n";
cout<<"Enter Station Code=";
gets(code);
cout<<"Enter Date(DD/MM/YYYY)=";
gets(datt);
cout<<"Enter Number Of Adults=";
cin>>nh;
cout<<"\nTotal(Rs 10 per person)= "<<nh*10;      ///
delay(2000);
clrscr();
cout<<"\nCheckout\n";
cout<<"Total="<<nh*10<<"\n";
cout<<"1-Pay Using Paytm-Wallet\n";
cout<<"2-Pay Using Atm/Credit/Debit Card(Maestro/Visa/Rupay)\n";
int dfa;
cout<<"Choose an option=";
cin>>dfa;
long wala;char poa[20],emaila[30];
if(dfa==1)
{

cout<<"\n"<<"Enter your E-Wallet Phone Number=";
cin>>wala;
cout<<"\n";
cout<<"Enter paytm password=";
gets(poa);
cout<<"\nTransaction Successfull\n";
cout<<"Your Ticket Will Be Sent To Your E-Mail Id\n";
cout<<"Enter your e-mail id=";
gets(emaila);
cout<<"\nTicket Sent On Your E-Mail Id..\nWe Wish You A Happy And Safe Jouney";
cout<<"\nProgram will now exit";
delay(3000);
exit(0);
}
else if(dfa==2)
{
cout<<"\n"<<"Enter your Credit/Debit/ATM Card Number=";
cin>>wala;
cout<<"\n";
cout<<"Enter pin=";
gets(poa);
cout<<"\nTransaction Successfull\n";
cout<<"Your Ticket Will Be Sent To Your E-Mail Id\n";
cout<<"Enter your e-mail id=";
gets(emaila);
cout<<"\nTicket Sent On Your E-Mail Id..\nWe Wish You A Happy And Safe Jouney";
cout<<"\nProgram will now exit";
delay(3000);
exit(0);
}
else
{
cout<<"\nWrong Input.\nProgram Will Exit";
delay(2000);
exit(0);
}


}






else if(f==3)
{
clrscr();
cout<<"Railway Reservation System\n";
cout<<"==========================\n" ;
cout<<"Developed By-Aman Saxena";
cout<<"\nClass-12-A\nComputer Science Project\nAssigned By-Manish Verma Sir\nSession-2016-17\n"  ;
}
else if(f==4)
{
cout<<"\nProgram Will Now Exit";
exit(0);
}
else
{
cout<<"\nWrong Input..Program Will now exit";
delay(2000);
exit(0);
}



}

void newuser()
{ clrscr();
 char pass[20];    char names[30],user[30],che;

cout<<"\t\t\t  IRCTC Reservation System\n";
cout<<"\t\t\t  =+=+=+=+=+=+=+=+=+=+=+=+\n";
cout<<"Create New Account\n";
cout<<"Enter Name=";
gets(names);
ggg:
cout<<"Enter username=";
gets(user);
cout<<"Enter password=";
gets(pass);
cout<<"\n";
ifstream hh;
hh.open("amans.dat",ios::in);
//char uss[30];long pwd,rb;
hh.seekg(0);
while(hh)
{
hh.read((char*) & obst,sizeof(detail));
if(strcmp(obst.name,user)==0)
{
cout<<"\nThis username already exists(Enter New Username)\n";
delay(1500);
goto ggg;
}
}
hh.close();


cout<<"\n"<<"New Account Created\n";
delay(2000);
clrscr();



strcpy(obst.name,user);
strcpy(obst.password,pass);
ofstream obt;
obt.open("amans.dat",ios::app|ios::binary);
obt.write((char*) & obst,sizeof(detail));
obt.close();
succ();
}

void curuser()
{ int ghh; clrscr();
char us[15],ch,ur[30],pas[20];  long pin,bal;
cout<<"Enter your username=";
gets(ur);
cout<<"Enter your password=";
gets(pas);

ifstream obb;
obb.open("amans.dat",ios::in) ;
obb.seekg(0);

while(obb)
{
 obb.read((char*) & obst,sizeof(detail));

 if(strcmp(ur,obst.name)==0 && strcmp(obst.password,pas)==0)
 {
  cout<<"\nLogin Success";

    delay(1000);
    ghh=1;

 break;
 }



 }
   if(ghh!=1)
   {
   cout<<"\nUsername or Password Incorrect";
	cout<<"\nProgram Will Exit";

	delay(1500);
	exit(0);
   }
succ();
obb.close();
}


void main()
{

again:
clrscr();
 int x;
cout<<"\t\t\t  IRCTC Reservation System\n";
cout<<"\t\t\t  =+=+=+=+=+=+=+=+=+=+=+=+\n";

cout<<"1-Existing user\n";
cout<<"2-New User\n";
cout<<"3-Exit\n";
cout<<"Choose an option=";
cin>>x;
if(x==1)
{
curuser();
}
else if(x==2)
{
newuser();
}
else if(x==3)
{
cout<<"\nThanks For Visiting\n";
delay(1500);
exit(0);
}
else
{
cout<<"Enter 1 or 2 only\n";
goto again;
}
getch();

}

