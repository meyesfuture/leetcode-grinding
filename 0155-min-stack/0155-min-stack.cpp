class MinStack {

private: 
     vector<pair<int,int>> stt;
        int i=-1;
public:
    MinStack() {
       
    }
    
    void push(int value) {
        if(i == -1){
            stt.push_back({value,value});
            i++;
        }
        else{
            int x = stt[i].second;
            if(value < x){
                stt.push_back({value,value});
            }
            else{
                stt.push_back({value,x});
            }
            i++;
        }
    }
    
    void pop() {
        if(i == -1){
            return;
        }
        stt.pop_back();
        i--;
    }
    
    int top() {
        if(i == -1){
            return 0;
        }
        else{
            return stt[i].first;
        }
    }
    
    int getMin() {
         if(i == -1){
            return 0;
        }
        else{
            return stt[i].second;
        }
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */