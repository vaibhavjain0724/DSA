#include <iostream>

// ! FIND PIVOT ELEMENT LC QUES INCOMPLETE Q33 (SEARCH in sorted rotated array)


// !FINDING PIVOT ELEMENT
// ! {4,5,6,1,2,3}  return 1;

int pivot(int arr[], int n){

    int s= 0;
    int e = n-1;
    int m = s+ (e-s)/2;
    
    while(s<e){
        if(arr[m] >= arr[0]){
            s = m +1;
        }
        else{
            e = m;
        }
        m = s + (e-s)/2;

    }
    return s;

}

int main(){
    int n = 0;
    std::cout<< "n: ";
    std::cin >> n;

    int arr[n];


    std::cout<< "array: ";
    for(int i = 0; i < n; i ++){
        std::cin >> arr[i];
    }

    std::cout << "pivot index = " << pivot(arr, n);

    return 0;
}

// ! CODING NINJAS- SQ ROOT USING BINARY SEARCH 
// ! wrong approach
// int floorSqrt(int n)
// {
//     int s = 0;
//     int e = n;
//     int m = s +(e-s)/2;
//     int arr[n+1];
//     int num = 0;
//     int ans = 0;

//     for(int i = 0; i < n+1; i++){
//         arr[i] == num;
//         num++;
//     }

//     while(s<=e){
//         if(arr{m]*arr[m] < n){
//             ans = arr[m];
//             s = m+1;
//         }
//         else if(arr[m] * arr[m] == n){
//             return arr[m];
//         }
//         else{
//             e = m-1;
//         }
//         m = s+(e-s)/2;
//     }

//     return ans;
    
    
// }


//!correct approach
//! long long int //
int floorSqrt(int n)
{
    int s = 0;
    int e = n;
    int ans = 0;
    long long int m = s + (e-s)/2;

    while (s <= e)
    {
        m = s + (e - s) / 2;

        // Check if m is the square root
        if (m * m == n)
        {
            return m;
        }
        // If m squared is less than n, store m as a potential answer
        // and move to the right half
        else if (m * m < n)
        {
            ans = m;
            s = m + 1;
        }
        // If m squared is more than n, move to the left half
        else
        {
            e = m - 1;
        }
    }

    return ans;
}




//!for precise sq root



int sqroot(int n){

    int s = 0;
    int e = n-2;
    long long int m = s + (e-s)/2;
    float ans  = 0.00;

    while(s<=e){

        m = s+(e-s)/;

        if(m*m < n){
            ans = m;
            s = m+1;
        }
        else if(m*m == n){
            return m;
        }
        else{
            e = m-1;
        }
    }
//     float i = 0.1;
    
//     while(i < 1){

//         if((ans + i)*(ans + i) <= n){
//             ans = ans + i;
//             i = i+0.1;
//         } 
//         else{
//             break;
//         }
//     }
//     i = 0.01;
//     while(i < 0.1){
//         if((ans + i)*(ans + i) <= n){
//             ans = ans + i;
//             i= i + 0.01;
//         }
//         else{
//             break;
//         }

//     }
//     return ans;

    int precision = 3;
    double divi = 1;

    for(int i = 0; i<precision; i++){
        divi = divi/10;
        for(double j = ans; j*j < n; j+=divi ){
            ans = ans + divi;
        }
    }

    return ans;
}

int main(){
    int n;
    std::cin >> n;
    std::cout << sqroot(n);
    return 0;
}