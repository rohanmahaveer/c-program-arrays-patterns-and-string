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

# REMOVING UNNECESSARY TOWERS

Pakshirajan needs to find out the unnecessary towers located in the same region to file a case in the court. He found that the cell phone towers are arranged in a straight line.
Given the number of towers n, distance at which each tower is located, and the signal  coverage range of each tower. Find the towers that are located unnecessarily. Print -1 if no unnecessary tower are there.

Input Format:

First line of input is an integer corresponding to the number of towers

Next line of inputs are the integers referring to the distance in which the towers are located

Next line of inputs are the integers referring to the  range of towers

Output Format:

The output are the integers corresponding to the distance of the unnecessary towers.
Note: The output should be displayed in increasing order.


Sample Input 1:

6

10 30 200 2 150 170

20 30 40 5 20 10

Sample Output 1:

2

170

Sample Input 2:

4

10 30 200 150

20 30 40 20

Sample Output 2:

-1

Explanation for sample 1:

The first array denotes the distance at which each towers are located.

The second array denotes the coverage range of each tower. For example, if the distance is 200 and the coverage range is 40, it's radiation range is from 160 to 240 kms.

The problem is to find the towers that are having the radiation range within the radiation range of other towers.

Listing below the radiation range of each tower:

1) Tower at distance 10 kms has the range of 20 kms. So it can cover from -10 to 30 kms.

2) Tower at distance 30 kms has the range of 30 kms. So it can cover from 0 to 60 kms.

3) Tower at distance 200 kms has the range of 40 kms. So it can cover from 160 to 240 kms.

4) Tower at distance 2 kms has the range of 5 kms. So it can cover from -3 to 7 kms.

5) Tower at distance 150 kms has the range of 20 kms. So it can cover from 130 to 170 kms.

6) Tower at distance 170 kms has the range of 10 kms. So it can cover from 160 to 180 kms.

From the ranges that are mentioned above, we can see that tower at 2 kms, is completely within the range of the tower at 10 kms, and the tower at 170 kms is completely within range of the tower at 200 kms. So the output is 2 and 170.

Additional Sample TestCases
Sample Input and Output 1 :

6

10 30 200 2 150 170

20 30 40 5 20 10

2

170


# Color Game
The pre-school teacher Rita is very popular among the nursery kids as she is quite friendly and as she teaches all the lessons through some interesting games.


Rita usually takes attendance at the end of the class.

 

In a nursery class, Rita wanted to inroduce the children to different colors. As the children are not familiar with the color names, she thought of conducting a game through which children would be able to learn to identify similar colors.

 

She would ask the question "How many children in this class other than yourself is wearing the dress with same color as your's?" to the children in a random way. The children all replied truthfully, and no child was asked the question more than once.

 

Rita notes down the answers of all children. She was so much immersed in the game that she didn't notice the time and the bell rang.

 

She didn't take attendance. Can you please help Rita in finding the minimum number of children in her class on that day based on the information she has noted down?

 

Input Format:

 

The first line of the input consists of an integer, n that corresponds to the number of children whom Rita questioned.

The second line of the input consists of 'n' space separated integers that corresponds to the answers provided by the 'n' children.

Assume that the maximum value of n is 20.

 

Output Format:

Output consists of an integer that corresponds to the minimum possible number of children present in the class.

 

Sample Input 1:

4

1

1

2

2

 

Sample Output 1:

5

 

Sample Input 2:

4

1

1

2

3

 

Sample Output 2:

9

 

Sample Input 3:

9

2

2

44

2

2

2

444

2

2

 

Sample Output 3:

499

Sample Input 4:
2
0
0

Sample Output 4:
2

 
