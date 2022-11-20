/*
Cycle 2
Program 4 : Double
Done by : Atharv J
Reg No : 20220028
Date: 07/12/2021
*/

#include <iostream>

using namespace std;

class Test{
    public:
        double power(double ,int );
        int power(int , int);
        char power(char , int);
};

double Test::power(double n,int p){
    double result =n;

    for(int i=1;i<p;i++){
        result = result *n;
    }
    return result;
}
int Test::power(int n,int p){
    int result =n;

    for(int i=1;i<p;i++){
        result = result *n;
    }
    return result;
}
char Test::power(char n,int p){
    char result =n;

    for(int i=1;i<p;i++){
        result = result *n;
    }
    return result;
}

int main(){
    double d;
    char c;
    int p;
    int data;

    Test obj;

    cout<<"Enter value of p:";
    cin>>p;
    cout<<"Enter double value of n:";
    cin>>d;
    cout<<"Enter char value of n :";
    cin>>c;
    cout<<"Enter int value of n :";
    cin>>data;

    cout<<"Passing double and int to power function, result= "<<obj.power(d,p)<<endl;
    cout<<"Passing int and int to power function, result= "<<obj.power(data,p)<<endl;
    cout<<"Passing char and int to power function, result= "<<obj.power(c,p)<<endl;
   
    return 0;
}

/*
SAMPLE INPUT :
Enter value of p:2
Enter double value of n:2.789
Enter char value of n :c
Enter int value of n :4
Passing double and int to power function, result= 7.77852
Passing int and int to power function, result= 16
Passing char and int to power function, result= I
*/
