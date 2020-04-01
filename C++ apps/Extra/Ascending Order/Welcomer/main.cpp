//
//  main.cpp
//  Ascending Order
//
//  Created by Danii on 8/24/19.
//  Copyright © 2019 Danii. All rights reserved.
//

#include <iostream>
#include <string>


int main()
{
    //Name
    std::cout << "Please enter your name. \n";
    std::string x;
    std::cin >> x;
    std::cout << "Hmm. So, your name is " << x << ".";
    std::cout << "\nPretty nice name actually. :) \n \n";
    
    //Age
    std::cout << "What is your age? \n";
    int y;
    std::cin >> y;
    if(y>18)
    {
        std::cout << "Omg! You're all grown up now. \n \n";
    }
    else
    {
        std::cout << "Aww, You must be very cute then. ^__^ \n \n";
    }
    std::cout << "Well, I gotta go. Take care, bye. \n \n";

    
    
}
