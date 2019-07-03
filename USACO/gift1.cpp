/*
ID: vanshse1
PROG: gift1
LANG: C++
*/

/* 
By. Vansh Sethi
MAIN CONCEPT = Hashmap
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int np;
    map<string,int> names;
    string arr[10000];
    fin >> np;
    for (int i = 0; i < np; i++) {
        string name;
        fin >> name;
        names[name] = 0;
        arr[i] = name; 
    }

    for (int i = 0; i < np; i++) {
        int money, split;
        string giver;
        fin >> giver;
        fin >> money >> split;
        names[giver] -= money;
        float doubletemp = float(money)/float(split);
        float moneyeach = floor(doubletemp);
        moneyeach = int(moneyeach);
        for (int k = 0; k < split; k++) {
            string getter;
            fin >> getter;
            names[getter] += moneyeach;
        }
        int moneyleft = split*moneyeach;
        moneyleft = money - moneyleft;
        names[giver] += moneyleft;
    }



    for (int i = 0; i < np; i++) {
        string the_name = arr[i];
        fout << the_name << ' ' << names[the_name] << "\n";
    }

    return 0;
}