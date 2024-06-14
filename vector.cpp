// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>

bool comparetor(int i,int j) {
    return i>j;
}

struct myclass {
  bool operator() (int i,int j) { return (i<j);}
} myobject;

using namespace std;
int main() {
    // vector prectise
    vector<int> v;
    v.push_back(5);
    v.push_back(9);
    v.push_back(6);
    v.push_back(12);
    v.pop_back();
    
    cout<<"Demo of vector<int> v"<<endl;
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<", ";
    }
    cout<<endl;
    
    vector<int> v1(5);
    v1[4]=44;
    v1[2]=22;
    cout<<"Demo of vector<int>(n) v1"<<endl;
    for(int i=0;i<v1.size();i++) {
        cout<<v1[i]<<", ";
    }
    cout<<endl;
    
    vector<int> v2(5,1);
    cout<<"Demo of vector<int>(n,v) v2 - with default values"<<endl;
    for(int i=0;i<v2.size();i++) {
        cout<<v2[i]<<", ";
    }
    cout<<endl;
    
    // sorting of vectors
    sort(v.begin(),v.end()); // [first,last) - includes first and excludes last
    cout<<"Demo of sorting vector v"<<endl;
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<", ";
    }
    cout<<endl;
    
    sort(v.begin()+2,v.end()); // sort from 3rd element till end
    // v.begin() - 1st element se sort // v.begin()+1 - 2nd element se sort
    sort(v.begin(),v.begin()+4); //- will sort first 4 elements
    
    sort(v.begin(),v.end(),comparetor);
     cout<<"Demo of sorting vector v with function comporator"<<endl;
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<", ";
    }
    cout<<endl;
    sort(v.begin(),v.end(),myobject);
    cout<<"Demo of sorting vector v with object comporator"<<endl;
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<", ";
    }
    cout<<endl;
    // iterator in vector
    cout<<"Demo of iterators in vector"<<endl;
    vector<int> ::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++) {
        cout<<*itr<<", ";
    } 
    return 0;
}
