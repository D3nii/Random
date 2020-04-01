//
//  main.cpp
//  Ascending Order
//
//  Created by Danii on 8/24/19.
//  Copyright © 2019 Danii. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>


using namespace std;

void print(const long &x)
{
    cout << x;
}

int main()
{
    long x = 234923592;
    print(x);
    cout << endl; // We are guaranteed that x    
}



/*
int main()
{
    int rows, col, noq;
    cout << "rows: "; cin >> rows; cin >> noq;
    
    int **p= new int* [rows];

    for(int i=0; i<rows; i++)
    {
        cout << "col: ";
        cin >> col;
        
        p[i]= new int [col];
        
        for(int j=0; j<col;j++)
        {
            cin >> p[i][j];
        }
    }
    int n1, n2;

        for(int k=0; k<noq; k++)
        {
            cin >> n1 >> n2;
            cout << p[n1][n2] << " " ;
        }
} */
/*
int main()
{
    int a, b, c, d, i;
    int g,h;
    int arr[50];
    cout << "enter c and d"; //c = no of times and d questions
    cin >> c >> d;

    for(int k=0;k<c;k++)
    {
        cout << "enter a";
        cin >> a;
        
        for(int j=0; j<a; j++)
        {
            cin >> arr[j];
        }
        if(c==a)
        {
            switch (c)
            {
                case 0:
                    cout << arr[0];
                    break;
                case 1:
                    cout << arr[1];
                    break;
                case 2:
                    cout << arr[2];
                    break;
                case 3:
                    cout << arr[3];
                    break;
                case 4:
                    cout << arr[4];
                    break;
                case 5:
                    cout << arr[5];
                    break;
                case 6:
                    cout << arr[6];
                    break;
                case 7:
                    cout << arr[7];
                    break;
                case 8:
                    cout << arr[8];
                    break;
                case 9:
                    cout << arr[9];
                    break;
            }
        }
        cout << "enter b";
        cin >> b;
        
        for(int j=0; j<b; j++)
        {
            cin >> arr[j];
            
        }
        if(c==b)
        {
            switch (c)
            {
                case 0:
                    cout << arr[0];
                    break;
                case 1:
                    cout << arr[1];
                    break;
                case 2:
                    cout << arr[2];
                    break;
                case 3:
                    cout << arr[3];
                    break;
                case 4:
                    cout << arr[4];
                    break;
                case 5:
                    cout << arr[5];
                    break;
                case 6:
                    cout << arr[6];
                    break;
                case 7:
                    cout << arr[7];
                    break;
                case 8:
                    cout << arr[8];
                    break;
                case 9:
                    cout << arr[9];
                    break;
            }
        }
    }
    d = arr[i];
}
    */

/* int sum(int *c, int *d)
{
    int sum;
    
    sum = *c + *d;
    return sum;
}

int diff(int *c, int *d)
{
    int diff;
    
    diff = *d - *c;
    if(diff>0)
    {
        return diff;
    }
    else
    {
        diff = diff * -1;
        return diff;
    }
    
}
int main()
{
    int a;
    int b;
  
    cin >> a >> b;
    
    int *c = &a;
    int *d = & b;
    
    cout << sum(c,d) << endl;
    cout << diff(c,d) << endl;
} */

/*
int main ()
{
    int n1[5];
    for (int i=0; i<4; i++)
    {
        cin >> n1[i];
    }


    double max;
    max = n1[0];
    for (int i=0; i<4; i++)
    {
        if(n1[i]>max)
        {
            max = n1[i];
        }
        
    }
    cout << max << endl;

}
*/



/*
int main ()
{
    string x[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    
    cout << ".";
    int a,b;
    cin >> a >> b;
    
   
    for(int i=a; i<=b; i++)
    {
        int r= i%2;
        if(i==1)
        {
            cout << x[0] << endl;
        }
        if(i==2)
        {
            cout << x[1] << endl;
        }
        if(i==3)
        {
            cout << x[2] << endl;
        }
        if(i==4)
        {
            cout << x[3] << endl;
        }
        if(i==5)
        {
            cout << x[4] << endl;
        }
        if(i==6)
        {
            cout << x[5] << endl;
        }
        if(i==7)
        {
            cout << x[6] << endl;
        }
        if(i==8)
        {
            cout << x[7] << endl;
        }
        if(i==9)
        {
            cout << x[8] << endl;
        }
        if(i>9 && r==0)
        {
            cout << "even" << endl;
        }
        if(i>9 && r!=0)
        {
            cout << "odd" << endl;
        }
        
    }
    
    return 0;

} */

