class Solution:
    def fib(self, n: int) -> int:
        a=0
        b=1
        x=0
        if n==0 :
            return 0
        elif n==1 :
            return 1
        
        for i in range(1,n):
            x=a+b
            a=b
            b=x
        return x
            
