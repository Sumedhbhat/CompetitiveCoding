#
# @lc app=leetcode id=733 lang=python3
#
# [733] Flood Fill
#

# @lc code=start
class Solution:
    
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        m=len(image)
        n=len(image[0])
        visited=[[0 for x in range(n)] for y in range(m)]
        orgColor=image[sr][sc]
        traverse=[[sr,sc]]
        if orgColor==newColor: return image
        while(traverse):
            i,j=traverse.pop()
            if (i==m or j==n) or (i<0 or j<0):
                continue
            elif image[i][j]==orgColor and visited[i][j]==0:
                visited[i][j]=1
                image[i][j]=newColor
                newValues=[[i-1,j],[i+1,j],[i,j+1],[i,j-1]]
                traverse.extend(newValues)
            else: continue
        return image


# @lc code=end

