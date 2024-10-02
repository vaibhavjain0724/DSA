// !  First and Last Position of an Element In Sorted Array  - CodingNinjas

//  std::pair <int,int> answer;

//     int start = 0;
//     int end = n-1;
//     int mid = start + ((end-start)/2);

//     int left = -1;
//     int right = -1;

//     while(start <= end) {
//         mid = start + ((end-start)/2);


//         if(arr[mid] == k){
//             left = mid;
//             end = mid - 1;
//         }
//         else if(arr[mid] > k){
//             end = mid -1;
//         }
//         else{
//             start = mid + 1;
//         }

//     }
//     start = 0;
//     end = n -1;


//     while(start <= end) {
//         mid = start + ((end-start)/2);


//         if(arr[mid] == k){
//             right = mid;
//             start = mid + 1;
//         }
//         else if(arr[mid] > k){
//             end = mid -1;
//         }
//         else{
//             start = mid + 1;
//         }
//     }
//     answer.first = left;
//     answer.second = right;

//     return answer;


// ! 852. Peak Index in a Mountain Array - Leetcode

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
        
//         int n = arr.size();
//         int s = 0;
//         int e = n-1;
//         int m  = s + ((e-s) /2);

//         while(s<e){
//             if(arr[m] < arr[m+1]){
//                 s = m + 1;
//             }
//             else{
//                 e = m;
//             }
//             m  = s + ((e-s) /2);
//         }
//        return s; 
//     }
// };