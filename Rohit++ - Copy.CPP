/*
		  __________________________________________
		  |````````````````````````````````````````|
		  |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|
		  |     TECHNOTRONIC LABORATORIES LTD      |
		  |                                        |
		  |             ROHIT KUMAR                |
		  |                XII-D                   |
		  |             ROLL NO. 27                |
		  |  			                   |
		  |       SUBMITTED TO:                    |
		  |               MRS MONIKA VERMA         |
		  |                                        |
		  |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|
		  |________________________________________|


*/

//     1 MNGR ; 2 EMP ; 3 Tech
// Header files used in the program

#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <stdio.h>
#include <string.h>
#include <process.h>

// The class for an employee

class Employee
{       char empid[11];
        char empname[50];
        char designation[40];
        char dob[20];
        char doj[20];
        char sex[7];
        char addperm[100];
        char addloc[100];
        char contact1[15];
        char contact2[15];
        char email[40];
        char father[30];
        char mother[30];
        char qualification[100];
        char PANno[11];
        char bankaccno[13];
        char password[30];
    public:
	void get_info()
	{
	    cout<<"\n\nEnter employee's name: ";
		gets(empname);
	    cout<<"\n\nEnter Employee's ID: ";
	    gets(empid);
	    cout<<"\n\nEnter password : ";
	    gets(password);
	    cout<<"\n\nEnter Designation: ";
	    gets(designation);
	    cout<<"\n\nEnter Date Of Birth(DD-MM-YYYY): ";
	    gets(dob);
	    cout<<"\n\nEnter Date Of Joining(DD-MM-YYYY): ";
	    gets(doj);
	    cout<<"\n\nEnter sex: ";
	    gets(sex);
	    cout<<"\n\nEnter Your Local Address: ";
	    gets(addloc);
	    cout<<"\n\nEnter permanent address: ";
	    gets(addperm);
	    cout<<"\n\nEnter your primary contact no.: ";
	    gets(contact1);
	    cout<<"\n\nEnter your secondary contact no.: ";
	    gets(contact2);
	    cout<<"\n\nEnter your Email: ";
	    gets(email);
	    cout<<"\n\nEnter your Father's name: ";
	    gets(father);
	    cout<<"\n\nEnter your mother's name: ";
	    gets(mother);
	    cout<<"\n\nEnter Details of your Qualification: ";
	    gets(qualification);
	    cout<<"\n\nEnter your PAN(permanent account no): ";
	    gets(PANno);
	    cout<<"\n\nEnter your bank account no.: ";
	    gets(bankaccno);

	}
	void show_info()
        {
	    cout<<"\n\n\tEmployee's ID: ";
	    cout<<empid;
	    cout<<"\n\n\tEmployee's name: ";
	    cout<<empname;
	    cout<<"\n\n\tDesignation: ";
	    cout<<designation;
	    cout<<"\n\n\tDate of Birth: ";
	    cout<<dob;
	    cout<<"\n\n\tDate of Joining: ";
	    cout<<doj;
	    cout<<"\n\n\tSex: ";
	    cout<<sex;
	    cout<<"\n\n\tLocal Address: ";
	    cout<<addloc;
	    cout<<"\n\n\tPermanent Address: ";
	    cout<<addperm;
	    cout<<"\n\n\tContact Number(s): ";
	    cout<<contact1<<"\n"<<contact2;
	    cout<<"\n\n\tEmail Address: ";
	    cout<<email;
	    cout<<"\n\n\tFather's Name: ";
	    cout<<father;
	    cout<<"\n\n\tMother's Name: ";
	    cout<<mother;
	    cout<<"\n\n\tQualification Details: ";
	    cout<<qualification;
	    cout<<"\n\n\tPAN(Personal Account No.): ";
	    cout<<PANno;
	    cout<<"\n\n\tBank Account No.: ";
	    cout<<bankaccno;
	}

