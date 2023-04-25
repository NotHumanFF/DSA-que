class MyQueue {
public:
        int arr[200];
        int f = 0;
        int r = 0;
        int n=200;
    MyQueue() {
        
    }
    bool isfull(){
        if(r==200) return true;
        return false;
    }
    
    void push(int x) {
        if(isfull()) return;
        arr[r] = x;
        r+=1;
        
    }
    
    int pop() {
        int x;
        if(empty()) return 0;
        x=arr[f];
        f+=1;
        return x;
    }
    
    int peek() {
        if(empty()) return 0;
        return arr[f];
        
    }

    bool empty(){
        if(f==r){
            return true;
        }
        return false;
    }
};

