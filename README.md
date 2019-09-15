# Find Two Sums #
## Algorithm design ##
To find two keys in an array that add up to another of the array's key, I
implemeted an algorithm similar to the following pseudocode:

        array A = sortedInputData
        unordered_set SET
        for each targetKey (loop from back to front):
            for each checkKey in A:
                if targetKey-checkKey not in SET:
                    add checkKey to SET
                else 
                    targetKey-checkKey + checkKey = targetKey
                    remove checkKey from SET
        remove last element of A

Given that the array only contains positive integers, by traversing through the
array in reverse (outer loop), and removing the last element of the array after
each iteration of the outer loop, the findAllSumKeys avoids iterations and
comparisons of elements array A that cannot possibly add up to the targetKey,
namely integers greater than the target.

The findAllSumKeys returns a vector of tuples containing three ints, one for the
target key, and the other two for the sum keys. Following completing of the
algorithm, a simple loop writes the contents of the vector of tuples to the
outputFile. 

## How to run ##

To compile the program, enter "make" in the program directory.

To run, enter $ ./solution inputFile.txt outputFile.txt 

You may also use the additionally provided input files to test the program, or
include your own.
