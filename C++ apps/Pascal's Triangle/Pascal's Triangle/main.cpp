//
//  main.cpp
//  Pascal's Triangle
//
//  Created by Danyal Jamil on 6/27/20.
//  Copyright © 2020 Danyal Jamil. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter the number: "; cin >> num;
    
    int T[100][100];
    
    for (int i=0; i<num; i++) {
        for (int j=0; j<i+1; j++) {
            if (j<i) {
                if (j == 0) T[i][j] = 1;
                else {
                    T[i][j] = T[i-1][j]+T[i-1][j-1];
                }
            } else {
                T[i][j] = 1;
            }
        }
    }
    
    for (int i=0; i<num; i++) {
        for (int j=0; j<i+1; j++) {
            cout << T[i][j] << " ";
        } cout << endl;
    }

    return 0;
}
