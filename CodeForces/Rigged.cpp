#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        int firsts=0,firste=0;
        cin>>n;
        // cout<<"n value "<<n<<endl;
        cin>>firsts>>firste;
        int m=1;
        for(int i=1;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(b>=firste){
                if(a<firsts){
                    m=m==-1?-1:max(m,a+1);
                }else{
                    m=-1;
                }
            }
        }
        cout<<m<<endl;
    }
}