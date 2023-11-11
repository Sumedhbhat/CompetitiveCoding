#include <bits/stdc++.h>

using namespace std;

vector<vector<bool>> visi;

void solve(int x, int y, vector<vector<bool>> input, int h, int w)
{
  if (visi[x][y] == true)
    return;
  visi[x][y] = true;
  if (input[x][y] == false)
    return;
  for (int i = -1; i <= 1; i++)
    for (int j = -1; j <= 1; j++)
    {
      if (x + i < 0 or x + i >= h or y + j < 0 or y + j >= w)
        continue;
      solve(x + i, y + j, input, h, w);
    }
}

int main()
{
  int h, w;
  cin >> h >> w;
  vector<vector<bool>> input;
  for (int i = 0; i < h; i++)
  {
    input.push_back({});
    string c;
    cin >> c;
    for (int j = 0; j < w; j++)
    {
      input[i].push_back(c[j] == '#' ? true : false);
    }
  }
  int count = 0;
  vector<vector<bool>> vis(h, vector<bool>(w));
  visi = vis;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      if (input[i][j] == true and visi[i][j] == false)
      {
        count++;
        solve(i, j, input, h, w);
      }
    }
  }
  cout << count << endl;
}