//
//  main.cpp
//  rectangle
//
//  Created by Danii on 9/24/19.
//  Copyright © 2019 Danii. All rights reserved.
//

#include <iostream>

using namespace std;

struct rect
{
    float left, right, top, bottom;
};

rect intersection(rect r1, rect r2)
{
    rect ans;
    
    ans.left = max(r1.left, r2.left);
    
    ans.right =min(r1.right, r2.right);
    
    ans.bottom = max(r1.bottom, r2.bottom);
    
    ans.top = min(r1.top, r2.top);
 
    return ans;
}

float max(float f1, float f2)
{
    if(f1>f2)
    {
        return f1;
    }
    else
    {
        return f2;
    }
}

float min(float f1, float f2)
{
    if(f1<f2)
    {
        return f1;
    }
    else
    {
        return f2;
    }
}

int main()
{
    
}
