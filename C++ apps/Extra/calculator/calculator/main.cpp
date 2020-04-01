//
//  main.cpp
//  calculator
//
//  Created by Danii on 8/24/19.
//  Copyright © 2019 Danii. All rights reserved.
//

#include <iostream>

using namespace std;

float addition(float num1, float num2)
{
    return num1 + num2;
}

float subtraction(float num1, float num2)
{
    return num1 - num2;
}

float multiplication(float num1, float num2)
{
    return num1 * num2;
}

float division(float num1, float num2)
{
    return num1 / num2;
}


    
int main ()
{
    float number1;
    float number2;
    int choice;
    std::cout << "Please select your operation. \n \n";
    std::cout << " 1.Addition. \n 2.Subtraction. \n 3.Multiplication. \n 4.Division. \n";
    std::cout << "\n Your operation code: ";
    std::cin >> choice;
    cout << "\n";
    switch(choice)
    {
        case 1:
            std::cout << "You are adding. Please select your first figure.\n";
            std::cin >> number1;
            if(number1 == 69)
            {
                cout << "Oye Chutiye!";
                break;
            }
            std::cout << "Second figure:\n";
            std::cin >> number2;
            std::cout << "The result is: " << addition(number1, number2) << "\n";
            break;
        case 2:
            std::cout << "You are subtracting. Please select your first figure.\n";
            std::cin >> number1;
            if(number1 == 69)
            {
                cout << "Oye Chutiye!";
                break;
            }
            std::cout << "Second figure:\n";
            std::cin >> number2;
            std::cout << "The result is: " << subtraction(number1, number2) << "\n";
            break;
        case 3:
            std::cout << "You are multiplying. Please select your first figure.\n";
            std::cin >> number1;
            if(number1 == 69)
                break;
            {
                cout << "Oye Chutiye!";
            }
            std::cout << "Second figure:\n";
            std::cin >> number2;
            std::cout << "The result is: " << multiplication(number1, number2) << "\n";
            break;
        case 4:
            std::cout << "You are dividing. Please select your first figure. \n";
            std::cin >> number1;
            if(number1 == 69)
            {
                cout << "Oye Chutiye!";
                break;
            }
            std::cout << "Second figure:\n";
            std::cin >> number2;
            if(number2==0)
            {
                std::cout << "Your answer is undefined. \n";
            }
            else
            {
                std::cout << "The result is: " << division(number1, number2) << "\n";
            }
            break;
        default:
            std::cout << "Oops! Please input a number between 1 and 4.";
    }
        cout << "\n                 Thank you. ^_^ \n"<<endl;

    }
    




/*
//using normal if and elses.

int main()
{

    float number1;
    float number2;
    int choice;
    std::cout << "Please select your operation. \n \n";
    std::cout << " 1.Addition. \n 2.Subtraction. \n 3.Multiplication. \n 4.Division. \n";
    std::cout << "\n Your operation code: ";
    std::cin >> choice;
    cout << "\n";

    if(choice==1)
    {
        std::cout << "You are adding. Please select your first figure.\n";
        std::cin >> number1;
        std::cout << "Second figure:\n";
        std::cin >> number2;
        std::cout << "The result is: " << addition(number1, number2) << "\n";
    }
    else
    {
        if(choice==2)
        {   std::cout << "You are subtracting. Please select your first figure.\n";
            std::cin >> number1;
            std::cout << "Second figure:\n";
            std::cin >> number2;
            std::cout << "The result is: " << subtraction(number1, number2) << "\n";
        }
        else
        {
            if(choice==3)
            {
                std::cout << "You are multiplying. Please select your first figure.\n";
                std::cin >> number1;
                std::cout << "Second figure:\n";
                std::cin >> number2;
                std::cout << "The result is: " << multiplication(number1, number2) << "\n";
            }
            else
            {
                if(choice==4)
                {
                        std::cout << "You are dividing. Please select your first figure. \n";
                        std::cin >> number1;
                        std::cout << "Second figure:\n";
                        std::cin >> number2;
                    if(number2==0)
                    {
                        std::cout << "Your answer is undefined. \n";
                    }
                    else
                    {
                        std::cout << "The result is: " << division(number1, number2) << "\n";
                    }
                }
                
                else
                {
                    if(choice>0 || choice<0 || choice==0)
                    {
                        std::cout << "Oops! Please input a number between 1 and 4.";
            }
            else
            {
            }
            }
            
    }
        
    }
    }
    cout << "\nThank you. ^_^ \n"<<endl;
    return 0;
    
} */

