class Solution {
public:       
    bool isPalindrome(int x){
        string pal;
        string check;
        pal = to_string(x);
        for(int i = pal.length()-1; i >= 0; i--){
            check += pal[i];
        }
        if(check == pal)
            return true;
        else
            return false;
    }
};