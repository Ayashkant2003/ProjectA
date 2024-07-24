#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "I_Printable.h"
#include <string>




class Account: public I_Printable
{
public:
    string name;
    double balance;
    static constexpr const char *def_name="Unnamed Account";
    static constexpr const double def_balance=0.0;
    
    Account(string name=def_name,double balance=def_balance);
    
    virtual void print(ostream &os)const override
    {
        os<<"[Account name:"<<name<<" Balance:"<<balance<<"]";
    }
        
    virtual bool withdraw(double amount)=0;
    virtual bool deposit(double amount)=0;
    virtual ~Account(){}

};

#endif // ACCOUNT_H
