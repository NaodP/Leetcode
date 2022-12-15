class MyHashMap {
private:
    vector<int> Table;

public:
    MyHashMap() {
        Table = vector<int>(1000001, -1);
    }
    
    void put(int key, int value) {
        Table[key] = value;
    }
    
    int get(int key) {
        return Table[key];
    }
    
    void remove(int key) {
        Table[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */