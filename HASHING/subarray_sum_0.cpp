#include<iostream>
#include<unordered_set>
using namespace std;
bool is_subarray_sum_zero(int *arr,int n){
  unordered_set<int>s;
  int pre=0;
  for(int i=0;i<n;i++){
      pre+=arr[i];
      if(pre==0 or s.find(pre)!=s.end()){
          return true;
      }
      s.insert(pre);
  }
  return false;
}
int main(){
    int arr[]={1,2,3,5,-2,-6};
    int n=sizeof(arr)/sizeof(int);
    cout<<is_subarray_sum_zero(arr,n);
}