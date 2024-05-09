// class Solution {
// public:
//     string reverseWords(string s) {
//         stringstream ss(s);
//         string token="";
//         string result="";
//         while(ss>>token){
//             result= token + " " + result;
//         }
//         string new1 = result.substr(0,s.size());
//         return new1;
//     }
// };
//:- there is an error of " " extra spavrr