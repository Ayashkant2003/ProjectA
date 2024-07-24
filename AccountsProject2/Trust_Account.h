#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H

#include "Savings_Account.h"

using namespace std;

class Trust_Account:public Savings_Account
{
public:

    double int_rate;
    static constexpr const double def_int_rate=5.0;
    static constexpr const char *def_name="Unnamed Trust Account";
    static constexpr const double def_balance=0.0;
    int withdraw_count;
    virtual void print(ostream &os)const override
    {
        os<<"[Trust Account name:"<<name<<" Balance:"<<balance<<" Interest rate:"<<int_rate<<" Withdraw count:"<<withdraw_count<<"]";
    }
    
    virtual bool withdraw(double amount) override
    {
        if(balance>=amount && withdraw_count<3)
        {   
            cout<<"withdraw successful from Trust Account:"<<name<<endl;
            ++withdraw_count;
            return true;
            
        }
        else
            return false;
    }
    
    virtual bool deposit(double amount) override
    {
        if(amount>=5000)
        {
            
            balance+=50;
            balance+=amount*(int_rate/100);
            cout<<"Deposit successful to Trust Account:"<<name<<endl;
            return true;            
        }
        else
            return false;
            
    }
    



    Trust_Account(string name=def_name,double balance=def_balance, double int_rate=12);
    virtual ~Trust_Account() {}

};

#endif // TRUST_ACCOUNT_H
