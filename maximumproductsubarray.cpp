#include <bits/stdc++.h>
using namespace std;


// int maxproductsubarray(vector<int> &arr, int n){
//     int maxi=INT_MIN;
//     for(int i=0; i<n; i++){
//         int prod=arr[i];
//         for(int j=i; j<n; j++){
 
//              prod*=arr[j];
//             maxi=max(prod,maxi);
  
//         }
//     }

//}



 //Kadane Algorithm-optimal approach
int maxproductsubarray(vector<int> &arr, int n){
   int pre=1;
   int suff=1;
   int ans=INT_MIN;

    for(int i=0; i<n; i++){
       
       if(pre==0) pre=1;
       if(suff==0) suff=1;

       pre*=arr[i];
       suff*=arr[n-i-1];
       ans= max(ans,max(pre,suff));
    }
    return ans;

}




int main()



{
vector<int>arr={-2,3,4,-1,0,2,3,1,4,0,4,6,-1,4};
int n=arr.size();

int ans=maxproductsubarray(arr,n);
cout<<ans;
    return 0;
}