
// #include<bits/stdc++.h>
// using namespace std;
// int func(int i,int j,vector<int>&wt,vector<int>&cp,vector<vector<int>>&dp){
//   if(j==0) return 0;
//   if(i==0){
//     if(cp[i]<=j) return wt[i];
//     return 0;
//   }

//   int pick=0;
//   if(cp[i]<=j){
//     pick=wt[i]+func(i-1,j-cp[i],wt,cp,dp);
//   }
//   int np=func(i-1,j,wt,cp,dp);
//   return max(pick,np);
  
// }
// int main (){
//       vector<int>wt={1,2,3};
//       vector<int>cp={4,5,1};
//       int w=4;
     
//       vector<vector<int>>dp(cp.size(),vector<int>(w+1,-1));
      
//       cout<<func(cp.size()-1,w,wt,cp,dp);

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main (){
      vector<int>nums={10,20,30,40,50};
      vector<int>dp(nums.size()+1,0);
      dp[0]=nums[0];
      for(int i=1;i<nums.size();i++){
        dp[i]=nums[i]-nums[i-1];
      }
      dp[1]=dp[1]+20;
      dp[4]=dp[4]-20;
      for(int i=1;i<nums.size();i++){
        dp[i]=dp[i-1]+dp[i];
      }
      for(auto it:dp) cout<<it<<" ";


    return 0;
}