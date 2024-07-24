#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include "Account.h"



using namespace std;




class Savings_Account:public Account
{
public:
    double int_rate;
    static constexpr const double def_int_rate=5.0;
    static constexpr const char *def_name="Unnamed Savings Account";
    static constexpr const double def_balance=0.0;
    
    Savings_Account(string name=def_name,double balance=def_balance,double int_rate=def_int_rate);
    
    virtual void print(ostream &os)const override
    {
        os<<"[Savings Account name:"<<name<<" Balance:"<<balance<<" Interest rate:"<<int_rate<<"]";
    }
    
    virtual bool withdraw(double amount) override
    {
        if(balance>=amount)
        {   
            balance-=amount;
            cout<<"withdraw successful from Savings Account:"<<name<<endl;
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
            balance+=amount*(int_rate/100);
            cout<<"Deposit successful to Savings Account:"<<name<<endl;
            return true;
        }
    }
    
    
    virtual ~Savings_Account() {}

};

#endif // SAVINGS_ACCOUNT_H
