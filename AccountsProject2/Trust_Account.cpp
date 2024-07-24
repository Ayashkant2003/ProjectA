#include "Trust_Account.h"

Trust_Account::Trust_Account(string name,double balance,double int_rate):Savings_Account{name,balance},int_rate{int_rate},withdraw_count {0}
{
}


