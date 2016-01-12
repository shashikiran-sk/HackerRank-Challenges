#!/usr/bin/python
def main():
    s=input()
    n=len(s)
    maxcount=0
    count=0
    lt=None
    for i in range(0,n):
        count=0
        for j in range(0,n):
            if s[i]==s[j]:
                count=count+1
        if maxcount<=count:
            if maxcount==count:
                if ord(lt)>ord(s[i]):
                    lt=s[i]
            else:
                maxcount=count
                lt=s[i]
    print(lt)
    print(maxcount)
        
if __name__=="__main__":
    main()
