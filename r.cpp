#include<iostream>

float sqroot(int n){

    int s = 0;
    int e = n-2;
    long long int m = s + (e-s)/2;
    float ans  = 0.00;

    while(s<=e){

        m = s+(e-s)/2;

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
    // float i = 0.1;
    
    // while(i < 1){
    //     if((ans + i)*(ans + i) == n){
    //         return ans+i;
    //     }

    //     if((ans + i)*(ans + i) <= n){
    //         ans = ans + i;
    //         i = i+0.1;
    //     } 
    //     else{
    //         break;
    //     }
    // }
    // i = 0.01;
    // while(i < 0.1){

    //      if((ans + i)*(ans + i) == n){
    //         return ans+i;
    //     }

    //     if((ans + i)*(ans + i) <= n){
    //         ans = ans + i;
    //         i= i + 0.01;
    //     }
    //     else{
    //         break;
    //     }

    // }

    double factor = 1;
    double dec = 3;

    for(int i = 0; i < dec; i++){
        factor = factor/10;
        for(double  j = ans; j*j<n; j=j+factor){
            ans = j;
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