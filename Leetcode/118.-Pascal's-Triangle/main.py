class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        idk = [[1]]
        for i in range(1,numRows):
            idk.append([1])
            for j in range(1,len(idk[i-1])):
                idk[-1].append(idk[i-1][j-1] + idk[i-1][j])
            idk[-1].append(1)
        return idk