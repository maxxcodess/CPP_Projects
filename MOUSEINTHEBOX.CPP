#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <process.h>
#include <stdlib.h>
#include <time.h>

    void main()
     {
       clrscr();
 {
    clrscr();
    char ch[30], O=219;    int i, count = 0;
    char A1=218, A2=196 , A3=191 , B1=192 ,B2=217, B3=179;

    _setcursortype(_NOCURSOR);

    for(int m=1 ; m<100 ; ++m)
   {
     clrscr();

    if(kbhit())
     break;


    cout<<"\n\n\n\n\n\n\t   Loading Game "<<m+1<<"%";
    gotoxy(4,10);
    cout<<A1;  for(i=0 ; i<=71 ; ++i) cout<<A2;  cout<<A3;
    cout<<"\n   "<<B3;     gotoxy(77,11);        cout<<B3<<"\n";
    cout<<"   "<<B1;  for(i=0 ; i<=71 ; ++i) cout<<A2;  cout<<B2;

	gotoxy(6,11);
       for(int l=1 ; l<m*0.71 ; ++l)
	cout<<O;
       delay(40);

       if(m%26==0) delay(1000);
     }
    gotoxy(15,15);
    cout<<"Enter to Continue...";
    getch();

  }


       time_t t1, t2;

	 int p=0, x=5, y=5 ;     char mouse = 002, cheeze = 254 ;

	 for(int i=20 ; i<50 ; i++)
	  {
	    gotoxy(i,5);
	    cout<<"Mouse in the Box";
	    for(int j=0 ; j<i ;j++) cout<<".";
	    delay(100);
	    clrscr();
	  }

	 for(i=50 ; i>=30 ; i--)
	  {
	    gotoxy(i,5);
	    cout<<"Run for Cheeze";
	    for(int j=0 ; j<i ; j++) cout<<".";
	    delay(100);
	    clrscr();
	  }

	cout<<"\n\n\t\t INSTRUCTION\n"
	    <<"\n\n\t1. You need to take the Mouse ' "<<mouse<<" ' in the box"
	    <<"\n\t   to its Cheeze ' "<<cheeze<<" ' ."
	    <<"\n\n\t2. Use keys 8, 4, 5, 6 to move it."
	    <<"\n\n\t3. The timer below shows the time for which the box will"
	    <<"\n\t   remain stationary."
	    <<"\n\n\t4. Press Esc to Quit game."
	    <<"\n\n\n\t\t Got it ?";
	getch();

       clrscr();
       randomize();     int Time = 0, tt=0, n=0, cx, cy, flag = 1;

       t1 = time(NULL);

	  while(x!=cx+2 || y!=cy+1)
       {
	     if(Time==0)
	      {   Time=random(10);
		  cx=random(74)+1;      cy=random(20)+1;
	      }

	     n++;

	     if(n%100==0)
	      {
		Time--;
		n-100;  tt++;
	      }

	     gotoxy(cx,cy);

	     cout<<"+----+";      gotoxy(cx,cy+1);
	     cout<<"|    |";      gotoxy(cx,cy+2);
	     cout<<"+----+";
	     gotoxy(cx+2,cy+1);
	     cout<<cheeze;
	     gotoxy(x,y);
	     cout<<mouse<<"\a";

	       if(kbhit())
		{
		   p = getch();

		   switch(p)
		    {
		      case '8' : y--;    break;
		      case '4' : x--;    break;
		      case '5' : y++;    break;
		      case '6' : x++;    break;
		      case 27  : {
				   flag=0;
				   goto out;
				 }       break;
		      default: gotoxy(x,y);    break;
		    }

		   if(x<2)
		    x++;
		   else if(x==79)
		    x--;
		   else if(y<2)
		    y++;
		   else if(y==25)
		    y--;

		}
	      gotoxy(65,25);
	      cout<<"Time : "<<Time<<" sec";
	      delay(2);      clrscr();
	   }

	  out:      clrscr();        gotoxy(36,12);

	t2 = time(NULL);

	   if(flag==0)
	    cout<<"Mouse still out !!!";
	  else
	    cout<<"Nice Played";

	 cout<<"\n\n\t\t\tTotal Time took :\t"<<t2-t1<<" sec";

       delay(5000);

       getch();
     }








































