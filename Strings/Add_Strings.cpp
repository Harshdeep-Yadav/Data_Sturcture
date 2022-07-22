class Solution {
public:

     string addStrings(string num1, string num2) {
    // int sum = 0;
    //int  i = num1.length() - 1, j = num2.length() - 1;
    // string str;
    // while (i >= 0 || j >= 0 || sum > 0)
    // {
    //      if (i >= 0) sum += (num1[i--] - '0');
    //      if (j >= 0) sum += (num2[j--] - '0');
    //      str.insert(0, 1, (sum % 10) + '0');
    //      sum /= 10;
    // }
    //  return str;
         
                                        // using ascii  //
         
         int n1=num1.size()-1;
         int n2=num2.size()-1;
         int carry=0;
         string ans;
         while(n1>=0||n2>=0)
         {
            if(n1<0)
            {
                ans.push_back(((num2[n2]-48+carry)%10)+48);
                carry=(num2[n2]-48+carry)/10;
                n2--;
            }
             else if(n2<0)
             {
                ans.push_back(((num1[n1]-48+carry)%10)+48);
                 carry=(num1[n1]-48+carry)/10;
                 n1--;
             }
             else
             {
                ans.push_back(((num1[n1]-48 + num2[n2]-48 + carry)%10)+48);
             carry = (num1[n1]-48 + num2[n2]-48 + carry)/10;
                n1--;
                n2--;
            }
        }
        if(carry)
        {
            ans.push_back(carry+48);
        }
        reverse(ans.begin(),ans.end());
        return ans;
     }
};
