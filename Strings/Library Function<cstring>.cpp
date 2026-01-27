// strlen(fname)     for name
// strcpy(fname)     for copy
//strcmp(fname,lname)      for compare
//strcat(fname,lname)
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char fname[20];
char lname[20];
char fullname[50];
cout<<"Enter your first name: ";
cin>>fname;
cout<<"Enter your last name: ";
cin>>lname;
cout<<"Hi " <<fname<<"! Your first name has "<<strlen(fname)<<"characters."<<endl<<"And your last name has "<<strlen(lname)<<"characters."<<endl;
strcpy(fullname,fname);
strcat(fullname, " ");
strcat(fullname,lname);
cout<<"Your Full name is: "<<fullname<<endl;
if((strcmp(fname,lname))==0)
cout<<"Both strings are equal."<<endl;
else
cout<<"Strings are not equal."<<endl;
return 0;
}

// OUTPUT
// Enter your first name: John
// Enter your last name: Winson
// Hi John! Your first name has 4 characters.
// And your last name has 6 characters.
// Your Full name is: John Winson
// Strings are not equal.