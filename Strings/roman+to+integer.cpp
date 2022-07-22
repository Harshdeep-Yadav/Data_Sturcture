class Solution {
public:
    int romanToInt(string s) {
      map<char,int> gquiz1;
        gquiz1.insert(pair<char, int>('I',1));
        gquiz1.insert(pair<char, int>('V',5));
        gquiz1.insert(pair<char, int>('X',10));
        gquiz1.insert(pair<char, int>('L',50));
        gquiz1.insert(pair<char, int>('C',100));
        gquiz1.insert(pair<char, int>('D',500));
        gquiz1.insert(pair<char, int>('M',1000));
        int result=gquiz1.find(s.at(s.length()-1));
        for(int i=s.length()-2;i>=0;i--)
        {
            if(gquiz1.find(s.at(i))<gquiz1.find(s.at(i+1)))
            {
                result-=gquiz1.find(s.at(i));    
            }
            else
            {
                result+=gquiz1.find(s.at(i));    
            }
        }
        return result;
    }
};