//
//  main.cpp
//  2^n
//
//  Created by Danyal Jamil on 1/13/20.
//  Copyright © 2020 Danyal Jamil. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Date {
    int day, month, year;

public:
    Date(int a, int b, int c) {
        day = a;
        month = b;
        year = c;
    }

    void show() {
        cout << "Starting Date of Project = " << day << "-" << month << "-" << year << endl;
    }
};

class Project {
public:
    Date d;
    string title;
    int duration;
    int cost;

    Project() : d(0, 0, 0) {
        title = "";
        duration = 0;
    }
    
    Project(string tit, int dur, int day, int m, int y) : d(day, m, y) {
        title = tit;
        duration = dur;
    }
    
    virtual void CalculateCostofProjects() {}
    
    virtual void DisplayDetailsOfProjects() {}
};

class Team : public Project {
    int no;

public:
    Team(string tit, int dur, int day, int m, int y, int no) : Project(tit, dur, day, m, y) {
        this -> no = no;
    }

    void CalculateCostofProjects() {
        cost = no * (duration * 1000) + 10000;
    }

    void DisplayDetailsOfProjects() {
        cout << "Title = " << title << endl;
        cout << "Duration Of Project = " << duration << endl;
        d.show();
        cout << "Cost of Project = " << cost << endl;
        cout << "Type of Project: Team Project " << endl;
        cout << "Number of members working = " << no << endl;
    }
};

class Individual : public Project {

public:
    Individual(string tit, int dur, int day, int m, int y) : Project(tit, dur, day, m, y) {
    }

    void CalculateCostofProjects() {
        cost = duration * 1000;
    }

    void DisplayDetailsOfProjects() {
        cout << "Title = " << title << endl;
        cout << "Duration Of Project = " << duration << endl;
        d.show();
        cout << "Cost of Project = " << cost << endl;
        cout << "Type of Project: Individual Project " << endl;
    }
};

class Company {
    int no_pro;
    Project **pr;
    int index = 0;

public:
    Company(int x) : pr() {
        no_pro = x;
        
        pr = new Project*[x];
    }

    void AddProjectDetails(string str, int numb, int dur, int day, int m, int y) {
            if (numb == 1) {
                pr[index] = new Individual(str, dur, day, m, y);
            }
            else {
                pr[index] = new Team(str, dur, day, m, y, numb);
            }
        index++;
    }

    virtual void CalculateCostofProjects() {
        for (int i=0; i<no_pro; i++) {
            pr[i]->CalculateCostofProjects();
        }
    }
    
    virtual void DisplayDetailsOfProjects() {
        for (int i=0; i<no_pro; i++) {
            pr[i]->DisplayDetailsOfProjects();
        }
    }
};

int main() {
    int num_of_projects = 3;
    Company xyCo(num_of_projects);

    xyCo.AddProjectDetails("Project1", 10, 12, 1, 1, 2020);
    xyCo.AddProjectDetails("Project2", 5, 4, 1, 3, 2020);
    xyCo.AddProjectDetails("Project3", 1, 10, 5, 8 , 2020);

    xyCo.CalculateCostofProjects();
    xyCo.DisplayDetailsOfProjects();
}
