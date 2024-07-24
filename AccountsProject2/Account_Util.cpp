#include "Account_Util.h"
#include <iostream>


void display(const vector <Account*> &accounts)
{
    cout<<"\n===============Accounts==============="<<endl;
    for(const auto acc:accounts)
        cout<<*acc<<endl;
}
void withdraw(vector <Account*> &accounts,double amount)
{
    cout<<"\n===============Withdrawing from Accounts==============="<<endl;
    for( auto acc:accounts)
    {
        if(acc->withdraw(amount))
            cout<<"Withdrew"<<amount<<" from "<<*acc<<endl;
        else
            cout<<"Failed to withdraw "<<amount<<" from "<<*acc<<endl;
    }
}
void deposit(vector <Account*> &accounts,double amount)
{
    cout<<"\n===============Depositing to Accounts==============="<<endl;
     for( auto acc:accounts)
    {
        if(acc->deposit(amount))
            cout<<"Deposited "<<amount<<" to "<<*acc<<endl;
        else
            cout<<"Failed to deposit "<<amount<<" to "<<*acc<<endl;
    }
}




