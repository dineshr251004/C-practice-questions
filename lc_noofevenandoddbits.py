class Solution(object):
    def evenOddBit(self, n):
        binary=[]
        floordiv=n
        while floordiv>0:
            binary.append(floordiv%2)
            floordiv=floordiv//2
        n1=[]
        for i in range(0,len(binary)):
            if binary[i]==1:
                n1.append(i)
        even=0
        odd=0
        for i in n1:
            if i%2==0:
                even+=1
            else:
                odd+=1
        op=[]
        op.append(even)
        op.append(odd)
        return op
