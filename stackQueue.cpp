// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>

struct Student {
    int age;
    std::string name;
    
    Student(int i,std::string s) {
        age = i;
        name = s;
    }
};


using namespace std;
int main() {
   stack<int> s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);
   s.push(6);
   s.push(7);
   s.push(8);
   
   cout<<s.empty()<<endl; // Tells weather stack is empty or not
   cout<<s.top()<<endl; // Tells the last element entered.
   
   cout<<"Elements of stack"<<endl;
   while(!s.empty()) {
       auto a = s.top();
       s.pop();
       cout<<a<<" ";
   }
   
   stack<Student> students;
   Student *yogesh = new Student(37,"Yogesh");
   Student *ram = new Student(89,"Ram");
   students.push(*yogesh);
   students.push(*ram);
   
   cout<<endl;
   cout<<"Stack storing custom objects"<<endl;
   while(!students.empty()) {
       auto a = students.top();
       cout<<"Name = "<<a.name<<" age = "<<a.age<<endl;
       students.pop();
   }
   
   // Queues
   queue<int> q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
    
   cout<<q.front()<<endl;
   cout<<q.back()<<endl;
   
   // pop is always front
   while(!q.empty()) {
       auto a = q.front();
       cout<<a<<" ";
       q.pop();
   }
   
   deque<int> dq;
   dq.push_back(4);
   dq.push_back(8);
   dq.push_front(1);
   dq.push_front(7);
   
   cout<<"Demo of deque"<<endl;
   while(!dq.empty()) {
       auto at=dq.front();
       dq.pop_front();
       cout<<at<<" ";
   }
   
    
}
