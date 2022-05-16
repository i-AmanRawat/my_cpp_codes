/*
STL is used bcz its a good idea to reinvent the wheel;
Components of STL :
1.Containers  --> object which stores data , use template classes 
2.Algorithm   --> use template functions to process data like sorting , searching. 
3.Iterators   --> is an objects that points to an element in a container (just like pointer but it is a object)
                connects algorithm with containers.

CONTAINERs :
i.      Sequence containers --> in linear fashion like vector, list, dequeue
ii.     Associative containers  --> direct access like set, multiset, map, multi-map
iii.    Derived containers   --> real world modeling like stack(LIFO), queue(FIFO), priority queue.

Sequence containers :
vector - random access --> fast 
         in middle insertion slow 
         at end insertion fast

list   - random access --> slow 
         in middle insertion --> fast
         at end insertion --> fast

Associative containers : All operations are fast 
                         except random access

Derived containers : Depends --> data structure                   

*/
