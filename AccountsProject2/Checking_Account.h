#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "Account.h"

using namespace std;

class Checking_Account:public Account
{
public:
    static constexpr const char *def_name="Unnamed Checking Account";
    static constexpr const double def_balance=0.0;
    
    virtual void print(ostream &os)const override
    {
        os<<"[Checking Account name:"<<name<<" Balance:"<<balance<<"]";
    }
    
    virtual bool withdraw(double amount) override
    {
        if(balance>=amount+1.5)
        {   
            amount+=1.5;
            balance-=amount;
            cout<<"withdraw successful from Checking Account:"<<name<<endl;
            return true;
            
        }
        else
            return false;
    }
    
    virtual bool deposit(double amount) override
    {
        if(amount<0)
            return false;
        else
        {
            balance+=amount;
            cout<<"Deposit successful to Checking Account:"<<name<<endl;
            return true;
        }
    }
    


    Checking_Account(string name=def_name,double balance=def_balance);
    virtual ~Checking_Account() {}

};

#endif // CHECKING_ACCOUNT_H
