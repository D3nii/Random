//
//  transaction.h
//  Classes
//
//  Created by Danii on 9/17/19.
//  Copyright © 2019 Danii. All rights reserved.
//

#include <string>

class Transaction
{
private:
    int amount;
    std::string type;
    
public:
    Transaction(int amt, std::string kind);
    std::string Report();
};
