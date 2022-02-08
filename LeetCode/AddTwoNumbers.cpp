#include<stdlib.h>
#include<iostream>

struct List{
  int* next=NULL;
  int value;
  List(){

  };
  List(int x){
    value=x;
  }
};

class Solution{
  public:
    List* addTwoNo(List* list1,List* list2){
      while (list1->next==NULL && list2->next==NULL)
      {
        
      }
      
    }
};