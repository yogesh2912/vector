// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main() {
    // Write C++ code here
    std::cout << "Basic operation in unordered_Map"<<endl;
    
    unordered_map<int,int> M;
    M.insert({9,99}); // key and value is stored as pair.
    M[10]=100;
    
    int ele = 9;
    if(M.find(ele)!=M.end()) {
        cout<<"Element found "<<M[ele]<<endl;
        //M[ele]++;
    }
    else {
        cout<<"Element not found"<<endl;
        // do insertion over here
    }

    
    cout<<"Demo of count() in map/unordered_map "<<M.count(9)<<endl;
    // M.count(key) - it returns 1 if key is present else 0
    // map<int,list<int> ::iterator> M;
    // M.count(5); if 5 key present then 1 else 0 
    // so instead of if(M.find(ele)!=M.end()) do if(M.count(ele))
    
    // iterator in Map
    unordered_map<int,int> ::iterator itr;
    for(itr=M.begin();itr!=M.end();itr++) {
        // since we store key and value as pairs so we do first and second.
        cout<<"Key = "<<(*itr).first<<" Value = "<<itr->second<<endl;
    }
    
    cout<<"Iterating over unordered_map using AUTO"<<endl;
    for(auto a:M) {
        cout<<"Key = "<<a.first<<" Value = "<<a.second<<endl;
    }
    
    // almost same for map, unordered_set and set
    
    set<int> S;
    S.insert(3);
    S.insert(6);
    S.insert(2);
    
    set<int> ::iterator setItr;
    for(setItr=S.begin();setItr!=S.end();setItr++) {
        cout<<*setItr;
    }
    
    unordered_set<int> US;
    US.insert(3);
    US.insert(6);
    US.insert(2);
    
    unordered_set<int> ::iterator usetItr;
    for(usetItr=US.begin();usetItr!=US.end();usetItr++) {
        cout<<*usetItr<<" ";
    }
    cout<<endl;
    cout<<"Iterating with auto method"<<endl;
    for(auto a:US) {
        cout<<a<<" ";
    }
    
    //ERAse methods in SET
    set<int> eSet;
    eSet.insert(5);
    eSet.insert(8);
    eSet.insert(9);
    eSet.insert(10);
    eSet.insert(2);
    eSet.insert(4);
    eSet.insert(1);
    eSet.insert(14);
    eSet.insert(12);
    
    cout<<"Initial value of Set"<<endl;
    for(auto a : eSet) {
        cout<<a<<" ";
    }
    cout<<endl;
    // setname.erase(position) - deletes element in that particular position only. So position is iterator.
    set<int> ::iterator itr1,itr2;
    itr1 = eSet.begin();
    eSet.erase(++eSet.begin());// deletes 2nd element
    cout<<"Erase element from a particular position"<<endl;
    for(auto a : eSet) {
        cout<<a<<" ";
    }
    
    //setname.erase(initialPosition,endingPosition);
    // [including initialPosition and excluding endingPosition)
    
    itr2 = eSet.end();
    itr2--;
    itr2--;
    
    itr1 = eSet.begin();
    itr1++;
    
    eSet.erase(itr1,itr2); // from 2nd element and leaving 2 elements at the end
    cout<<"Erase element from range"<<endl;
    for(auto a : eSet) {
        cout<<a<<" ";
    }
    
    //setname.erase(element) - by deleting a particular element
    eSet.erase(12);
    cout<<"Erase a particular element"<<endl;
    for(auto a : eSet) {
        cout<<a<<" ";
    }
    return 0;
    
}
