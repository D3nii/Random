//
//  main.cpp
//  HashCode
//
//  Created by Danyal Jamil on 1/9/20.
//  Copyright © 2020 Danyal Jamil. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    double maxSlices = 0, typesOfPizzas = 0, totalPizzas=0;
    double slicesInPizzas[20000];
    double totalSlices=0;
    double rightSlicesInPizzas[20000];
    int s = 0;
    ifstream file;
    file.open("e_also_big.txt");
    file >> maxSlices;
    file >> typesOfPizzas;
    while(!file.eof())
    {
        file >> slicesInPizzas[s];
        s++;
    }
    s--;
    
    for(int i=0; i<=s; i++)
    {
        totalSlices += slicesInPizzas[i];
        rightSlicesInPizzas[i] = i;
    }
    
    cout << "\n\n\n\n\n The sum is " << totalSlices << endl;
    cout << "\n\n\n\n\n The Max is " << maxSlices << endl;
    for(int i=0; i<s; i++)
    {
        totalSlices -= slicesInPizzas[i];
        rightSlicesInPizzas[i] = 0;
        cout << "\n\n\n\n\n The sum of "<< i << "is " << totalSlices << endl;
        if(totalSlices <= maxSlices)
        {
            break;
        }
    }
    
    cout << "wiuabfdebdwabedybwaeudbwuebduewbdiuwebiudeiduhieuhdeuhdiuehwidwiuedbiwudiuewiuewidieu\n\n\n\nekhbfuevfuwvbefvehgvdhwbejhwbfje\n\n";
    
    for(int i=0; i<=s; i++)
    {
        totalSlices += slicesInPizzas[i];
        rightSlicesInPizzas[i] = i;
        cout << "\n\n\n\n\n The sum of "<< i << "is " << totalSlices << endl;
        if(totalSlices > maxSlices)
        {
            totalSlices -= slicesInPizzas[i];
            rightSlicesInPizzas[i] = 0;
            break;
        }
    }
    
    for(int i=0; i<s; i++)
    {
        if(i!=0 && rightSlicesInPizzas[i]==0)
            continue;
        totalPizzas += 1;
    }
    
    ofstream out;
    out.open("output.txt");
    
    out << totalPizzas << endl;
    
    for(int i=0; i<s; i++)
    {
        if(i!=0 && rightSlicesInPizzas[i]==0)
            continue;
        out << rightSlicesInPizzas[i] << " ";
    }
    cout << endl;
    
    int test;
    
    for(int i=0; i<14; i++)
        test += slicesInPizzas[i];
    
    for(int i=5731; i<=9999; i++)
        test += slicesInPizzas[i];
    
    cout << "TEST BC" << test;
}
