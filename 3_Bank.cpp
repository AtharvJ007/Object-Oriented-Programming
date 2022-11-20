/*
Cycle 1
Program 3 : Bank account
Done by : Atharv J
Reg No : 20220028
Date: 09/11/2021
*/
#include <iostream>
using namespace std;

class Bank{
    private:
        string name;
        string type;
        long int account_no;
        double balance;
    public:
        void initialization();
        void checkBalance();
        void withdraw();
        void deposit();
};

void Bank::initialization(){
    name="Atharv J";
    account_no=343211;
    type="savings";
    balance =0;
}

void Bank::checkBalance(){
    cout<<"\nName : "<<name <<endl;
    cout<<"Balance of your account is : "<<balance<<endl;

}
void Bank::withdraw(){
    int amount;
    checkBalance();
    cout<<"Enter amount wanted to withdraw:";
    cin>>amount;

    if(balance==0){
        cout<<"CANNOT WITHDRAW"<<endl;
    }else if(amount>balance){
         cout<<"CANNOT WITHDRAW"<<endl;
    } else{
        balance -= amount;
        checkBalance();
    }
    
}

void Bank::deposit(){
    int amount;
    cout<<"Enter amount wanted to deposit:";
    cin>>amount;
    balance += amount;

    checkBalance();
}

int main(){
    int choice,option;
    //object
    Bank user1;
    user1.initialization();
    
    do{
        cout<<"\nPlease select an option: "<<endl;
        cout<<"\t Enter 1 for deposit "<<endl;
        cout<<"\t Enter 2 for check balance and withdraw"<<endl;
        cout<<"\t Enter 3 for check balance\n Enter the option here:";
        cin>>choice;
        switch(choice){
        case 1: 
            user1.deposit();
            break;
        case 2:
            user1.withdraw();
            break;
        case 3:
            user1.checkBalance();
            break;
        default:
            cout<<"Invalid entry:";
            break;
        }


        cout<<"Do you want to continue? if yes enter 1 here: ";
        cin>>option;
    }while(option==1);
    return 0;
}

/*
SAMPLE INPUT AND OUTPUT
Please select an option:
         Enter 1 for deposit 
         Enter 2 for check balance and withdraw
         Enter 3 for check balance
 Enter the option here:1
Enter amount wanted to deposit:5000

Name : Atharv J
Balance of your account is : 5000
Do you want to continue? if yes enter 1 here: 1
Please select an option: 
         Enter 1 for deposit 
         Enter 2 for check balance and withdraw
         Enter 3 for check balance
 Enter the option here:2

Name : Atharv J
Balance of your account is : 5000
Enter amount wanted to withdraw:4000

Name : Atharv J
Balance of your account is : 1000
Do you want to continue? if yes enter 1 here: 0
*/

