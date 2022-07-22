class Solution {
public:
    bool isAnagram(string s, string t)
    {
        // if(s.size()!=t.size()) return false;
        // int n=s.size();
        // unordered_map<char,int> m;
        // for(int i=0;i<n;i++){
        //    m[s[i]]++;
        //    m[t[i]]--;
        // }
        // for(auto count:m){
        //     if(count.second) return false;
        // }  
        // return true;
        
//        --------------------- solution-------------------- uising char array
        
//         if(s.size()!=t.size()) return false;
//         int n=s.size();
//         int arr[26]={0};
        
//         for(int i=0;i<n;i++)
//         {
//             arr[s[i]-'a']++;
//             arr[t[i]-'a']--;
//         }
//         for(int i=0;i<26;i++)
//         {
//             if(arr[i]) return false;
//         }
//         return true;
        
//--------------------using sorting---------------
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        return false;
    }
};