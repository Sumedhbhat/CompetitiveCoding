#include <bits/stdc++.h>
#include <fstream>

using namespace std;
vector<int> low, high;
vector<int> inputData();
int median;
void heapify(vector<int>);
void insertHigh(int);
void insertLow(int);
int popLow();
int popHigh();
int computeMedian(int, int);
void swap(int *, int *);
int main()
{
  // vector<int> in;
  // in = inputData();
  vector<int> in = {1, 2, 3, 4, 5, 6};
  low.push_back(0);
  high.push_back(0);
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
  low.push_back(in[0]);
  count1 = 1;
  median += in[0];
  for (auto i = in.begin() + 1; i != in.end(); i++)
  {
    if (*i < low[1])
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
    median += computeMedian(count1, count2);
  }
  cout << median << endl;
}

void insertLow(int i)
{
  low.push_back(i);
  int loc = low.size();

  int parent = (int)loc / 2;
  while (low[loc] > low[parent])
  {
    swap(&low[loc], &low[parent]);
    loc = parent;
    parent = loc / 2;
  }
}

void insertHigh(int i)
{
  high.push_back(i);
  int loc = high.size();
  int parent = loc / 2;
  while (high[loc] < high[parent])
  {
    swap(&high[loc], &high[parent]);
    loc = parent;
    parent = loc / 2;
  }
}

int popLow()
{
  swap(&low[1], &low[low.size()]);
  int loc = 1;
  while ((low[loc] < low[(2 * loc)] || low[loc] < low[(2 * loc) + 1]) && loc < low.size())
  {
    if (low[(2 * loc)] > low[(2 * loc) + 1])
    {
      swap(&low[loc], &low[(2 * loc) + 1]);
      loc = (2 * loc) + 1;
    }
    else
    {
      swap(&low[loc], &low[(2 * loc)]);
      loc = (2 * loc);
    }
  }
  int last = low[low.size()];
  low.pop_back();
  return last;
}

int popHigh()
{
  swap(&high[1], &high[high.size()]);
  int loc = 1;
  while ((high[loc] > high[(2 * loc)] || high[loc] > high[(2 * loc) + 1]) && loc < high.size())
  {
    if (high[loc] > high[2 * loc + 1] && high[(2 * loc) + 1] < high[(2 * loc)])
    {
      swap(&high[loc], &high[(2 * loc) + 1]);
      loc = (2 * loc) + 1;
    }
    else
    {
      swap(&high[loc], &high[(2 * loc)]);
      loc = (2 * loc);
    }
  }
  int last = high[high.size()];
  high.pop_back();
  return last;
}

int computeMedian(int count1, int count2)
{
  int m;
  if (count1 > count2)
  {
    m = low[1];
  }
  else if (count2 > count1)
  {
    m = high[1];
  }
  else
  {
    m = low[1];
  }
  return m;
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}