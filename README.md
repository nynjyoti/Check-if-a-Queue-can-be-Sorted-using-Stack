# Check-if-a-Queue-can-be-Sorted-using-Stack

Given a Queue Q with first N natural numbers in a random order, write a program to check if it is possible to arrange the elements in Q into another Queue(Q2) in increasing order using a single Stack. You are allowed to do only following operations Push and Pop for the stack, Dequeue for the given Queue(Q), Enqueue for the another Queue(Q2).

Note: Don't use any extra memory/data structures other than above-mentioned data structures(Q, Q2, Stack).

Input:
First line contains a single integer T, the number of testcases. T lines follow, each line contains N space separated natural numbers of Q, read input until 0 is found.

Output:
For every test case, print 'YES'(without quotes) in a new line if it's possible to sort the queue into another queue. If it's not possible, print 'NO'(without quotes) in a new line.
There is a new line at the end of the output.

Explanation:
If Q = {6 1 2 3 4 5}
Pop the first element(6) from Q and push it into the stack.
Now pop all elements in Q and push to another queue(Q2).
Pop 6 from the stack and push it to another queue(Q2).
Now, Q2 is sorted in increasing order. Therefore the output is YES.
If Q = {5 1 2 6 3 4}
Pop 5 from Q and push it to stack.
Pop 1, 2 from Q, and push them to Q2.
Pop 6 from Q and push it to stack.
Now pop 3, 4 from Q, and push them to Q2.
Now from using any of the listed operations, we cannot push 5 into Q2 without using extra memory as 5 is below 6 in the stack. Therefore the output is NO.

Constraints:
1 <= T <= 10 ;
1 <= N <= 10^5
