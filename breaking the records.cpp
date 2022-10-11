#include<iostream>
#include<vector>
using namespace std ;
int main() {
    int n ;
    cin >> n ;
    vector<int>A(n);
    for(int i=0;i<n;i++){
        cin >> A[i] ;
    }
    int max=A[0];
    int min=A[0];
    int count_max=0;
    int count_min=0;
    for(int i=0;i<n;i++){
        if(A[i]>max){
            max=A[i];
            count_max++ ;
        }
        else if (A[i]<min){
            min=A[i];
            count_min++ ;
        }
    }
    cout << count_max << " " << count_min ;
    return 0 ;
}      
    
    
    
    
    
         