	void change(char data[])
	{
	    char changetemp[100];
	    gets(changetemp);
	    if(strcmp(changetemp,"\0"))
	    strcpy(data,changetemp);
	}
	void modify()

	{
	    void show_info();
	    cout<<"\nPlease enter new details:\nPress Enter to retain old one\n\n";
	    cout<<"\n\nEnter employee's name: ";
	    change(empname);
	    cout<<"\n\nEnter Employee's ID: ";
	    change(empid);
	    cout<<"\n\nEnter password : ";
	    change(password);
	    cout<<"\n\nEnter Designation: ";
	    change(designation);
	    cout<<"\n\nEnter Date Of Birth(DD-MM-YYYY): ";
	    change(dob);
	    cout<<"\n\nEnter Date Of Joining(DD-MM-YYYY): ";
	    change(doj);
	    cout<<"\n\nEnter sex: ";
	    change(sex);
	    cout<<"\n\nEnter Your Local Address: ";
	    change(addloc);
	    cout<<"\n\nEnter permanent address: ";
	    change(addperm);
	    cout<<"\n\nEnter your primary contact no.: ";
	    change(contact1);
	    cout<<"\n\nEnter your secondary contact no.: ";
	    change(contact2);
	    cout<<"\n\nEnter your Email: ";
	    change(email);
	    cout<<"\n\nEnter your Father's name: ";
	    change(father);
	    cout<<"\n\nEnter your mother's name: ";
	    change(mother);
	    cout<<"\n\nEnter Details of your Qualification: ";
	    change(qualification);
	    cout<<"\n\nEnter your PAN(permanent account no): ";
	    change(PANno);
	    cout<<"\n\nEnter your bank account no.: ";
	    change(bankaccno);
	}


	void encrypt();

	char *fetchid()
	{
	    return empid;
	}
	char *fetchname()
	{
	    return empname;
	}
	char *fetchdob()
	{
	    return dob;
	}
	char *fetchPANno()
	{
	    return PANno;
	}
	char *fetchdes()
	{
	    return designation;
	}
};

void Employee::encrypt()                                   // For protecting account
{
    char pswd[30];
    cout<<"\nEnter The old Password(Max. 30)";
    cout<<"\nPress Enter if no password earlier: (3 attempts)\n";
    for(int i=1; ; i++)
    {   if(i==4)
	{
	    cout<<"\nYour attempts Are exhausted!!!\n";
	    break;
	}
	gets(pswd);
	if(!strcmp(password,pswd))
	{
	    cout<<"\nEnter your new password:\n";
	    gets(password);
	    break;
	}
	else
	{
	    cout<<"\nIncorrect password, please enter correct one:\n";
	    continue;
	}
    }
}

// The data & functions used in the program, declared globally

void Add_records();
void Show_records1();
void Show_records4();
void Modify_records1();
void Modify_records4();
void Export_records1();
void Export_records4();
void Delete_records1();
void Delete_records4();
void Encrypt_records1();
void Encrypt_records4();
void Print_records1();
void Print_records4();
void Display_all();
void Employees_list();
void Search1();
void Search2();
void Search3();
void Search4();
void Search5();
void Search6();
void error(char);
Employee emp;
char res[50];
fstream fio("Employees Information.txt", ios::in | ios::out | ios::binary | ios::app);

// Body of main

