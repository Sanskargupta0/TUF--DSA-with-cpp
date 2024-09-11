#include<bits/stdc++.h>
using namespace std;

//Pairs

void pairs(){
    // define pair
    pair<int, int> p1 = {1, 2};
    
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int, pair<int, int>> p2 =  {1, {2, 3}};

    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

    cout<<arr[0].first<<" "<<arr[0].second<<endl;

    cout<<arr[1].first<<" "<<arr[1].second<<endl;

    cout<<arr[2].first<<" "<<arr[2].second<<endl;

}


// Define Vector in C++
// Vector is a dynamic array in C++ STL which can grow in size automatically when elements are inserted.

void  vectors(){

    // Declaration of vector
    vector<int> v;

    // Inserting elements in vector
    v.push_back(1);
    // general emplace_back is faster than push_back
    v.emplace_back(2);

    cout<<v[0]<<" "<<v[1]<<endl;

    //createing a vector of pair
    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    // in emplace_back we have to pass the pair it automatically creates the pair
    vec.emplace_back(3, 4);

    cout<<vec[0].first<<" "<<vec[0].second<<endl;
    cout<<vec[1].first<<" "<<vec[1].second<<endl;

    //createing a vector of size 5 and all elements are 10

    vector<int> v1(5, 10);

    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    //copying v1
    vector<int> v2(v1);

    v2.emplace_back(20);

    cout<<v2.size()<<endl;

    // accessing elements of v2 using iterator
    vector<int>::iterator it = v2.begin();
    for (it; it != v2.end(); it++) {
        // it will first print the element stored in the address of 
        //the iterator and then the address of the element
        cout << &(*it) << " ";
    }
    cout<<endl;

    //iterator points to the address of the element it have
    // .begin() points to the first element of the vector
    // .end() points to the next of the last element of the vector
    // .rbegin() points to the last element of the vector
    // .rend() points to the previous of the first element of the vector

    cout<<v[0]<<" "<<v.at(0)<<endl;

    // .front() points to the first element of the vector
    // .back() points to the last element of the vector

    cout<<v.front()<<" "<<v.back()<<endl;

    // auto keyword is used to automatically detect the data type of the variable

    for(auto it = v2.begin(); it!=v2.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // v2 = {10, 10, 10, 10, 10, 20}
    // to erase the only one element from the vector
    v2.erase(v2.begin());
    // v2 = {10, 10, 10, 10, 20}
    for(auto it = v2.begin(); it!=v2.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    // for multiple elements  erase(starting iterator, ending iterator) 
    // beginning is inclusive and ending is exclusive
    v2.erase(v2.begin(), v2.begin()+2);
    // v2 = {10, 10, 20}
    for(auto it = v2.begin(); it!=v2.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // Insert function

    vector<int> v3(2, 100); // v3 = {100, 100}
    v3.insert(v3.begin(), 300); // v3 = {300, 100, 100}
    v3.insert(v3.begin()+1, 2, 10); // v3 = {300, 10, 10, 100, 100}


    vector<int> copy(2, 50); // copy = {50, 50}
    v3.insert(v3.begin(), copy.begin(), copy.end()); // v3 = {50, 50, 300, 10, 10, 100, 100}


    cout<<v3.size()<<endl; // 7

    v3.pop_back(); // v3 = {50, 50, 300, 10, 10, 100}

    v3.swap(copy); // v3 = {50, 50} copy = {50, 50, 300, 10, 10, 100}

    v3.clear(); // v3 = {}

    cout<<v3.empty()<<endl; // 1
    


}

void explainList(){
    list<int> ls;

    ls.push_back(1); // {1}
    ls.emplace_back(2); // {1, 2}

    // in list we can insert the element at the front also
    ls.push_front(3); // {3, 1, 2}
    ls.emplace_front(4); // {4, 3, 1, 2}

    // rest of the functions are same as vector
    // pop_back(), pop_front(), insert(), erase(), clear(), empty(), size()
    // begin(), end(), rbegin(), rend(), front(), back()
}

void explainDeque(){
    deque<int> dq;

    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}

    dq.push_front(3); // {3, 1, 2}
    dq.emplace_front(4); // {4, 3, 1, 2}

    // rest of the functions are same as vector
    // pop_back(), pop_front(), insert(), erase(), clear(), empty(), size()
    // begin(), end(), rbegin(), rend(), front(), back()
}

void explainStack(){
    // stack is a container adaptor that provides LIFO (Last In First Out) operations
    stack<int> st;

    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}

    cout<<st.top()<<endl; // 3

    st.pop(); // {2, 1}

    cout<<st.top()<<endl; // 2

    cout<<st.size()<<endl; // 2

    cout<<st.empty()<<endl; // 0
}

void explainQueue(){
    // queue is a container adaptor that provides FIFO (First In First Out) operations
    queue<int> q;

    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(3); // {1, 2, 3}

    cout<<q.front()<<endl; // 1

    q.pop(); // {2, 3}

    q.back() += 10; // {2, 13}

    cout<<q.front()<<endl; // 2

    cout<<q.size()<<endl; // 2

    cout<<q.empty()<<endl; // 0
}

void exlplainPriority_queue(){
    // priority queue is a container adaptor that provides constant 
    // lookup of the largest (by default) element
    /*
    Inside it A tree is maintained in which every element is in queue has a priority and out of all the elements the element with 
    the highest priority is the one which is at the root of the tree.
    */

    //minimum heap
    priority_queue<int> pq;

    pq.push(1); // {1}
    pq.push(3); // {3, 1}
    pq.push(2); // {3, 2, 1}

    cout<<pq.top()<<endl; // 3

    pq.pop(); // {2, 1}

    cout<<pq.top()<<endl; // 2

    cout<<pq.size()<<endl; // 2

    cout<<pq.empty()<<endl; // 0


    //maximum heap
    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(1); // {1}
    pq1.push(3); // {1, 3}
    pq1.push(2); // {1, 2, 3}


    cout<<pq1.top()<<endl; // 1
    
}

void explainSet(){
    // set is a container that stores unique elements following a specific order
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}
    st.insert(3); // {1, 2, 3, 4}

    //Functionality of set is same as vector
    // insert(), erase(), clear(), empty(), size()
    // begin(), end(), rbegin(), rend(), find()

    //set<int>::iterator it = st.find(3);

    set<int>::iterator it = st.find(2);

    

    auto it2 = st.find(6);
    // if element is not present in the set then it will return the end of the set

    for(auto it = st.begin(); it!=st.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    st.erase(3); // {1, 2, 4}

    for(auto it = st.begin(); it!=st.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    int cnt = st.count(3); // 
    
    cout<<cnt<<endl;

    st.erase(st.begin(), st.find(4)); // { 4 }

    for(auto it = st.begin(); it!=st.end(); it++){
        cout<<*it<<" ";
    }
}


int main(){
    //pairs();
    //vectors();
    //explainList();
    //explainDeque();
    //explainStack();
    //explainQueue();
    //exlplainPriority_queue();
    explainSet();
    return 0;
}