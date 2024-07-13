class Solution {

    public:
    int fabo(int a,int b,int count){
        int temp = a+ b;
        if(count==0) return temp;
         return fabo(b,temp,--count);
        }
public:
    int fib(int n) {
    
      int a=1,b=1;
      if(n==0) return 0;
      else if(n==1) return 1;
      else if(n==2) return 1;
      else {
           return fabo(a,b,n=n-3);
      }
    }
auto init = [](){
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
return 'c';

}();