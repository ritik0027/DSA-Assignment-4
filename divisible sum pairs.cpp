#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int n,k,count =0 ;
    cin >> n >> k ;
    vector<int>A(n);
    for(int i=0;i<n;i++){
        cin >> A[i] ;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((A[i]+A[j])%k==0){
                    count ++ ;
                }
            }
        }
     cout << count ;   
    return 0;
}
