//
//  main.cpp
//  Classes
//
//  Created by Danii on 9/17/19.
//  Copyright © 2019 Danii. All rights reserved.
//

#include <iostream>
#include "account.h"

using namespace std;

int main()
{
    int x, y;
    Account a1;
    
    cout << "Enter the depositing amount:";
    cin >>  x;
    a1.deposit(x);
    cout << "After depositing " << x << endl;
    
    for (auto s:a1.Report())
    {
        cout << s << endl;
    }
    
    cout << "Enter the withdrawing amount:";
    cin >> y;
    a1.withdraw(y);
    if (a1.withdraw(y))
    {
        cout << "Second withdraw succeeds" << endl;
    }
  //  cout << "After withdrawing " << "$" << x << "then" << "$" << y << endl;
    
    for (auto s:a1.Report())
    {
        cout << s << endl;
    }
    
    return 0;
}
