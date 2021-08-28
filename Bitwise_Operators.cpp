//There are 6 bitwise operators and,or,xor,not,left shift,right shift
#include<iostream>
using namespace std;
bool kthbitright(int n, int k);
int count_set_bit(int n);
int main(){
    // int x= 4,y=2;
    // cout<<"And "<<(x & y)<<endl;
    // cout<<"Or "<<(x|y)<<endl;
    // cout<<"Left Shift "<<(x<<y)<<endl;
    // cout<<"Right Shift "<<(x>>y)<<endl;
    // cout<<"Not "<<(~y)<<endl;
    // cout<<"XOR "<<(x^y)<<endl;
    // cout<<kthbitright(7,2)<<" Kthbit";
    cout<<count_set_bit(5);
    }
//----------------------------------------------------------------------------------------------------------------
//Check if Kth bit is set or not 
//Using left shift or right shift
//left shift 1 by k-1 so that kth bit is set for this and rest 0 and then take &
bool kthbitleft(int n,int k){
    int ans= (n&(1<<(k-1)));
    if (ans==0){return 0;}
    return 1;
}
bool kthbitright(int n,int k){
    int ans= ((n>>(k-1))& 1);
    if (ans==0){return 0;}
    return 1;
}
//-------------------------------------------------------------------------
//Count set bits
//Naive solution:
int count_set_bit(int n){
    int res=0;
    while(n>0){
    if((n&1)==1){
        res++;
    }
    n>>1;
    }
    return res;
}


