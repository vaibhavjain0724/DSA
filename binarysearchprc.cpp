#include <iostream>

using namespace std;


string check_subset(int a1[], int a2[], int n, int m){
    int s= 0;
    int e = n-1;
    int mid = s + ((e-s)/2);
    string ans = "No";
    
    int i = 0;
    
    while(s<= e){
        
        if(a1[mid] < a2[i]){
            s = mid+1;
        }
        else if(a1[mid] == a2[i]){
            if(i < 3){
            i++;
            }
            else{
                break;
            }
            ans = "Yes";
            
        }
        else{
            e = mid-1;
        }
        int mid = s + ((e-s)/2);

          ans = "No";
    }
    return ans;

}

int main(){
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[3] = {1,2,3};
    int n = 6;
    int m = 3;
    
    string subset = check_subset(arr1,arr2,n,m);
    std::cout << subset;

    return 0;

}
    