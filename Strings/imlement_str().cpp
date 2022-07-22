
class Solution {
public:
    int strStr(string haystack, string needle) {
       if(needle=="") return 0;
        int found = haystack.find(needle); // stl in-built function find() which will return npos if                                                //    the string is not found in string 
        if(found!=string::npos)
            return found;
        return -1; 
    }
};