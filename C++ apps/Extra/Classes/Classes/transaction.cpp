//
//  transaction.cpp
//  Classes
//
//  Created by Danii on 9/17/19.
//  Copyright © 2019 Danii. All rights reserved.
//

#include "transaction.h"

using namespace std;

Transaction::Transaction(int amt, string kind):amount(amt), type(kind)
{
    
}

string Transaction::Report()
{
    string report;
    report += "   ";
    report += type;
    report += " ";
    report += to_string(amount);
    
    return report;
    
}
