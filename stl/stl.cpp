#include<bits/stdc++.h>
using namespace std;

void explainPairs(){
    pair<int,int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl ;
    pair<int,pair<int,int>> k = {1,{3,4}};
    cout<<k.first<<" "<<k.second.second<<" "<<k.second.first<<endl;
    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl;
    pair<int,int> p1 = {2,3};
    pair<int,int> p2 = {4,5};
    p1.swap(p2);
    cout<<p1.first<<" "<<p1.second<<endl;
    //all pair functions have space and time complexity(O(1))

}
void explainList(){
    list<int> l;
    l.push_back(1);
    l.emplace_back(2);
    l.push_front(3);
    l.emplace_front(4);
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // list is a doubly linked list and it does not support random access like vector and deque but it supports bidirectional iterators which means we can traverse the list in both directions.
    //time complexity of all the operations like insertion and deletion in the list is O(1) because the list is implemented as a doubly linked list which allows us to perform these operations in constant time but the time complexity of accessing an element in the list is O(n) because we have to traverse the list from the beginning to the position of the element we want to access.
}
void explainDeque(){
    deque<int> d;
    d.push_back(1);
    d.emplace_back(2);
    d.push_front(3);
    d.emplace_front(4);
    for(auto it=d.begin();it!=d.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // deque is a double ended queue which means we can insert and delete elements from both ends of the deque.
    // deque is implemented as a dynamic array of fixed size blocks and it supports random access like vector but it also supports insertion and deletion at both ends of the deque.
    //functions are same as the List and vectors but the main difference is that deque supports random access like vector and it also supports insertion and deletion at both ends of the deque while list does not support random access and it only supports insertion and deletion at both ends of the list.
    // time complexity of all the operations like insertion and deletion at both ends of the deque is O(1) because the deque is implemented as a dynamic array of fixed size blocks which allows us to perform these operations in constant time but the time complexity of accessing an element in the deque is O(1) because the deque supports random access like vector.
}
void explainStack(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    // stack is a data structure which follows the Last In First Out (LIFO) principle which means the last element inserted in the stack will be the first element to be removed from the stack.
    // stack does not support iterators and it does not support random access like vector and deque but it supports only three operations push, pop and top.
    //s.top() will return the top element of the stack without removing it and s.pop() will remove the top element of the stack and reduce the size of the stack by 1.
    //time complexity of all the operations like push, pop and top in the stack is O(1) because the stack is implemented as a dynamic array or a linked list which allows us to perform these operations in constant time.
}
void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    // queue is a data structure which follows the First In First Out (FIFO) principle which means the first element inserted in the queue will be the first element to be removed from the queue.
    // queue does not support iterators and it does not support random access like vector and deque but it supports only three operations push, pop and front.
    //q.front() will return the front element of the queue without removing it and q.pop() will remove the front element of the queue and reduce the size of the queue by 1.
    //time complexity of all the operations like push, pop and front in the queue is O(1) because the queue is implemented as a dynamic array or a linked list which allows us to perform these operations in constant time.
}
void explainPriorityQueue(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    // priority queue is a data structure which follows the principle of priority which means the element with the highest priority will be the first element to be removed from the priority queue.
    // priority queue does not support iterators and it does not support random access like vector and deque but it supports only three operations push, pop and top.
    //pq.top() will return the element with the highest priority in the priority queue without removing it and pq.pop() will remove the element with the highest priority in the priority queue and reduce the size of the priority queue by 1.
    //generally the element with the highest value will have the highest priority in the priority queue but we can also define our own priority by using a custom comparator function.
    priority_queue<int,vector<int>,greater<int>> minHeap;
    minHeap.push(1);
    minHeap.push(2);    
    minHeap.push(3);
    cout<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<minHeap.top()<<endl;
    // in the above code we have defined a min heap by using the greater<int> comparator which means the element with the lowest value will have the highest priority in the min heap.
    // we wrote greater<int> because the default comparator for priority queue is less<int> which means the element with the highest value will have the highest priority in the priority queue but by using greater<int> we can change the priority to be based on the lowest value instead of the highest value.  
    // we wrote vector<int> because the default container for priority queue is vector but we can also use other containers like deque or list as the underlying container for the priority queue by specifying it as the second template parameter of the priority queue.
    //time complexity of all the operations like push, pop and top in the priority queue is O(log n) where n is the number of elements in the priority queue because the priority queue is implemented as a binary heap which is a complete binary tree and the height of the binary heap is log n where n is the number of elements in the binary heap.
}
void explainMultiSet(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.emplace(4);

    for(auto it=ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    auto it = ms.find(2);
    // auto it = ms.find(5); 5 is not present in the multiset so it will return ms.end() which is an iterator pointing to the position after the last element of the multiset.
    ms.erase(3);
    // ms.erase(it) will erase the element at the position of iterator it and return the iterator pointing to the next element after the erased element.
    int cnt = ms.count(3);
    // ms.count(3) will return the number of occurrences of the element 3 in
    // the multiset which can be more than 1 because multiset allows duplicate elements to be inserted in the multiset.
    // it is also ordered like set and it is implemented as a balanced binary search tree (BST) which means the time complexity of all the operations like insert, delete and find in the multiset is O(log n) where n is the number of elements in the multiset.
}
void explainSet(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.emplace(4);

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    auto it = s.find(2);
    // auto it = s.find(5); 5 is not present in the set so it will return s.end() which is an iterator pointing to the position after the last element of the set.
    s.erase(3);
    // s.erase(it) will erase the element at the position of iterator it and return the iterator pointing to the next element after the erased element.
    int cnt = s.count(2);
    // s.count(2) will return the number of occurrences of the element 2 in
    // the set which will be either 0 or 1 because set does not allow duplicate elements to be inserted in the set.
    auto it1 = s.find(3);
    auto it2 = s.find(4);
    s.erase(it1,it2);
    // it will erase the elements in the range [it1,it2) which means it will erase the element at the position of iterator it1 and all the elements after it until the position of iterator it2 but it will not erase the element at the position of iterator it2.
    cout<<*s.lower_bound(2)<<endl;
    cout<<*s.upper_bound(2)<<endl;  
    // lower_bound(2) will return an iterator pointing to the first element in the set which is not less than 2 and upper_bound(2) will return an iterator pointing to the first element in the set which is greater than 2.

    // set is a data structure which stores unique elements in sorted order and it does not allow duplicate elements to be inserted in the set.
    // set supports bidirectional iterators which means we can traverse the set in both directions but it does not support random access like vector and deque.
    // set is implemented as a balanced binary search tree (BST) which means the time complexity of all the operations like insert, delete and find in the set is O(log n) where n is the number of elements in the set.
}

void explainMap(){
    map<int,string> m;
    m[1] = "abc";
    m.emplace(2,"bcd");
    m.insert({3,"cde"});
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    auto it = m.find(2);
    // auto it = m.find(5); 5 is not present in the map so it will return m.end() which is an iterator pointing to the position after the last element of the map.
    m.erase(3);
    // m.erase(it) will erase the element at the position of iterator it and return the iterator pointing to the next element after the erased element.
    int cnt = m.count(2);
    // m.count(2) will return the number of occurrences of the element 2 in
    // the map which will be either 0 or 1 because map does not allow duplicate elements to be inserted in the map.
    auto it1 = m.find(1);
    auto it2 = m.find(3);
    m.erase(it1,it2);
    // it will erase the elements in the range [it1,it2) which means it will erase the element at the position of iterator it1 and all the elements after it until the position of iterator it2 but it will not erase the element at the position of iterator it2.
    cout<<m.lower_bound(2)->first<<" "<<m.lower_bound(2)->second<<endl;
    // the return value of lower_bound(2) is an iterator pointing to the first element in the map which is not less than 2 and we can access the key and value of the element by using the first and second members of the pair returned by the iterator.

}
bool customComparator(pair<int,int> a,pair<int,int> b){
    // we want to sort the pairs in descending order of the first element and if the first elements are equal then we want to sort the pairs in ascending order of the second element.
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first>b.first; 
}
void explainExtra(){
    //sort(a,a+n) will sort the array a in ascending order and sort(v.begin(),v.end()) will sort the vector v in ascending order.
    // we can also sort in descending order by using greater<int> as the third parameter of the sort function like sort(a,a+n,greater<int>()) or sort(v.begin(),v.end(),greater<int>()).
    // we can also sort in custom order by using a custom comparator function as the third parameter of the sort function like sort(a,a+n,customComparator) or sort(v.begin(),v.end(),customComparator) where customComparator is a function which takes two parameters and returns a boolean value which indicates whether the first parameter should come before the second parameter in the sorted order.

}
    
int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(2,3);
    vector<int>::iterator it = v.begin();
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    vector<pair<int,int>>::iterator it2 = vec.begin();
    cout<<(*it2).first<<" "<<it2->second<<endl;
    // it2 is an iterator so we cannot use it2.first or it2.second directly, we have to dereference it first and then access the members of the pair.
    it2++;
    cout<<it2->first<<" "<<it2->second<<endl;
    vector <int> v1(5,100);
    // space of the vector will be 5 and the values of 5 terms will be 100 
    vector<int> v2(v1);
    // v2 will be a copy of v1
    for(auto it=v2.begin();it!=v2.end();it++){
        cout<<*it<<" ";
    }
    // we used auto keyword to avoid writing the long iterator type of vector<int>
    // v.erase(it) will erase the element at the position of iterator it and return the iterator pointing to the next element after the erased element.
    vector<int> v3(2,100);
    v3.insert(v.begin(),300);
    for(auto it=v3.begin();it!=v3.end();it++){
        cout<<*it<<" ";
    }
    v3.insert(v3.begin()+1,2,10);
    for(auto it=v3.begin();it!=v3.end();it++){
        cout<<*it<<" ";
    }
    vector<int> copy(2,50);
    v3.insert(v3.end(),copy.begin(),copy.end());
    for(auto it=v3.begin();it!=v3.end();it++){
        cout<<*it<<" "; 
    }
    // v.size() will return the number of elements in the vector and v.capacity() will return the total capacity of the vector which is the maximum number of elements that can be stored in the vector without resizing.
    //v.pop_back() will remove the last element of the vector and reduce the size of the vector by 1 but it will not change the capacity of the vector.
    // v.clear() will remove all the elements of the vector and reduce the size of the vector to 0 but it will not change the capacity of the vector.
    //v.empty() will return true if the vector is empty and false if the vector is not empty.

     return 0;
}