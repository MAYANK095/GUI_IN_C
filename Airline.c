#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<fstream.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
void menu1()
{
cleardevice();
setbkcolor(15);
settextstyle(7,0,2);
setcolor(4);
outtextxy(538,10,"Yatra.com");
setlinestyle(2,2,2);
line(535,10,535,40);
line(535,40,580,40);
settextstyle(7,0,5);
setcolor(1);
outtextxy(70,40,"Air Ticket Booking");
rectangle(70,100,450,400);
setcolor(12);
//circle(300,250,190);
settextstyle(3,0,1);
setcolor(2);
setcolor(5);
outtextxy(150,170,"Enter 1 to continue");
outtextxy(150,230,"Enter 2 to exit");
outtextxy(150,300,"Your choice ");
setcolor(12);
outtextxy(0,400,"Designed by Mayank Gupta");

}
void roundtrip()
{

	cleardevice();
	int gd=DETECT;
	int gm,amt,book;
	char ch0[30],ch1[20],ch2[20],ch3[20],ch4;
	int ad,ch;
	char dte2[15];
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	settextstyle(4,0,3);
	setbkcolor(1);
	setcolor(15);
	outtextxy(10,10,"Name of the Passenger");
	gotoxy(50,2);
	gets(ch0);
	outtextxy(10,50,"Boarding From");
	gotoxy(50,5);
	gets(ch1);
	outtextxy(10,90,"Arrival Point");
	gotoxy(50,8);
	gets(ch2);
	outtextxy(10,130,"Departure Date");
	gotoxy(50,10);
	gets(ch3);
	outtextxy(10,170,"Class -<Economy>E OR <Business>B");
	gotoxy(55,12.5);
	cin>>ch4;
	outtextxy(10,210,"No. of Adult");
	gotoxy(50,15);
	cin>>ad;
	outtextxy(10,250,"No. of Children");
	gotoxy(50,18);
	cin>>ch;
	outtextxy(10,290,"Return Date");
	gotoxy(50,21);
	gets(dte2);
	outtextxy(10,330,"You Have to pay");
	if(ch4=='B' || ch4=='b')
	amt=(ad*2000)+(ch*3000)+(ad*2000)+(ch*3000);
	else if(ch4=='E' || ch4=='e')
	amt=(ad*2500)+(ch*1500)+(ad*2500)+(ch*1500);
	gotoxy(50,23);
	cout<<amt<<" Rs.";

	settextstyle(1,0,4);
	outtextxy(430,10,"BOOKING");
	settextstyle(1,1,1);
	outtextxy(460,100,"-Press 1 for booking, 2 for Reshedule");
	gotoxy(23,26);
	cin>>book;
	switch(book)
	{
		case 1:	       gotoxy(1,25);
				cout<<"    Hello! '"<<ch0<<"' You ticket is booked from the city "<<ch1<<" to\n "<<ch2<<" on "<<ch3<<" And your departure on dte2"<<" You will get your \n ticket from our service offices.\n\tSo Thakyou for using our service";
				break;
		case 2:
				roundtrip();
				break;
		default:	exit(0);
	}


}
void oneway()
{
	cleardevice();
	int gd=DETECT;
	int gm;
	char name1[20],cty1[20],cty2[20],ch3[20],cls[20];
	int dat,chil,ad,book;
	long amnt;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	settextstyle(3,0,3);
	setbkcolor(8);
	setcolor(2);
	outtextxy(10,10,"Name of the Passenger");
	gotoxy(50,2);
	cin>>name1;
	outtextxy(10,50,"Boarding From");
	gotoxy(50,5);
	cin>>cty1;
	outtextxy(10,90,"Arrival Point");
	gotoxy(50,8);
	cin>>cty2;
	outtextxy(10,130,"Departure Date");
	gotoxy(50,10);
	cin>>dat;
	outtextxy(10,170,"Class -<Economy>	<Business>");
	gotoxy(50,13);
	cin>>cls;
	outtextxy(10,210,"No. of Adult");
	gotoxy(50,15);
	cin>>ad;
	outtextxy(10,250,"No. of Children");
	gotoxy(50,18);
	cin>>chil;
	outtextxy(10,290,"You Have to pay");
	amnt=(ad*2000)+(chil*3000);
	gotoxy(50,20);
	cout<<amnt<<" Rs.";

	settextstyle(1,0,4);
	setlinestyle(3,0,3);
	line(450,10,450,500);
	outtextxy(460,10,"BOOKING");
	settextstyle(1,1,4);
	outtextxy(500,100,"-Press 1 for booking");
	gotoxy(23,26);
	cin>>book;
	switch(book)
	{
		case 1:	       gotoxy(10,23);
				cout<<"Hello! '"<<name1<<"' You ticket is booked from the city "<<cty1<<" to\n "<<cty2<<" on "<<dat<<" You will get your ticket from our service Points.\n\tSo Thakyou for using our service";
				break;
		default:	exit(0);
	}


}
void multicity()
{
	cleardevice();
	int gd=DETECT;
	int gm;
	float amount;
	char name[20],city1[20],cit1[20],clas[20],city2[20],cit2[20];
	int date1,date2,adult,chil,book;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	settextstyle(1,0,3);
	setbkcolor(15);
	setcolor(1);
	outtextxy(10,10,"Name of the Passenger");
	gotoxy(50,2);
	gets(name);
	outtextxy(10,50,"Boarding From ");
	outtextxy(20,80,"City 1 ");
	gotoxy(50,7);
	gets(city1);
	outtextxy(10,110,"Arrival Point");
	outtextxy(20,130,"City 1 ");
	gotoxy(50,10);
	gets(cit1);
	outtextxy(10,160,"Departur Date");
	gotoxy(50,12);
	cin>>date1;
	outtextxy(10,180,"Boarding From");
	outtextxy(20,210,"City 2");
	gotoxy(50,15);
	gets(city2);
	outtextxy(10,240,"Arrival Point");
	outtextxy(20,260,"City 2");
	gotoxy(50,17);
	gets(cit2);
	outtextxy(10,280,"Departure Date");
	gotoxy(50,19);
	cin>>date2;
	outtextxy(10,300,"Class -<Economy>	<Business>");
	gotoxy(50,20);
	gets(clas);
	outtextxy(10,320,"No. of Adult");
	gotoxy(50,22);
	cin>>adult;
	outtextxy(10,340,"No. of Children");
	gotoxy(50,23);
	cin>>chil;
	outtextxy(10,360,"You Have to pay");
	gotoxy(50,25);
	amount=adult*3000+chil*4000;
	cout<<amount;

	settextstyle(1,0,4);
	outtextxy(430,10,"BOOKING");
	settextstyle(1,1,4);
	outtextxy(460,100,"-Press 1 for booking");
	gotoxy(23,26);
	cin>>book;
	switch(book)
	{
		case 1:	       gotoxy(0,30);
				cout<<"Hello! "<<name<<" You ticket is booked from the city "<<city1<<" to "<<cit1<<" on "<<date1<<" and from the city "<<city2<<" to "<<cit2<<" on "<<date2<<" You will get your ticket from our service Points.So Thakyou for using our service";
				break;
		default:	exit(0);
	}

}