void main()
{

{
clrscr();

	    cout<<"\n\n\t\a    Welcome to Company Management Software Intialisation \n";


	    for(int i=0 ; i<41 ; ++i)
	     { for(unsigned long j=0 ; j<=30000000 ; ++j)
		;
		cout<<". "; }

	    for(i=0 ; i<100 ; ++i)
	      {
		 for(unsigned long j=0 ; j<10000000 ; ++j);   clrscr();
		  cout<<"\n\n\n\tLoading "<<(i+1)<<"%\n\n     ";

		 for(int n=1 ; n<=i*0.71 ; ++n)
		  cout<<"|";

		 if((i%23)==1)
		   for(unsigned long j=0 ; j<500000000 ; ++j);

	      }


	    cout<<"\n\n\n\n\n\t\tIntialisation Complete \n\t";
	   cout<<"Thank you for your patience \n\n\n\t\t\t";
	   cout<<" Opening ";

	     for(i=0 ; i<=3 ; ++i)
	      { for(unsigned long j=0 ; j<200000000 ; ++j);
	      cout<<". \a"; } goto end;

	  getch();
	  end :
}

    clrscr();
    int choice;    char sig[50];
    char ch='y';
    cout<<"\n********************************************************************************";
    cout<<"\n--------------------------------------------------------------------------------";
    cout<<"\n\n                         ";
   char N[29]="TECNOTRONICS LABORATORIES LTD";
    for(int k=0 ; k<29 ; ++k)
     {
      for(unsigned long m=0 ; m<=70000000 ; ++m);
	 cout<<N[k];
     }
for(unsigned long m=0 ; m<=500000000 ; ++m); cout<<endl;

    cout<<"\n--------------------------------------------------------------------------------";
    cout<<"\n********************************************************************************";
    cout<<"\n\n\n\n   Welcome to the Information center of TECHNOTRONICS LABORATORIES LTD";
    getch();


   int user, ser=0;
    rohit:
    cout<<"\n\n\n\n\t\tGive User Signature :\t";
    cin>>user;

     switch (user)
      {
       case 1 :  cout<<"\n\t\tTransferring to Manager Account ";
		  for(int seb=0 ; seb<4 ; ++seb)
		   {for(unsigned long m=0 ; m<100000000 ; ++m);  cout<<". \a"; }
		  goto MNGR;
		  break;

       case 2  :  cout<<"\n\t\tTransferring to Service Account ";        ser=1;
		  for(int kilo=0 ; kilo<4 ; ++kilo)
		   {for(unsigned long m=0 ; m<100000000 ; ++m); cout<<". \a";}
		  goto EMP;
		  break;

       case 3  :  cout<<"\n\t\tTransferring to Technition's Account ";       ser=2;
		  for(int km=0 ; km<3 ; ++km)
		   {for(unsigned long p=0 ; p<100000000 ; ++p); cout<<". \a";}
		  goto EMP;
		  break;

       default :  cout<<"Give correct Signature!!!";
		  goto rohit;
		  break;
      }


	EMP:

    while(ch=='y'||ch=='Y')
    {



	clrscr();
	cout<<"\n\n\tWhat would you like to do?\n";
	cout<<"\n\t    1. Display An Existing Record.";
	cout<<"\n\t    2. Modify an existing record.";
	cout<<"\n\t    3. Change password.";
	cout<<"\n\t    4. Latest Company Announcements";
	cout<<"\n\t    0. Exit.";
	cout<<"\n\n\n\t\tEnter Your choice (1-4,0): ";
	    cin>>choice;
	    switch(choice)
	    {

		case 1 : Search1();
			 break;
		case 2 : Search2();
			 break;
		case 3 : Search5();
			 break;
		case 4 :
		     switch (ser)
			{
			   case 1 :  	clrscr();
			   cout<<"\n\t1. Company is going payoff a BONUS of Rs.5000 this DIWALI !"
				 <<"\n\t2. NEW RECRUITMENTS will be addressed soon."
				 <<"\n\t3. Company is gonig to FINANCE a NEW DEAL with INTEL."
				 <<"\n\n\t\t     THANK YOU";  goto out;

			   case 2 :     clrscr();
			   cout<<"\n\t1. Company is going payoff a BONUS of Rs.5000 this DIWALI !"
				 <<"\n\t2. NEW RECRUITMENTS will be addressed soon."
				 <<"\n\t3. TECNITIONS be well aware of the NEW CRIMSON MACHINES going to be\n\t   deployed TOMORROW."
				 <<"\n\n\t\t     THANK YOU";  goto out;
			}

		case 0 : char ex;
			 cout<<"\n\n\t\aAre you sure you want to exit(y/n)?:    ";
			 cin>>ex;
			 if(ex=='y' || ex=='Y')
			 {
			     cout<<"\nThanks for using the services .";
			     getch();
			     exit(0);
			 }

		default: cout<<"\nPlease enter A valid choice: ";
			 break;
	    }   out:
	cout<<"\n\n\t\t\aDo you want to do more?(y/n):";
	cin>>ch;
    }
    fio.close();
 goto close;

     MNGR:

    while(ch=='y'||ch=='Y')
    {
	clrscr();
	cout<<"\n\n\tWhat would you like to do?\n";
	cout<<"\n\t    1. Add New Record.";
	cout<<"\n\t    2. Display An Existing Record.";
	cout<<"\n\t    3. Modify an existing record.";
	cout<<"\n\t    4. Export a record to a file.";
	cout<<"\n\t    5. Delete an existing Record.";
	cout<<"\n\t    6. Change password.";
	cout<<"\n\t    7. Print A record(hard copy).";
	cout<<"\n\t    8. Display list.";
	cout<<"\n\t    9. Show All Records.";
	cout<<"\n\t    0. Exit.";
	cout<<"\n\n\n\t\tEnter Your choice (1-9,0): ";
	    cin>>choice;
	    switch(choice)
	    {
		case 1 : Add_records();
			 break;
		case 2 : Search1();
			 break;
		case 3 : Search2();
			 break;
		case 4 : Search3();
			 break;
		case 5 : Search4();
			 break;
		case 6 : Search5();
			 break;
		case 7 : Search6();
			 break;
		case 8 : Employees_list();
			 break;
		case 9 : Display_all();
			 break;
		case 0 : char ex;
			 cout<<"\n\n\t\aAre you sure you want to exit(y/n)?:    ";
			 cin>>ex;
			 if(ex=='y' || ex=='Y')
			 {
			     cout<<"\nThanks for using the services .";
			     getch();
			     exit(0);
			 }
		default: cout<<"\nPlease enter A valid choice:\n";
			 break;
	    }
	cout<<"\n\t\t\aDo you want to do more?(y/n):";
	cin>>ch;
    }
    fio.close();     close:
    getch();
}
// End of main

