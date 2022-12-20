class Solution {
public:
    string defangIPaddr(string address) {
        string fin;
        for(int i = 0; i < address.length(); i++){
            if(address[i] == '.')
                fin += "[.]";
            else
                fin += address[i];
        }
        return fin;
    }
};