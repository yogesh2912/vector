// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main() {
    // Write C++ code here
    // It is almost similar to vector stl and has almost same functionalities but has one same difference
    // It internally uses link-list to store data and vector uses array to store data
    // So list has few extra methods like push_front() and pop_front() than vector
    list<int> l = {6,3,8,2,9,10};
    l.push_back(4);
    l.push_front(11);
    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"Back() "<<l.back()<<endl; // return int
    cout<<"Front() "<<l.front()<<endl; // return int
    cout<<"Begin() "<<*l.begin()<<endl; // return iterator
    
    l.pop_back();
    l.pop_front();
    cout<<"List after pop_back() and pop_front()"<<endl;
    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;
    
    // if I want to remove last element of list
    // i) l.pop_back() or
    // ii) l.erase(--l.end())
    // if I want to remove first element of list
    // i) l.pop_front();
    // ii) l.erase(l.begin())
    
    list<int> ::iterator itr1,itr2;
    itr1 = l.begin();
    itr1++;
    l.erase(itr1);  // erase(iterator)
    cout<<"Erase(iterator) "<<endl;
    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;
    
    itr1 = l.begin();
    itr1++;
    itr2=l.end();
    itr2--;
    itr2--;
    cout<<"Erase[startIterator,endIterator)"<<endl;
    l.erase(itr1,itr2);
    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;
    
    // in set and map we have erase(element) but in list we don't have erase(element) as there can be multiple same elements can be present in a list
    return 0;
}
