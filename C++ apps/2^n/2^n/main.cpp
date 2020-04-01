//
//  main.cpp
//  2^n
//
//  Created by Danyal Jamil on 1/13/20.
//  Copyright © 2020 Danyal Jamil. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    long double x = 1;
    bool b = true;
    
    while(b)
    {
        cout << "Please choose a number between 0 and 1024: ";
        cin >> n;
        
        if(n>=0 && n<=1024)
            b = false;
        else
            cout << "Try Again." << endl;
    }
    
    for(int i=0; i!=n; i++)
        x *= 2;
    
    cout << "The required answer is " << fixed << x << endl;
}
