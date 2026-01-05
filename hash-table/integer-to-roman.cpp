class Solution {
public:
    string intToRoman(int num) {
        vector<pair<string,int>>symbols{
            {"M", 1000},{"CM",900},{"D",500},{"CD",400},{"C",100},{"XC",90},{"L",50},{"XL",40},{"x",10},{"IX",9},{"V",5},{"IV",4},{"I",1}
        };

string ans;
        for(auto s: symbols){
         auto symbol=s.first;
         auto value=s.second;

         if(num==0)break;

         while(num>=value){
         ans+=symbol;
         num-=value;
         }
        }
return ans;
    }
};