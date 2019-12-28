# CUMULATIVE SUM

Write a program to find the cumulative sum in an array.

For eg, for the array {2,3,5,7,1}, the cumulative sum array is {2,5,10,17,18}

Note:
Refer to the problem requirements.
 

Input Format:

Input consists of n+1 integers. The first integer corresponds to ‘n’ , the size of the array. The next ‘n’ integers correspond to the elements in the array. Assume that the maximum value of n is 15.

Output Format:

Refer  sample output for details. The integers in the output are separated by a single space.

[All text in bold corresponds to input and the rest corresponds to output]
 

Sample Input 1:

Enter the number of elements in an array

5

Enter the array elements
2

3

5

7

1

Sample Output 1:

Cumulative sum

2 5 10 17 18

# UNIQUE COUNT

Jack is a farmer and he had planted many crops in his farm few months ago. All the plants are well grown now(denoted as upper case alphabets) and now he is planting few more new crops again (denoted as small letter alphabets). Now he wants to find how many types of crops are there in the farm because he wants to get pesticides for different crops. For example, if there are 2 well grown potato plants(PP) and 3 small potato plants (ppp) , all the plants together will be counted as 1 plant type. Help him by writing the program to find how many plant types are planted .

A farmer wants to count the number of unique plant  types in a field.

Input Format:

The first line of the input consists of an integer corresponding to the number of plants.

From second line sequence of alphabets representing the plants in the field.


Output Format:

The output consists of the total number of plant types in the field.

 

 

Sample Input:

5

A

M

a

O

M


Sample Output:

3
 

Problem Requirements:

C

Keyword	 Min Count 	Max Count

[         0          0

Keyword 	Min  Count 	Max Count

]	          0	         0

# SPIKES DETECTION

Write a program to find the number of spikes, the origination of a spike and its span in a dc signal sample.

 

A spike in this case is assumed to be a segment where the signal increases to a point and then decreases (or vice versa). The point from where it starts increasing and decreasing (or vice versa) and back to the stable point is said to be the span of spike.
Input and Output Format:

 

Input consists of n+1 integers.

 

The 1st integer corresponds to n, the number of signal sample values.

The next n integers correspond to the signal sample values in order.

 

Output consists of the number of spikes and the origin and span of each spike.
Assume that the maximum number of spikes in the input signal is 20.

If there are multiple spikes, print the spike details in the order in which they appear in the signal.

Refer sample output for formatting specifications.

 

Sample Input 1:

16

50

50

50

50

50

60

70

80

70

60

50

50

50

50

50

50

 

Sample Output 1:

1

5 7
 

Sample Input 2:
20

1          

1 

2 

3 

4 

5 

4 

3 

2 

1 

1 

0 

-1 

-2 

-3 

-1 

1 

1 

1 

1

Sample Output 2:

2

2 9

11 7
