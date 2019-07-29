/*
ID: vanshse1
PROG: milk2
LANG: C++
*/

/* 
By. Vansh Sethi
MAIN CONCEPT = Complete Search
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int N, globalq = 0;

int largest(int arr[][2],int N,int i) {
    int pointer = i;
    int max = 0;
    if (N == 1) {
        return arr[0][1] - arr[0][0];
    }
    else {
        while (true) {
            if (pointer == N-1) {
               break;
            }
             if (arr[pointer][1] >= arr[pointer+1][0]) {
                max = arr[pointer+1][1]; 
            }
            else {
                break;
            }
            pointer++;
        }
        pointer = i;
        if (max == 0) {
            return arr[0][1] - arr[0][0];
        }
        else {
            return max - arr[pointer][0];
        }
    }
}

int smallest(int arr[][2],int N, int i) {
    int pointer = i;
    int max = 0,realmax = 0;
    while (true) {
        if (pointer == N-1) {
            break;
        }
        if (arr[pointer][1] < arr[pointer+1][0]) {
            max = arr[pointer+1][0] - arr[pointer][1];
            if (max > realmax) {
                realmax = max;
            }
        }
        else {
            break;
        }
        pointer++;
    }


    return realmax;

}

int main() {
    ofstream fout ("milk2.out");
    ifstream fin ("milk2.in");
    fin >> N;
    int arr[N][2], b = 0, l = 0;

    for (int i = 0; i < N; i++) {
        int start, end;
        fin >> start >> end;
        arr[i][0] = start;
        arr[i][1] = end;
        int pointer = i;
        while (arr[pointer][0] > arr[pointer-1][0] && pointer != 0) {
            swap(arr[pointer][0],arr[pointer-1][0]);
            swap(arr[pointer][1],arr[pointer-1][1]);
            pointer--;
        }    
    }

    int tempn = N-1;
        
    for (int i = 0;i < N/2; i++) {
        if (i == 0) {
            swap(arr[i][0], arr[N-1][0]);
            swap(arr[i][1], arr[N-1][1]);
        }
        else {
           swap(arr[i][0], arr[tempn-i][0]);
           swap(arr[i][1], arr[tempn-i][1]);
        }
        
    }
   
    for (int i = 0; i < N; i++) {
        int a = largest(arr,N,i);
        if (a > b) {
            b = a;
        }
    }

    for (int i = 0; i < N; i++) {
        int q = smallest(arr,N,i);
        if (q > l) {
            l = q;
        }
    }

    fout << b << ' ' << l << "\n";

    return 0;

}