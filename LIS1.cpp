
// Code for finding the length of the longest increasing subsequence 
// Time complexity :- O(2^n)
// further optimizations to n^2 and nlogn in next two slides 

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr, int i, int prev)
{
     if(i==arr.size())
     return 0; 

     // we have two options either to take or not to take the element at i 
     // but for take there is condition that taken(prev ) should be less than current
     int take =0;  int not_take=0;
     if(prev==-1 || arr[prev]<arr[i])
     {
         take = 1+solve(arr, i+1, i); 
     }
    
     else{
     not_take = solve(arr, i+1, prev); }

     return max(take, not_take); 
}

int main()
{
   vector<int> arr={3,4,1,7,9,6}; 
   int i =0; int prev =-1; 
   // prev is the index selected 
   // we have not selected now so -1
   // and we will update last selected index
   cout<<solve(arr, i, prev); 


}