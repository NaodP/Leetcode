class MyHashSet {
private:
    int length;
    vector<vector<int>> Table;
    int hash(int key){return key % length;}

public:
    MyHashSet(){
        length = 15000;
        Table = vector<vector<int>>(length, vector<int>{});
    }
    
    void add(int key) {
        if(contains(key)) return;
        int hashValue = hash(key);
        Table[hashValue].push_back(key);
    }
    
    void remove(int key){
        int hashValue = hash(key);
        auto ind = find(Table[hashValue].begin(), Table[hashValue].end(), key);

        if(ind != Table[hashValue].end()){
            Table[hashValue].erase(ind);
        }
    }
    
    bool contains(int key) {
        int hashValue = hash(key);
        if(find(Table[hashValue].begin(), Table[hashValue].end(), key) == Table[hashValue].end()){
            return false;
        }
        return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */