#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main(){
    long long int t,prod,r;
    
    cin >>t;
    
    while(t--){
       long long int a,b,lcm;
        cin >>a >>b;
        
        if(a < b){
            
           r = a;
           a = b;
           b = r;
        
        }
        prod = a *b;
        
        do {
            
            r = a %b;
            a = b;
            b = r;
            
        }while(b!=0);
        
        lcm = prod/a;
        
        cout<<a<<" "<<lcm<<endl;
    
        
    }
    return 0;
}
