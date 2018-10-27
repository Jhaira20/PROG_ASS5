/* 
Name: Nina Jaira Lael B. Cagomoc
Date: October 27, 2018
Program:Daily Routine
*/
#include<iostream>
using namespace std;

string time(int x);
int main()
{
	int a[5]; //int a[0] = Energy
	int i=1;
	char doing[37] [100];
	a[1]=4;
	a[0]=37;
	a[2]=00;
	
	while(true)
	{
		if (a[2]==60)
		{
			a[2]=00;
			a[1]=a[1]+1;
		}
		cout <<"by " << a[1] <<":"<<time(a[2]) << endl;
		cout <<"I am (enter):" ;
		cin. getline(doing[i],100);
		a[0]=a[0]+1;
		a[2]=a[2]+30;
		i++;
		
		if(a[0]<=0)
		{
			cout <<"physical and mental health has approaches to zero(0)";
			cout << "too tired!" << endl;
			cout <<"22:30, sleeping " << endl;
			break;
		}	
	}
	return 0;	
}
string time(int x) {
	if(x==0)
	{
		return "00";
	}
	else 
	{
		return "30";
	}
}
