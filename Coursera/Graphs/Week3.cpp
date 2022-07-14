#include <bits/stdc++.h>
#include <fstream>

using namespace std;
vector<int> low, high;
vector<int> inputData();
long int median;
void heapify(vector<int>);
void insertHigh(int);
void insertLow(int);
int popLow();
int popHigh();
int computeMedian();
void swap(int, int, int);
int main()
{
  vector<int> in;
  in = inputData();
  heapify(in);
  return 0;
}

vector<int> inputData()
{
  vector<int> temp;
  ifstream indata;
  int num;
  indata.open("Median.txt");
  if (!indata)
  {
    cout << "The File can't be opened." << endl;
    exit(1);
  }
  while (indata)
  {
    indata >> num;
    temp.push_back(num);
  }
  return temp;
}

void heapify(vector<int> in)
{
  int count1, count2 = 0;
  insertLow(in[0]);
  count1 = 1;
  median += in[0];
  for (auto i = in.begin() + 1; i != in.end(); i++)
  {
    if (*i < low[0])
    {
      insertLow(*i);
      count1 += 1;
    }
    else
    {
      insertHigh(*i);
      count2 += 1;
    }
    if (count1 > count2 + 1)
    {
      insertHigh(popLow());
      count1 -= 1;
      count2 += 1;
    }
    else if (count2 > count1 + 1)
    {
      insertLow(popHigh());
      count1 += 1;
      count2 -= 1;
    }
    median += computeMedian();
  }
}

void insertLow(int i)
{
  low.push_back(i);
  int loc = low.size() - 1;

  int parent = (int)loc / 2;
  while (low[loc] > low[parent] || parent != 9)
  {
    swap(1, loc, parent);
    loc = parent;
    parent = loc / 2;
  }
}

void insertHigh(int i)
{
  high.push_back(i);
  int loc = high.size() - 1;
  int parent = loc / 2;
  while (high[loc] < high[parent])
  {
    swap(0, loc, parent);
    loc = parent;
    parent = loc / 2;
  }
}

int popLow()
{
}

int popHigh()
{
}

int computeMedian()
{
}

void swap(int c, int loc, int parent)
{
  if (c == 1)
  {
    int temp = low[loc];
    low[loc] = low[parent];
    low[parent] = temp;
  }
  if (c == 0)
  {
    int temp = high[loc];
    high[loc] = high[parent];
    high[parent] = temp;
  }
}