void Add_records()      //to add records
{
	clrscr();
	cout<<"\nEnter the records of employee\n\n";
	emp.get_info();
	fio.write((char*)&emp, sizeof(emp));
}

void Show_records1()
{
    clrscr();
    char in='n';
    fio.seekp(0);
    while(!fio.eof())
    {
	fio.read((char*) & emp, sizeof(emp));
	if(!strcmp(emp.fetchid(),res))
	{
	    emp.show_info();
	    in='y';
	}
    }
    error(in);
}

void Show_records4()
{
    clrscr();
    char in='n';
    fio.seekp(0);
    while(!fio.eof())
    {
	fio.read((char*) & emp, sizeof(emp));
        if(!strcmp(emp.fetchPANno(),res))
        {
            emp.show_info();
            in='y';
        }
    }
    error(in);
}

void Modify_records1()
{
    clrscr();
    char in='n';
    fio.seekp(0);
    while(!fio.eof())
    {
        fio.read((char*) & emp, sizeof(emp));
        if(!strcmp(emp.fetchid(),res))
        {
            emp.modify();
	    in='y';
        }
    }
    error(in);
}

void Modify_records4()
{
    clrscr();
    char in='n';
    fio.seekp(0);
    while(!fio.eof())
    {
	fio.read((char*) & emp, sizeof(emp));
	if(!strcmp(emp.fetchPANno(),res))
	{
	    emp.modify();
	    in='y';
	}
    }
    error(in);
}

void Export_records1()
{
    clrscr();
    ofstream fout("Employee Record.txt", ios::out | ios::app | ios::binary);
    fio.seekp(0);
    while(!fio.eof())
    {
	fio.read((char*) & emp, sizeof(emp));
	if(!strcmp(emp.fetchid(),res))
	    fout.write((char*)&emp, sizeof(emp));
    }
    fout.close();
}

void Export_records4()
{
    clrscr();
    ofstream fout("Employee Record.txt", ios::out | ios::app | ios::binary);
    fio.seekp(0);
    while(!fio.eof())
    {
	fio.read((char*) & emp, sizeof(emp));
	if(!strcmp(emp.fetchPANno(),res))
	    fout.write((char*)&emp, sizeof(emp));
    }
    fout.close();
}
void Delete_records1()
{

    clrscr();
    ofstream fileoff("temp.txt", ios::out | ios::app | ios::binary);
    fio.seekp(0);
    while(!fio.eof())
    {
	fio.read((char*) & emp, sizeof(emp));
	if(strcmp(emp.fetchid(),res))
	    fileoff.write((char*)&emp, sizeof(emp));
    }
    remove("Employees Information.txt");
    rename("temp.txt","Employees Information.txt");
    fileoff.close();
}

void Delete_records4()
{
    clrscr();
    ofstream fileoff("temp.txt", ios::out | ios::app | ios::binary);
    fio.seekp(0);
    while(!fio.eof())
    {
	fio.read((char*) & emp, sizeof(emp));
	if(strcmp(emp.fetchPANno(),res))
	    fileoff.write((char*)&emp, sizeof(emp));
    }
    remove("Employees Information.txt");
    rename("temp.txt","Employees Information.txt");
    fileoff.close();
}

void Encrypt_records1()
{
    char ans='n';
    fio.seekp(0);
    while(!fio.eof())
    {
	fio.read((char*) & emp, sizeof(emp));
	if(!strcmp(emp.fetchid(),res))
	{
	    emp.encrypt();
	    ans='y';
	}
    }
    error(ans);
}

void Encrypt_records4()
{
    char ans='n';
    fio.seekp(0);
    while(!fio.eof())
    {
	fio.read((char*) & emp, sizeof(emp));
	if(!strcmp(emp.fetchPANno(),res))
	{
	    emp.encrypt();
	    ans='y';
	}
    }
    error(ans);
}

void Print_records1()
{
    clrscr();
    char ans='n';
    fio.seekp(0);
    ofstream fout("PRN", ios::out | ios::app);
    while(!fio.eof())
    {
	fio.read((char*) & emp, sizeof(emp));
	if(!strcmp(emp.fetchid(),res))
	{
	    fout.write((char*)&emp, sizeof(emp));
	    ans='y';
	}
    }
    error(ans);
    fout.close();
}

void Print_records4()
{
    clrscr();
    char ans='n';
    fio.seekp(0);
    ofstream fout("PRN", ios::out | ios::app);
    while(!fio.eof())
    {
	fio.read((char*) & emp, sizeof(emp));
	if(!strcmp(emp.fetchPANno(),res))
	{
	    fout.write((char*)&emp, sizeof(emp));
	    ans='y';
	}
    }
    error(ans);
    fout.close();
}

void error(char ch)
{
    if(ch=='n')
	cout<<"\nRecord not found!!!";
}

void Display_all()
{
    clrscr();
    cout<<"\nThe Records of all the employees are as under\n";
    fio.seekp(0);
    while(!fio.eof());
    {
	fio.read((char*) & emp, sizeof(emp));
	fio.write((char*)&emp, sizeof(emp));
	emp.show_info();
    }
}

void Employees_list()
{
    clrscr();
    cout<<"\nEmployee ID\tName\tDesignation";
    fio.seekp(0);
    while(!fio.eof())
    {
	fio.read((char*) & emp, sizeof(emp));
	fio.write((char*)&emp, sizeof(emp));
	cout<<emp.fetchid()<<" \t"<<emp.fetchname()<<" \t"<<emp.fetchdes();
    }
}

void Search1()
{
    clrscr();
    int ops;
    cout<<"\nBy what you want to find record:\n";
    cout<<"\n1. EmployeeID.\n";
    cout<<"\n2. Employee's PAN No.:\n";
    cout<<"\n\n\t\tPlease Choose one (1-2): ";
    cin>>ops;
    switch(ops)
    {
	case 1 : cout<<"\nEnter Employee's ID:\n";
		 gets(res);
		 Show_records1();
		 break;
	case 2 : cout<<"\nEnter Employee's PAN No.:\n";
		 gets(res);
		 Show_records4();
		 break;
    }
}

void Search2()
{
    clrscr();
    int ops;
     cout<<"\nBy what you want to find record:\n";
    cout<<"\n1. EmployeeID.\n";
    cout<<"\n2. Employee's PAN No.:\n";
    cout<<"\n\n\t\tPlease Choose one (1-2): ";
    cin>>ops;
    switch(ops)
    {
	case 1 : cout<<"\nEnter Employee's ID:\n";
		 gets(res);
		 Modify_records1();
		 break;
    case 2 : cout<<"\nEnter Employee's PAN No.:\n";
		 gets(res);
		 Modify_records4();
		 break;
    }
}

void Search3()
{
    clrscr();
    int ops;
    cout<<"\nBy what you want to find record:\n";
    cout<<"\n1. EmployeeID.\n";
    cout<<"\n2. Employee's PAN No.:\n";
    cout<<"\n\n\t\tPlease Choose one (1-2): ";
    cin>>ops;
    switch(ops)
    {
	case 1 : cout<<"\nEnter Employee's ID:\n";
		 gets(res);
		 Export_records1();
		 break;
	case 2 :cout<<"\nEnter Employee's PAN No.:\n";
		 gets(res);
		 Export_records4();
		 break;
    }
}

void Search4()
{
    clrscr();
    int ops;
    cout<<"\nBy what you want to find record:\n";
    cout<<"\n1. EmployeeID.\n";
    cout<<"\n2. Employee's PAN No.:\n";
    cout<<"\n\n\t\tPlease Choose one (1-2): ";
    cin>>ops;
    switch(ops)
    {
	case 1 : cout<<"\nEnter Employee's ID:\n";
		 gets(res);
		 Delete_records1();
		 break;
	case 2 : cout<<"\nEnter Employee's PAN No.:\n";
		 gets(res);
		 Delete_records4();
		 break;
    }
}

void Search5()
{
    clrscr();
    int ops;
    cout<<"\nBy what you want to find record:\n";
    cout<<"\n1. EmployeeID.\n";
    cout<<"\n2. Employee's PAN No.:\n";
    cout<<"\n\n\t\tPlease Choose one (1-2): ";
    cin>>ops;
    switch(ops)
    {
	case 1 : cout<<"\nEnter Employee's ID:\n";
		 gets(res);
		 Encrypt_records1();
		 break;
	case 2 : cout<<"\nEnter Employee's PAN No.:\n";
		 gets(res);
		 Encrypt_records4();
		 break;
    }
}

void Search6()
{
    clrscr();
    int ops;
    cout<<"\nBy what you want to find record:\n";
    cout<<"\n1. EmployeeID.\n";
    cout<<"\n2. Employee's PAN No.:\n";
    cout<<"\n\n\t\tPlease Choose one (1-2): ";
    cin>>ops;
    switch(ops)
    {
	case 1 : cout<<"\nEnter Employee's ID:\n";
		 gets(res);
		 Print_records1();
		 break;
	case 2 : cout<<"\nEnter Employee's PAN No.:\n";
		 gets(res);
		 Print_records4();
		 break;
    }
}
