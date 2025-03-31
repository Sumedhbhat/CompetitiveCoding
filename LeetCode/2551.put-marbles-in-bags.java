import java.util.PriorityQueue;

// @leet start
class Solution {
  public long putMarbles(int[] weights, int k) {
    final int n = weights.length;
    PriorityQueue<Integer> lowest = new PriorityQueue<>();
    PriorityQueue<Integer> highest = new PriorityQueue<>((a, b) -> b - a);
    long lowestScore = 0;
    long highestScore = 0;

    if (k == 1)
      return 0;
    for (int i = 0; i < n - 1; i++) {
      lowest.add(weights[i] + weights[i + 1]);
      highest.add(weights[i] + weights[i + 1]);
    }
    for (int i = 0; i < k - 1; i++) {
      lowestScore += lowest.poll();
      highestScore += highest.poll();
    }
    return highestScore - lowestScore;
  }
}
// @leet end
