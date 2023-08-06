class MyCircularQueue {
    int *arr;
    int front;
    int rear;
    int size;
public:
    MyCircularQueue(int k) {
        size=k;
        front=-1;
        rear=-1;
        arr=new int[size];
    }
    
    bool enQueue(int value) {
        if((front==0 && rear==size-1) || (rear==(front-1)%(size)))
        {
            return false;
        }
        else if(front==-1)
        {
            front=rear=0;
        }
        else if(front!=0 && rear==size-1)
        {
            rear=0;
        }
        else
        {
            rear++;
        }
        arr[rear]=value;
        return true;
    }
    
    bool deQueue() {
        if(front==-1)
        {
            return false;
        }
        arr[front]=-1;
        if(front==rear)
        {
            front=rear=-1;
        }
        else if(front==size-1)
        {
            front=0;
        }
        else
        {
            front++;
        }
        return true;
    }
    
    int Front() {
        if(front==-1)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    
    int Rear() {
        if(front==-1)
        {
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }
    
    bool isEmpty() {
        if(front==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    bool isFull() {
        if((front==0 && rear==size-1) || (rear==(front-1)%(size)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
