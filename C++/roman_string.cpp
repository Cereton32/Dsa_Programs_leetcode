class Solution {
    public:
    int getVal(char ch){
        switch(ch){
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
             default : return 0;
        }
    };
public:
    int romanToInt(string s) {
        int n= s.length();
        int value=0;
        for(int i=0;i<n;i++){
            if((i+1) < n && getVal(s[i])<getVal(s[i+1])){
             value = value - getVal(s[i]);
            }
            else{
               value = value + getVal(s[i]); 
            }
        }
        return value;
    }
};



///int to roman 


class Solution {
public:
    string intToRoman(int num) {
        string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int nums[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        int i=12;
        string val="";
        while(num>0){
             int divisor = num/nums[i];
             num=num%nums[i];
             while(divisor--){
                val = val + sym[i];
             }
             i--;
        }
        return val;
    }
};