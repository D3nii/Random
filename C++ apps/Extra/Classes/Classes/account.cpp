//
//  account.cpp
//  Classes
//
//  Created by Danii on 9/17/19.
//  Copyright © 2019 Danii. All rights reserved.
//

#include "account.h"

using namespace std;

Account::Account(void):balance(0)
{
    
}

vector<string> Account::Report()
{
    vector<string> report;
    report.push_back("Balance is " + to_string(balance));
    report.push_back("Transactions: ");
    for (auto t:log)
    {
        report.push_back(t.Report());
    }
    report.push_back("---------------");
    return report;
}

bool Account::deposit(int amt)
{
    if(amt >=0)
        {
            balance += amt;
            log.push_back(Transaction(amt, "Deposit"));
            return true;
        }
        else
        {
            return false;
        }
}

bool Account::withdraw(int amt)
{
        if(amt >=0)
        {
            if(balance >= amt)
            {
                balance -= amt;
                log.push_back(Transaction(amt, "Withdraw"));
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
}
