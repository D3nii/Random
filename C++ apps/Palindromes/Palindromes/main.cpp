//
//  main.cpp
//  Palindromes
//
//  Created by Danyal Jamil on 1/13/20.
//  Copyright © 2020 Danyal Jamil. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


int main()
{
    string s;
    int ans = 0;
    
    cout << "Please enter the String: ";
    cin >> s;
    
    int n = s.length();

    for(int i=0; i<n/2; i++)
    {
        if(s[i] == s[n-i-1])
            continue;
        
        ans+= 1;
    }
    
    cout << "The required answer is: " << ans << endl;
}

