The Fibonacci recurssion is a highly inefficient algorithm.It has a time complexity of Big O(n^2) with the values increasing to the power of 2, due to the values almost doubling in size with growing numbers.

Likewise to the factorial recurssion, the Fibonacci recurssion contains a space complexity of Big O(n) due to the space required on the call stack.

In conclusion, recurssion functions should be avoided as they are inefficient with low-quality time complexities. To counter this, there are memoization techniques which in simple terms means caching previous results. Or an even better approach to use iterative methods which yield Big O(n) which is fairly average. 