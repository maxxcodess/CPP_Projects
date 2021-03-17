#include<iostream>
#include<conio.h>

using namespace std;

  int main()
  {

    char ch[20];    int i, count = 0;

    cout<<"\n\n\t\tEnter Password :\t";
     for(i=0 ; i<20 ; i++)
      {
	ch[i] = getch();
	if(ch[i]==' ')     break;
	cout<<"*";
	count++;
      }

    cout<<"\n\n\t\tEntered Password is :\t";
    for(i=0 ; i<count ; i++)
     cout<<ch[i];

    return 0;
  }
