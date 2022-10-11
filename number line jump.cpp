#include<iostream>
using namespace std ;
int main(){
    int x1,x2,v1,v2;
    cin >> x1 >> v1;
    cin >> x2 >> v2;
    if(x1<x2){
        if(v1<=v2){
            cout << "NO" ;
        }
        else {
            while(x1<=x2){
                if(x1==x2){
                    cout << "YES" ;
                }
                x1+=v1;
                x2+=v2;
            }
        }
    }
    else {
        if(v2<=v1){
            cout << "NO" ;
        }
        else {
            while(x2<=x1){
                if(x1==x2){
                    cout << "YES" ;
                }
                x1+=v1;
                x2+=v2;
            }
        } 
    }
    return 0;
}
