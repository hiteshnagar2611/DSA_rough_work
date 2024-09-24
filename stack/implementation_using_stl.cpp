#include <iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;
    
    s.push(1);
    cout<< s.top() <<endl;
    s.push(2);
    cout<< s.top() <<endl;
    s.push(3);
    cout<< s.top() <<endl;

    cout <<"size of stack "<< s.size() <<endl;

    s.pop();
    cout<< s.top() <<endl;
    s.pop();
    cout<< s.top() <<endl;
    s.pop();
    //cout<< s.top() <<endl;

    cout<< "stack is empty or not " << s.empty();
    
}