class ATM {
public:
    long bills[5] = {0, 0, 0, 0, 0};
    long amounts[5] = {20, 50, 100, 200, 500};

    ATM() {}

    void deposit(vector<int> banknotesCount) {
        for(int i = 0; i < 5; i++){
            bills[i] += banknotesCount[i];
        }
    }
    
    vector<int> withdraw(int amount) {
        vector<int> output = {0, 0, 0, 0, 0};

        for(int i = 4; i > -1; i--){
            long can = amount / amounts[i];
            long have = bills[i];
            long taking = have;

            if(can < have){
                taking = can;
            } 

            amount -= (taking * amounts[i]);
            bills[i] -= taking;
            output[i] += taking;
        }

        if(amount != 0){
            for(int i = 4; i > -1; i--){
                bills[i] += output.back();
                output.pop_back();
            }
            output.push_back(-1);
        }

        return output;
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */