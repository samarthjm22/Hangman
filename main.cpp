#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include <cstdlib>
#include<iomanip>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<process.h>
#include<time.h>

using namespace std;



int main()
{
	char choice;

	char cho;
	cout<<"\n\t\t HANGMAN, Developed by Samarth Modi";
	cout<<"\n\t\t         All Rights Reserved";
	cout<<"\n\t\t     Only for Non Commercial Use";
	cout<<"\n\n\n\t Do You ACCEPT the Terms and Conditions??\n\t Enter y to ACCEPT\n\t Enter Anything else to DECLINE, and exit";
	cout<<"\n\n\t Choice: ";
	cin>>cho;
	if(cho!='y')
	 exit(0);

	system("cls");

	do{
	system("cls");
	int i,j,k,x,att,len,flag=0;
	char hang[10],ans[50],guess[20],y[10];
    srand(time(NULL));
	char word[10][10]; //={"MUMBAI","SRINAGAR","KOLKATA","CHENNAI","HYDERABAD","CHANDIGARH","BANGLORE","DELHI","LUCKNOW","AHMEDABAD"};

	strcpy(word[0],"MUMBAI");
	strcpy(word[1],"SRINAGAR");
	strcpy(word[2],"KOLKATA");
	strcpy(word[3],"CHENNAI");
	strcpy(word[4],"HYDERABAD");
	strcpy(word[5],"CHANDIGARH");
	strcpy(word[6],"BANGLORE");
	strcpy(word[7],"DELHI");
	strcpy(word[8],"LUCKNOW");
	strcpy(word[9],"AHMEDABAD");

	x=rand()%10;
	strcpy(hang,word[x]);
	cout<<"\n**************************** WELCOME TO HANGMAN *******************************";
	cout<<"\n\n Following is an Indian city: ";
	cout<<"\n\n\n\t\t\t";
	len=strlen(hang);
	att=len*2;
	for(i=0;i<len;i++)
	{
		ans[(i*4)]=' ';
		ans[((i*4)+1)]='[';
		ans[((i*4)+2)]=' ';
		ans[((i*4)+3)]=']';
	}
	for(k=0;k<(len*4);k++)
		{
			cout<<ans[k];
		}

    gets(y);

	for(i=0;i<att;i++)
	{

		cout<<"\n\n--------------------------------------------------------------------------------";
		cout<<"\n Enter letter: ";
		gets(guess);
		guess[0]=toupper(guess[0]);
		for(j=0;j<len;j++)
		{
		  if(guess[0]==hang[j])
			  {
					ans[(j*4)+2]=guess[0];
					flag++;
			  }
		}

        system("cls");
        cout<<"\n**************************** WELCOME TO HANGMAN *******************************";
        cout<<"\n\n Following is an Indian city: ";
        cout<<"\n\n\n";

		if(flag==len)
			{
				system("cls");
				cout<<"\n\n\n\t\t Congratulations. YOU WON";
				cout<<"\n\n\t\t Word: ";
				puts(hang);
				cout<<"\t\t Attempts Used: "<<i+1;
				goto p;
			}
		cout<<"\t\t\t"  ;
		for(k=0;k<(len*4);k++)
		{
			cout<<ans[k];
		}
		cout<<"\n\n Attempts left: "<<(att-1-i);

	}
	system("cls");
	cout<<"\n\n\n\t\t All Attempts Used";
	cout<<"\n\n\t\t GAME OVER";
	cout<<"\n\n\t\t Word: ";
	puts(hang);

	p:
	cout<<"\n\n\n\n\n\t\t Do you want to play again?(y/n): ";
	cin>>choice;
	}while(choice=='y'||choice=='Y');

	return(0);
}

