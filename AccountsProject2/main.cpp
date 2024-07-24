#include <iostream>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include <vector>
#include "Account_Util.h"


using namespace std;



int main()
{
 
    cout<<boolalpha;
    Account *p1=new Savings_Account("Alina Rogers",50000);
    Account *p2=new Checking_Account("Mathew Murdock",20000);
    Account *p3=new Trust_Account("Frank Castle",15000,10);

    cout<<*p1<<endl;
    cout<<*p3<<endl;
    cout<<*p2<<endl;
    
    
    vector <Account*> accounts;
    accounts.push_back(p1);
    accounts.push_back(p2);
    accounts.push_back(p3);
   
    display(accounts);
    
    
    deposit(accounts,1000);
    withdraw(accounts,2000);
    
    
    
    delete p1;
    delete p2;
    delete p3;
    
    return 0;
}