//
//  main.cpp
//  112
//
//  Created by Danii on 8/31/19.
//  Copyright © 2019 Danii. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;



int main()
{
    cout << "ekfbr'";
    int x1 =1, y1 = 4;
    int dis = pow(pow(x1,2)+pow(y1,2),0.5);
    
    cout << dis;
}
//2 2
//3 1 5 4
//5 1 2 8 9 3
//0 1
//1 3
/*
int main()
{
    int rows, col, noq;
    cout << "Enter rows:";
    cin >> rows; cin >> noq;
    
    int** p = new int* [rows];
  
    for(int i=0; i<rows; i++)
    {
        cout << "Enter col:";
        cin >> col;
        
        p[i] = new int [col];
        
        for(int j=0;j<col;j++)
        {
            cin >> p[i][j];
        }
    }
    int n1, n2;
    
    for(int k=0; k<noq; k++)
    {
        cin >> n1 >> n2;
        cout << p[n1][n2] << " ";
    }
    
} */
/*
int main()
{
    string a,b;
    cout << "Input a:";
    cin >> a;
    cout << "Input b:";
    cin >> b;
    cout << a + b;
    return 0;
} */
/*
int main ()
{
    int x =1;
    int marks;
    int num1=0;
    int num2=0;
    
    while(x<5)
    {
        cout << "Enter marks:";
        cin >> marks;
        if (marks>60)
        {
            num1 = num1 + 1;
            
        }
        else
        {
            num2 = num2 + 1;
        }
        x++;
    }
    cout << "The number of students that have passed are " << num1 << endl;
    cout << "The number of students that have failed are " << num2 << endl;
    return 0;
    
} */
