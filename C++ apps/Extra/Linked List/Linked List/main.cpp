//
//  main.cpp
//  Linked List
//
//  Created by Danyal Jamil on 6/30/20.
//  Copyright © 2020 Danyal Jamil. All rights reserved.
//

#include <iostream>

using namespace std;

class Node {
public:
    int val;
    Node *next;
    
    Node(int x = 0, Node *y = 0) {
        val = x;
        next = y;
    }
    
    void show() {
        Node *temp = this;
        
        while (temp) {
            cout << temp -> val << " ";
            
            temp = temp -> next;
        }
    }
};

int main() {
    int num, tempIn;
    Node *temp = nullptr;

    cout << "Enter the number of elements: "; cin >> num;
    
    for (int i=0; i<num; i++) {
        cout << "Enter the number of " << i+1 << "th iteration: "; cin >> tempIn;
        temp -> next = new Node(tempIn);
        
        temp = temp -> next;
    }
    
    temp -> show();
    return 0;
}