void menu2()
{

	cleardevice();
	//initgraph(&gd,&gm,"C:\\tc\\bgi");
	settextstyle(2,0,12);
	setbkcolor(1);
	setcolor(14);
	setlinestyle(3,3,3);
	line(400,50,400,100);
	line(400,50,100,50);
	line(400,100,100,100);
	line(100,100,100,200);
	line(100,200,500,200);
	line(500,200,500,250);
	line(500,250,100,250);
	outtextxy(0,50,"DOMESTIC BOOKING");
	outtextxy(0,200,"INTERNATIONAL BOOKING");
	settextstyle(1,0,2);
	setcolor(6);
	outtextxy(10,300,"Enter 'D' for domestic Booking");
	outtextxy(10,350,"Enter 'I' for International Booking");
	outtextxy(10,380,"Choice");
	}

void menu3()
{
	cleardevice();
	//initgraph(&gd,&gm,"C:\\tc\\bgi");
	settextstyle(3,0,8);
	setbkcolor(1);
	setcolor(14);
	line(1,30,550,30);
	line(550,30,550,140);
	line(550,140,420,140);
	line(420,140,420,400);
	line(420,400,600,400);


	outtextxy(20,40,"F L I G H T S");
	settextstyle(2,0,8);
	setcolor(10);
	outtextxy(100,200,"(1)	O N E  W A Y");
	outtextxy(100,300,"(2)	R O U N D  T R I P");
	outtextxy(100,400,"(3)	M U L T I  C I T Y");
	setcolor(5);
	settextstyle(4,0,2);
	outtextxy(450,400,"Enter  your  choice");


}
void menu4(char ch5)
{
	cleardevice();
       //	initgraph(&gd,&gm,"C:\\tc\\bgi");
	settextstyle(2,0,10);
	if(ch5=='d'||ch5=='D')

	outtextxy(30,10,"Domestic Flights");
	else if(ch5=='i'||ch5=='I')
	outtextxy(30,10,"International Flights");

	settextstyle(3,0,8);
	setbkcolor(0);
	setcolor(6);
	outtextxy(100,40,"AIRLINES");
	settextstyle(1,0,2);
	setcolor(15);
	setlinestyle(1,4,3);
	//circle(525,140,10);
	line(450,50,450,100);
	line(450,100,500,100);
	line(500,100,500,150);
	line(500,150,550,150);
	line(550,150,550,200);
	line(550,200,600,200);
	line(600,200,600,250);
	line(1,55,450,55);
	line(600,250,650,250);
	setcolor(10);
	outtextxy(50,200,"press 1 for-INDIGO");

	outtextxy(50,250,"press 2 for- SPICEJET");
	outtextxy(50,300,"press 3 for-JET AIRWAYS");
	outtextxy(50,350,"press 4 for-JET KONNECT");
	outtextxy(50,400,"press 5 for-AIR INDIA");
	setcolor(14);
	outtextxy(350,300,"Enter your choice");

}
void fun()
{
 gotoxy(72,20);
 int in;
 cin>>in;
 switch(in)
 {
	case 1:		menu3();
			break;
	case 2:         menu3();
			break;
	case 3:		menu3();
			break;
	case 4:		menu3();
			break;
	case 5:         menu3();
			break;
	default:        exit(0);
			break;
 }
}

void fun2()
{

	int i;
	gotoxy(45,20);
	cin>>i;
	switch(i)
	{
		case 1:		oneway();
				break;
		case 2:		roundtrip();
				break;
		case 3 :	multicity();
				break;
		default:	exit(0);

		}

}

void main()
{
int gd=DETECT;
int gm;

initgraph(&gd,&gm,"C:\\turboc3\\bgi");
clrscr();
start:
int fun1;
char ch1,ch5;
menu1();
gotoxy(37,20.8);
	cin>>fun1;

	switch(fun1)
	{
		case 1:
				start1:
				menu2();
				gotoxy(12,25.5);
				cin>>ch1;
				switch(ch1)
				{

					case 'd':
							menu4('d');
							fun();
							fun2();
							break;
					case 'D':	menu4('D');
							fun();
							fun2();
							break;
					case 'I':	menu4('I');
							fun();
							fun2();
							break;
					case 'i':	menu4('i');
							fun();
							fun2();
							break;
					default:	cout<<"Wrong input";
							goto start1;

				}
				break;
		case 2:         exit(0);
				break;
		default:	cout<<"Wrong input";
				goto start;

	}
getch();
}