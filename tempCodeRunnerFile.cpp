#include <iostream>

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
    int n;
    int arr[n];
    std::cout<< "n: ";
    std::cin >> n;

    std::cout<< "array: ";
    for(int i = 0; i < n; i ++){
        std::cin >> arr[i];
    }

    std::cout << "pivot = " << pivot(arr, n);

    return 0;
}