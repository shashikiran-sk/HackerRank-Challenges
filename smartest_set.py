test_cases=int(input())
for m in range(test_cases):
    tot_num=int(input())
    numbers=list(map(int,input().split()))
    dicts={}
    res=[]
    for i in numbers:
        binary=str('{0:b}'.format(i))
        count=binary.count('1')
        if count in dicts:
            dicts[count].append(i)
        else:
            dicts.update({count:[i]})
    for key, value in dicts.items():
        res.append(min(value))
    res=sorted(res)
    for x in res:
        print(x,end=" ")
    print(end='\n')

'''
Smartest Set
A smart-set is a set of distinct numbers in which all the elements have the same number of 1s in their binary form. The set of all smallest elements from each smart-set 
that can be formed from a given array of distinct positive numbers is known as the smartest-set.

So given an array of distinct numbers, outline the elements of the smartest-set in ascending sorted order.

Example
Let the array be {6 , 2 , 11 , 1 , 9 , 14 , 13 , 4 , 18}. 
In binary form the set is {110, 010, 1011, 0001, 1001, 1110, 1101, 0100, 10010}. 
The smart-sets are {1, 2, 4}, {6, 9, 18}, {11, 13, 14}.

The smartest-set is {1,6,11} as each element is the smallest element from each smart-set.

Input Format

The first line of input consists of an integer t. This is the number of test cases. For each test case, 
the first line of input contains an integer n. Here n is the number of elements in the array. The next line contains n space separated distinct integers which are the elements 
of the array.

Output Format

The output will space separated integer elements of the smartest-set in ascending order.

Constraints

0 < t < 1000 (This is the number of test cases 
2 < n < 10000 (This is the number of integer elements of the array) 
1 < Xi < 100000 (This is the size of each element of the array)

'''
