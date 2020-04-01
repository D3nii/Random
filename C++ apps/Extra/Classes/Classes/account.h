//
//  account.h
//  Classes
//
//  Created by Danii on 9/17/19.
//  Copyright © 2019 Danii. All rights reserved.
//


#define account_h
#include <vector>
#include <string>
#include "transaction.h"

class Account
{
private:
    int balance;
    std::vector<Transaction> log;
    
public:
    Account();
    std::vector<std::string> Report();
    bool deposit(int amt);
    bool withdraw(int amt);
};
