// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>

// sorting vector of integer with function method
bool comparetor(int i,int j) {
    return i>j;
}

// sorting of vector of int with object comparetor
struct myclass {
  bool operator() (int i,int j) { return (i<j);}
} myobject;

struct Student {
    int age;
    std::string name;
    Student(int i,std::string s) {
        age = i;
        name = s;
    }
};

bool studentSort(const Student &s1,const Student &s2) {
    return s1.age>s2.age;
}

struct myStudentSortClass {
    bool operator() (const Student &s1,const Student &s2) {
        return s1.age<s2.age;
    }
} myStudentSortObject;

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
    cout<<endl;
    
    
    Student *yogesh = new Student(5,"Yogesh");
    //cout<<yogesh->name;
    
    Student *souvik = new Student(4,"Souvik");
    //cout<<souvik->name;
    
    Student *anumay = new Student(6,"Anumay");
    // cout<<anumay->name;
    
    vector<Student> students;
    students.push_back(*yogesh);
    students.push_back(*souvik);
    students.push_back(*anumay);
    
    vector<Student> ::iterator studentItr;
    for(studentItr=students.begin();studentItr!=students.end();studentItr++) {
        cout<<studentItr->name<<" "<<studentItr->age<<endl;
    }
    cout<<endl;
    sort(students.begin(),students.end(),studentSort);
    for(studentItr=students.begin();studentItr!=students.end();studentItr++) {
        cout<<studentItr->name<<" "<<studentItr->age<<endl;
    } 
    cout<<endl;
    sort(students.begin(),students.end(),myStudentSortObject);
    for(studentItr=students.begin();studentItr!=students.end();studentItr++) {
        cout<<studentItr->name<<" "<<studentItr->age<<endl;
    }
    
    cout<<endl;
    sort(students.begin(),students.end(),[](const Student &s1,const Student &s2){
        return s1.name > s2.name;
    });
    for(studentItr=students.begin();studentItr!=students.end();studentItr++) {
        cout<<studentItr->name<<" "<<studentItr->age<<endl;
    }
    
    cout<<endl;
    cout<<"Iterating with AUTO"<<endl; // with auto code is compact and takes less time to write
    for(auto a:students) {
        cout<<"Name = "<<a.name<<" Age = "<<a.age<<endl;
    }
    
    // Difference between AUTO and ITERATOR
    // ITEARTOR gives address so address se value nikalo and then .name and .age karega
    // AUTO directly gives us Value so we can directly do .name and .age
    
    cout<<"Iterating over vector without index parameter"<<endl;
    vector<int> nums = {4,2,6,1,9};
    for(int num:nums) {
        cout<<num<<" ";
    }
    cout<<endl;

    vector<int> testV = {1,6,3,8,9};
    testV.push_back(10);
    //testV.push_front(4); - not supported
    cout<<"Demo of push_back/front() pop_front/back() front() back() begin() methods"<<endl;
    for(int i:testV) {
        cout<<i<<" ";
    }
    cout<<"Front() "<<testV.front()<<endl; // return int
    cout<<"Back() "<<testV.back()<<endl; // return int
    cout<<"Begin() "<<*testV.begin()<<endl; // returns iterator
    
    testV.pop_back();
    cout<<endl;
    cout<<"Vector after pop_back()"<<endl;
    for(int i:testV) {
        cout<<i<<" ";
    }
    cout<<endl;
    //testV.pop_front(); - not supported
    // Since vector has array as internal data structure so operation at begining are not possible like push_front() and pop_front()
    // back() and front() - // return int
    // begin() and end() - // retutn iterator
    // if want to remove last element of vector then
    // i) pop_back() or
    // ii) v.erase(--v.end())

    //Similar to list erase(iterator position) and erase[iterator startpos,iterator endPos) are possible in vector and erase(element) is not possible as multiple entry of same element can be possible
    // vector_name.erase(position);    for deletion at specific position
    //vector_name.erase(starting_position, ending_position);    // for deletion in range
    
    return 0;
}
