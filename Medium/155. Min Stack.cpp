                              //Implementation of Min Stack

/*Time complexities:    01.For Push   :   O(1)
                        02.For Pop    :   O(1)
                        03.For top    :   O(1)
                        04.For size() :   O(1)
                        05.For get_min:   O(1)
  Space complexity : O(n)
*/
class MinStack {
public:
stack<long long> st;
long long mini=LLONG_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        long long v=val;
        if(st.empty()){
            mini=v;
            st.push(v);
        }
        else if(v>mini){
            st.push(v);
        }
        else{
            st.push(2*v-mini);
            mini=v;
        }
    }
    
    void pop() {
        if(st.empty()){
            return;
        }
        long long x=st.top();
        st.pop();
        if(x<mini){
            mini=2*mini-x;
        }
    }
    
    int top() {
        if(st.empty()) return -1;
        long long x=st.top();
        if(x<mini){
            return mini;
        }
        else{
            return x;
        }
    }
    
    int getMin() {
        if(st.empty()) return -1;
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
