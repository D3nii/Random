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
    int maxSlices = 0, typesOfPizzas = 0, totalPizzas = 0, s = 0, ulSlices = 0;
    int slicesInPizzas[20000];
    int totalSlices = 0, temptypesOfPizzas = 0, tempans = 0;
    int rightSlicesInPizzas[20000], correctarray[20000];
    
    ifstream file;
    file.open("a_example.txt");
    file >> maxSlices;
    file >> typesOfPizzas;
    while(!file.eof())
    {
        file >> slicesInPizzas[s];
        s++;
    }
    s--;
    
    temptypesOfPizzas = typesOfPizzas;
    
    while(s>0)
    {
        temptypesOfPizzas -= 1;
        totalSlices = 0;
        
        for(int i=0; i<typesOfPizzas; i++)
            rightSlicesInPizzas[i] = -1;
        
        tempans = totalSlices;
        
        for(int i=temptypesOfPizzas; i!=-1; i--)
        {
            totalSlices += slicesInPizzas[i];
            rightSlicesInPizzas[i] = i;
            
            if(totalSlices > maxSlices)
            {
                totalSlices -= slicesInPizzas[i];
                rightSlicesInPizzas[i] = -1;
            }
            
            if(totalSlices > ulSlices && totalSlices <= maxSlices)
            {
                ulSlices = totalSlices;
                for(int i=typesOfPizzas; i!=-1; i--)
                    correctarray[i] = rightSlicesInPizzas[i];
            }
        }

        if(ulSlices == maxSlices)
            break;
        
        s--;
    }
    
    for(int i=0; i<typesOfPizzas; i++)
    {
        if(correctarray[i]==-1)
            continue;
        totalPizzas += 1;
    }
    
    ofstream out;
    out.open("output.txt");
    
    out << totalPizzas << endl;
    
    for(int i=0; i<typesOfPizzas; i++)
    {
        if(correctarray[i]==-1)
            continue;
        out << correctarray[i] << " ";
    }
    
    cout << endl;

}
