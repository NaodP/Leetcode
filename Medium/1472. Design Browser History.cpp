class BrowserHistory {
private:
    stack<string> backward;
    stack<string> forwarD;
    string current;
public:
    BrowserHistory(string homepage) {
        current = homepage;
    }
    
    void visit(string url){
        while(!forwarD.empty()){
            forwarD.pop();
        }
        backward.push(current);
        current = url;
    }
    
    string back(int steps) {
        while(steps > 0 && backward.size() > 0){
            forwarD.push(current);
            current = backward.top(); backward.pop();
            steps--;
        }
        return current;
    }
    
    string forward(int steps) {
        while(steps > 0 && forwarD.size() > 0){
            backward.push(current);
            current = forwarD.top(); forwarD.pop();
            steps--;
        }
        
        return current;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */