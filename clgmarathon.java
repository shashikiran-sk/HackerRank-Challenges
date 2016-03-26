import java.io.*;
public class CandidateCode 
{ 

    public static String collegecomparison(int[] input1,int[] input2)
    {
        if(input1.length!=input2.length)
   		return "Invalid";
   	else
   	{
		int i, key, j;
   for (i = 1; i < input1.length; i++)
   {
       key = input1[i];
       j = i-1;
       while (j >= 0 && input1[j] > key)
       {
           input1[j+1] = input1[j];
           j = j-1;
       }
       input1[j+1] = key;
   }
   for (i = 1; i < input1.length; i++)
   {
       key = input2[i];
       j = i-1;
       while (j >= 0 && input2[j] > key)
       {
           input2[j+1] = input2[j];
           j = j-1;
       }
       input2[j+1] = key;
   }
   	for(i=0;i<input1.length;i++)
   		if(input1[i]!=input2[i])
   			if(input1[i]<0 ||input2[i]<0)
   				return "Invalid";
   			else
   			return "Unequal";
   	return "Equal";
   }
    }
}