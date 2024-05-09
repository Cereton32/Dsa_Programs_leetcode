class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string result;
        int i=0;
        while(i<n){
            while(s[i]==' ' && i<n) i++;
            if(i>=n) break;
            int j = i+1;
            while(s[j]!=' ' && j<n) j++;
            string temp=s.substr(i,j-i);
            if(result.length()==0){
                result=temp;
            }else{
                result=temp+' '+result;
            }
            i = j+1;
        }
        return result;
    }
};