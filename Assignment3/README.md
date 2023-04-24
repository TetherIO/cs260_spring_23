# Assingment 3 (Linked Queue)
## Max Chase


### Time complexity analysis:

Given the hint, that operations not having to do with the structure as O(1), I would think that all three methods will have a constant time complexity O(1). They all perform a fixed number of operations regardless of the input; the operations performed by the methods only accoess and modify the first/last nodes of the list, which remains constant as the size of the list increases.

### Requirements:

1. Uses a linked-list to store values in the queue:
![](https://github.com/TetherIO/cs260_spring_23/blob/main/Assignment3/linkedliststructandclass.png?raw=true)
2. Has an enqueue, adds value to back of queue:
![](https://user-images.githubusercontent.com/96389721/234133650-0173f7d0-15a3-402f-bd37-0fe90159b9a9.png)
3. Has a dequeue method-- removes and returns first value:
![](https://github.com/TetherIO/cs260_spring_23/blob/e542ce9a1dc19186ad596cf728d378cb4e14e984/Assignment3/linkedlistdequeue%20.png)
4. Has a peek method-- returns, without removing, first value:
![](https://github.com/TetherIO/cs260_spring_23/blob/e542ce9a1dc19186ad596cf728d378cb4e14e984/Assignment3/linkedlistpeek%20.png)


### Tests & Results:

![](https://github.com/TetherIO/cs260_spring_23/blob/e542ce9a1dc19186ad596cf728d378cb4e14e984/Assignment3/tests.png)
![](https://github.com/TetherIO/cs260_spring_23/blob/e542ce9a1dc19186ad596cf728d378cb4e14e984/Assignment3/testresults.png)
