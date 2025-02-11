class MinStack {
private:
    stack<int> s1;
    map<int,int> s2;
public:
    void push(int x) {
	    s1.push(x);
	    s2[x]++;	    
    }
    void pop() {
        if(s1.top()==-3) cout<<s2.count(-3)<<endl;
	    s2[s1.top()]--;
	    s1.pop();
        
    }
    int top() {
	    return s1.top();
    }
    int getMin() {
       
	    for(auto i :s2)
        if(i.second!=0)
            return i.first;
        return -1;
    }
};