class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string result;
        int i=0;
        while(i<n){
            while(s[i]==' ' && i<n) i++;
            if(i>=n) break;
            int j=i+1;
            while(s[j]!=' ' && j<n) {
                if(j<n) j++;
                else break;
            }
            string temp=s.substr(i,j-i);
            if(result.empty()){
                result=temp;
            }
            else {
                result=temp+' '+result;
            }
            i = j + 1;
        }
        return result;
    }
};