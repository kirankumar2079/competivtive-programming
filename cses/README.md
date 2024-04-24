# [CSES](https://cses.fi/) is a website that has problems and resources for coding

## The Algorithms course in that site has 100 problems and I am trying to learn algorithms by following that couse and solving the problems.

## I will List down problems in this README as I solve tham and also have this as a notes to refer in the future


## Problem 1 - Weird Algorithm [link](https://cses.fi/alon/task/1068)

#### Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
#### 3  ->  10  -> 5 -> 16 -> 8 -> 4 -> 2 -> 1 
#### Your task is to simulate the execution of the algorithm for a given value of n.
#### Input
#### The only input line contains an integer n.
#### Output
#### Print a line that contains all values of n during the algorithm.
#### Constraints
#### 1 <= n <= 10^6
#### Example
#### Input:
#### 3
#### Output:
#### 3 10 5 16 8 4 2 1

## Solution 1  Approach [code](https://github.com/kirankumar2079/competivtive-programming/blob/master/cses/algorithms/weird_algorithm.cpp)
#### It is a straightforward problem where you just need to iterate till n = 1 and do the opeartion as insructed and print the value