/*
Cycle 1
Program 1 : Phone number
Done by : Atharv J
Date: 02/11/2021
*/

// USAGE OF STRUCT 

#include <iostream>
using namespace std;

struct phone
{
    int area_code;
    int exchange;
    int number;
}n1,n2;

int main()
{
   n1.area_code=212;
   n1.exchange=767;
   n1.number=8900; 
    
 cout<<"-Enter the number-\nEnter area code : ";
 cin>>n2.area_code;
 cout<<"Enter exchange : ";
 cin>>n2.exchange;
 cout<<"Enter number : ";
 cin>>n2.number;
 
 cout<<"My number "<<n1.area_code<<" "<<n1.exchange<<" "<<n1.number<<"\n";
 cout<<"Your number "<<n2.area_code<<" "<<n2.exchange<<" "<<n2.number<<"\n";
 
 return 0;
}

/* 
SAMPLE INPUT
-Enter the number-
Enter area code : 212
Enter exchange : 567
Enter number : 1234

SAMPLE OUTPUT
My number 212 767 8900
Your number 212 567 1234
*/