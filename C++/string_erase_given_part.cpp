
#include <iostream>
#include <string>
using namespace std;

    string deletpart(string s,string part) {
       int n=s.size();
       while(n!=0 && s.find(part)<n){
        s.erase(s.find(part),part.length());
       }

        
        return s;
    }
    int main(){
        cout<<deletpart("aabcbcbcabcbc","abc");
    }