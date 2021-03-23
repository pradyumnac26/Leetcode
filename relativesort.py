class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        b=[]
        q=[]
        for i in arr2 :
            for j in arr1 :
                if i==j :
                    b.append(i)
        for i in arr1 :
            if i not in b :
                q.append(i)
        q.sort()
        b.extend(q)
        return b
