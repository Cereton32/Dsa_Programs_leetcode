
#include <iostream>
#include <string>
using namespace std;

    string reverseWords(string s) {
        int n = s.length();
       
        string temp="";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                temp.push_back('%');
                temp.push_back('4');
                temp.push_back('0');
            }
            else{
                temp.push_back(s[i]);
            }
        
        }
        return temp;
    }
    int main(){
        string a="abhishek is good Boy";
        cout<<reverseWords(a);
    }
///////




#include <iostream>
#include <string>
using namespace std;

    string reverseWords(string s) {
        int n = s.length();
       
        int i=0;
        while(i<=n){
            while(s[i]!=' ' && i<n-1) i++;
            if(i>=n) break;
            int j=i+1;
            while(s[j]==' ' && j<n) {
                if(j<n) j++;
                else break;
            }
            
            s=s.replace(i,j-i,"%40");
            
            i = j + 1;
        }
        return s;
    }
    int main(){
        cout<<reverseWords("abhishek is good her h");
    }