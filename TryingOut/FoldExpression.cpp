#include<bits/stdc++.h>

using namespace std;

template<typename T> T add (T a, T b){
  return a+b;
}

template<typename... Args> void readln(Args&... args){
  ((cin>> args),...);
}

template<typename... Args> void writeln(Args... args){
  ((cout<<args<<" "),...);
  cout<<endl;
}

auto sum=[](int a){
  cout<<"something"<<endl;
};

int main(){
  int x;
  double y;
  readln(x,y);
  writeln(x,"somestring",y);
  sum(5);
  return 0;
}