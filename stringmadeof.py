l={'1':2,'2':5,'3':5,'4':4,'5':5,'6':6,'7':3,'8':7,'9':6,'0':6}
s=raw_input()
count=0
for i in range(len(s)):
	count+=l[s[i]]
print count

'''You are given a string, which contains entirely of decimal digits (0-9).
 Each digit is made of a certain number of dashes, as shown in the image below. 
 For instance 1 is made of 2 dashes, 8 is made of 7 dashes and so on.

digits made of dashes

You have to write a function that takes this string message as an input and returns a corresponding value in terms of a number. 
This number is the count of dashes in the string message.

Note:
|   
|  
0 consists of 6 dashes, 1 consists of 2 dashes, 2 consists of 5 dashes, 3 consists of 5 dashes, 4 consists of 4 dashes,
 5 consists of 5 dashes, 6 consists of 6 dashes, 7 consists of 3 dashes [though the figure shows that 7 consists of 4 dashes
  but due to minor mistake in the problem please write your solution assuming 7 consists of 3 dashes], 8 consists of 7 dashes,
   9 consists of 6 dashes.

Constraints

    String message will contain at least one digit, but not more than 100
    Each character in code will be a digit ('0'-'9').

Sample Input
(Plaintext Link)

12134

Sample Output
(Plaintext Link)

18

