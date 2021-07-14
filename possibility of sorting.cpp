
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// function to print yes or no
void doas(queue<int> q1){
    queue<int> q2;
    stack<int> s;
    int p,q,r;
    // tracking the numbers to be queued in q2
    p = 1; 
    
    // loop is run till q1 is empty and
    // top in the stack does not match the next number in q2
    while(q1.empty() != 1 || (s.empty() != 1 && s.top() == p)){
        // if front in queue is the number to be placed in q2
        if(q1.empty() != 1 && q1.front() == p){
            q = q1.front();
            //cout << q << 1; _for debugging
            q1.pop();
            q2.push(q);
            p++; // tracking the numbers to be queued in q2
        }
        // if top in stack is the number to be placed in q2
        else if(s.empty() != 1 && s.top() == p){
            r = s.top();
            //cout << r << 2; _for debugging
            s.pop();
            q2.push(r);
            p++; // tracking the numbers to be queued in q2
        }
        // if no to be placed in q2 is not in top of s or
        // not in front of q1
        else{
            q = q1.front();
            //cout << q << 3; _for debugging
            q1.pop();
            s.push(q);
        }
    }
    
    // passing the results
    if((q1.empty() == 1) && (s.empty() == 1))
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";

}

int main(){
    int n,o;
    cin >> n; // # of testcases
    queue<int> q1;
    
    while(n>0){
        cin >> o;
        while(o != 0){
            q1.push(o); 
            cin >> o;
        }
        doas(q1); // calling the function
        while(!q1.empty())
            q1.pop();  
        n--;
    }
}

