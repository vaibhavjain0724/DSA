// ! BUBBLE SORT
// !
// ! arr =  0 9 5 2 
// ! a = 0, b = 1
// ! if arr[a] > arr[b], swap them
// !
// * arr = 0 9 2 5 
// * a = 1, b = 2
// * 0 5 9 2
// *
// * a = 2, b =3
// * 0 5 2 9
// *
// ! AFTER N ROUNDS, N ELEMENTS WILL BE SORTED STARTING FROM THE LAST INDEX, ARR[3] IS SORTED, WE HAVE TO RUN THIS PROCESS FOR N-1 TIMES TO SORT THE ARRAY COMPLETELY
// *
// *    
// *
// *
// *
// *

// ! code



 //* running 1st loop n-1 times
for(int i= 1; i < n; i++){
    //* to check if array is already sorted
        bool swapped = false;
        // * running 2nd loop from 0 to n-i; j==j+1, j+1==j+2....
        for(int j = 0; j < n-i;j++){
            if(arr[j] > arr[j+1]){
                //*if j+1 is smaller we swap 
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        //* after every n rounds, last n elements will be sorted
        if(swapped == false){
            break;
        }
    }