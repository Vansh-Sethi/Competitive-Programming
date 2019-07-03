/*
ID: vanshse1
PROG: friday
LANG: C++
*/

/* 
By. Vansh Sethi
MAIN CONCEPT = Ad Hoc
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");

    int d = -1;
    int N;
    int daysofweek[7] = {0,0,0,0,0,0,0};
    int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    fin >> N;


    for (int i = 1900; i < 1900+N; i++) {
        if ((i%4==0 && i%100 !=0) || (i%400==0)) {
            months[1] = 29;
        }
        else {
            months[1] = 28;
        }

        for (int j = 0; j < 12; j++) {
           
            for (int k = 0; k < months[j]; k++) {
             
                d++;
                
                if (k == 13) {
                    daysofweek[d]++;
                }

                if (d == 6) {
                    d = -1;
                }
                
            }
        }
        
    }

    fout << daysofweek[6] << ' ' << daysofweek[0] << ' ' << daysofweek[1] << ' ' << daysofweek[2] << ' ' << daysofweek[3] << ' ' << daysofweek[4] << ' ' << daysofweek[5] << endl;

    return 0;

}