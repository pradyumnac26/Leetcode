class Solution:
    def commonChars(self, A: List[str]) -> List[str]:
        res = collections.Counter(A[0])
        for i in A[1 : ] :
            res = res & collections.Counter(i)
        return res.elements()
