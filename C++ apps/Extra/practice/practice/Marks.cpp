//
//  main.cpp
//  practice
//
//  Created by Danii on 9/2/19.
//  Copyright © 2019 Danii. All rights reserved.
//

#include <iostream>
using namespace std;

void n1(string name, int marks)
{
    cout << "\nThe name of the student is " << name << endl;
    cout << "\nThe marks obtained by this student are " << marks << endl;
  
    if(marks==100)
    {
       
        cout << "\nAwwww! Full Marks!! :)";
    }
    else
    {
    if(marks>=60)
    {
        cout << "\nThe student is passed.";
        }
        else
        {
            cout << "\nThe student has failed.";

        }
    }
}


int main()
{
    string name;
    int marks;
    cout << "Enter the name of the student: ";
    cin >> name;
    cout << "Enter the marks obtained by this student: ";
    cin >> marks;
    
    n1(name, marks);
    cout << endl;
    return 0;
    
 
}
