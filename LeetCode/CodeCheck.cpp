#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(){
  vector<int> number;
  number.push_back(10);
  number.push_back(11);
  number.push_back(13);
  number.shrink_to_fit();
  cout<< number.front()<<endl;
  cout<<number.max_size()<<endl;
  cout<<number.capacity()<<endl;
}