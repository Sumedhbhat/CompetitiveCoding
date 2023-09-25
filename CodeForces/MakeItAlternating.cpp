#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    // single line to find factorial
    return (n==1 || n==0) ? 1: n * factorial(n - 1); 
}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin>>s;
        int czero=0,cone=0;
        if(s.length()==0) cout<<0<<endl;
        bool one=s[0]=='1'?true:false;
        int remove=0;
        int poss=1;
        for(auto x:s){
            if(one){
                if(x!='0'){
                    cone+=1;
                }else{
                    czero=1;
                    poss*=factorial(cone);
                    one=false;
                    remove+=cone-1;
                    cone=0;
                }
            }else{
                if(x!='1'){
                    czero+=1;
                }else{
                    cone=1;
                    poss*=factorial(czero);
                    one=true;
                    remove+=czero-1;
                }
            }
        }
        cout<<remove<<" "<<poss<<endl;
    }
}