/*
int main()
{
    cout << "Enter the number: ";
    int n;
    cin >> n;
    int a = n%2;
    if(n>9 && a==0)
    {
        cout << "even";
    }
    else if(n>9 && a!=0)
            {
                cout <<"odd";
            }
            else if (n==1)
            {
                cout << "one";
            }
    else
    {
        if(n==2)
        {
            cout << "two";
        }
        else
        {
            if(n==3)
            {
                cout << "three";
            }
            else
            {
                if(n==4)
                {
                    cout << "four";
                }
                else
                {
                    if(n==5)
                    {
                        cout << "five";
                    }
                    else
                    {
                        
                    if(n==6)
                    {
                        cout << "six";
                    }
                    else
                    {
                        if(n==7)
                        {
                            cout << "seven";
                        }
                        else
                        {
                            if(n==8)
                            {
                                cout << "eight";
                            }
                            else
                            {
                                if(n==9)
                                {
                                cout << "nine";
                                }
                                else
                                {
                              
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
} */

/*
 // PRIME NUMBERSSSS
int main()

{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    int m = n / 2;
    int i;
    int y=0;
    for (i=2; i<=m; ++i)
    {
        if(n % i==0)
        {
            y=1;
        }
    }
    if (y==0)
        {
            cout << "It is a prime number.\n";
        }
        else
        {
            cout << "It is a composite number.\n";
        }
    }

*/

/*
int main()
{
    double n;
    double sum;
    cout << "Enter the number of entries you want to enter. ";
    cin >> n;
    
    int n1[5];
    for (int i=0; i<n; i++)
    {
        cin >> n1[i];
    }
    
    //Mean
    for (int i=0; i<n; i++)
    {
        sum += n1[i];
    }
    
    double mean = sum/n;
    cout << "Mean: " << mean << endl;
    
    //Max
    double max;
    max = n1[0];
    for (int i=0; i<n; i++)
    {
       if(n1[i]>max)
       {
           max = n1[i];
       }
        
    }
    cout << "Max: " << max << endl;
    
    //Min
    double min;
    min = n1[0];
    for (int i=0; i<n; i++)
    {
        if(n1[i]<min)
        {
            min = n1[i];
        }
        
    }
    cout << "Min: " << min << endl;
    
} */

/* double main()
{
    double n, i;
    float x[100], sum=0, average;
    
    cout << "Enter the number of data: ";
    cin >> n;
    
    for(i=0;i<n;i++)
    {
        cout <<"Enter " << i + 1 << " number: ";
        cin >> x[i];
        sum += x[i];
    }
    average = sum / n;
    cout << "\nAverage is " << average << endl;
    return 0;
} */

/*
double main ()
{
    double size;
    cout << "Enter the size.";
    cin >> size;
    double arr[size];
    double c=0;
    double i;
    
    for(i=0;i<size;i++)
    {
        cout << "Enter the " << i+1 << " element.";
        cin >> arr[i];
    }
    for(i=0;i<size;i++)
    {
        c=c+arr[i];
    }
    cout << "Sum of the numbers is " << c << "\n";
} */

/*
double sum(const double y[],const double length)
{
    double sum =0;
    for(double i = 0; i < 8; i++)
        
        sum += y[i++];
        return sum;
}

double main ()
{
    double x[8];
    for(double y = 0; y < 8; y++)
        cin >> x[y];
    cout << "Sum: " << sum(x, 8) << endl;
    return 0;
}
*/







 
            int dis = pow(pow((centerX-x),2)+pow((centerY-y),2),0.5);
            
            
            if(dis>=160)
            {
                dis1 = 80;
            }
            else
            {
                dis1 = dis * 0.5;
                
            }
            
            dis2 = dis1 / 100;
            pixel.l = 1 - dis2;
        }
    }
    return image;
}
