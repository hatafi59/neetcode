class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        n=len(matrix)

        m=len(matrix[0])
 
        l,r=0,n-1
        while l<=r:
            mid=(l+r)//2
            if matrix[mid][-1] < target :
                l=mid+1
            elif matrix[mid][0] > target :
                r=mid-1
            else:
                left,right=0,m-1
                while left<=right :
                    miid=(left+right)//2
                    if matrix[mid][miid] < target :
                        left = miid+1
                    elif matrix[mid][miid] > target :
                        right = miid-1
                    else : return True
                return False
        return False
                    