//
//  main.cpp
//  2 squares
//
//  Created by Danii on 8/25/19.
//  Copyright © 2019 Danii. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
void print(int v)
{
    cout << "The value is : " << v << endl;
}

void foreach(vector<int> &a, void (*print)(int))
{
    for(int va : a)
        print(va);
}

int main()
{
    cout << "Enter the numbers: " << endl;
    int b;
    vector<int> a;
    cin >> b;
    a.push_back(b);
    foreach(a, print);
}

    /*
float pth(float a, float b)
{
    return pow((a*a + b*b),0.5);
//power can also be done as "sqrt(a*a + b*b)" but only if we add the library 'cmath'
}


int main()
{
    float a;
    float b;

    std::cout<< "Input a." ;
    std::cin >> a;
    
    std::cout << "Input b.";
    std::cin >> b;

    std::cout << "The result is." << pth(a , b) << "\n" ;

}
*/
