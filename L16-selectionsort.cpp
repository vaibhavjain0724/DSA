// ! SELECTION SORT 

// * arr  = 5 3 4 8 9

// * r1 = i = 0; swap smallest element with i
// * 3 5 4 8 9 

// * r2 = i = 1; swap smallest element with i
// *  3 4 5 8 9


// * r3 = i = 2; swap smallest element with i
// *  3 4 5 8 9


// * r4 = i = 3; swap smallest element with i 
// *  3 4 5 8 9




//! CODE
#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    int min_index;
             
    for(int i = 0; i < n; i++){
        min_index = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp  = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}