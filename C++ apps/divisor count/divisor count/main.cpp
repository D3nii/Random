//
//  main.cpp
//  divisor count
//
//  Created by Danyal Jamil on 1/11/20.
//  Copyright © 2020 Danyal Jamil. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int n, x = 0;
    
    cout << "Please enter the desired number : ";
    cin >> n;
    
    for(int i=1; i<=n; i++)
        if(n%i==0)
            x++;
    
    cout << "The number " << n << " has " << x << " Divisors." << endl;
    cout << "Thanks for using this Program, hope you have a great day." << endl;
}
