// ! BINARY SEARCH

// * only applies to monotonic functions
 

// * {1,2,3,5,6}
// * KEY = 5
// * 1) Find mid element,  ie 3 
// * 2) compare it with key,  3 != 5;
// * 3) 5>3 so we split the array into 2 and take the right array now
// * 4) {5,6}
// * 5) mid = 4+5/2 = 4 ie 5;
// * 6) compare 5 with key
// * 7) 5 == 5
// * 8) return 5 

// ! TLDR
// * 1 find mid
// * 2 compare with key
// * 3 if equal = return index
// *   else = decide left or right by comparing
// * 4 repeat     


// // ! IMPLEMENTATION

#include <iostream>




int binary_search(int arr[], int size, int key){
    int start = 0;
    int end = size- 1;
    int mid = (start + end) / 2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        // //go to left part
        else if(arr[mid] > key) {
            end = mid - 1;
        }
        // //go to right part
        else{
            start = mid  + 1;
        }

        mid = (start+end)/2;
    }


}


int main(){
    std::cout << "Hi";

    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {1,3,5,7,9};

    std::cout << std::endl;
    std::cout << binary_search(even, 6, 4);


    std::cout << std::endl;
    std::cout <<  binary_search(odd, 5, 9);



    return 0;
}
