#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int main()
{
    int array[10];
    
    cout << "iyguygut";
    
    for(int i=0; i<7; i++)
    {
        cin >> array[i];
    }
    
    if(array[0]!=0 && array[1]!=0 && array[2]!=9 && array[3]!=2)
    {
        cout << "Enter the number again: ";
        
        for(int i=0; i<7; i++)
        {
            cin >> array[i];
        }
    }
    
    
    /*
    string x[5][5];
    
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
        {
            if(i==j || j==4-i)
                x[i][j] = "-";
            else
                x[i][j] = "|";
        }
    
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<15; j++)
        {
            cout << x[i][j];
        }
        cout << endl;
    }
    
    */
    
    
}
