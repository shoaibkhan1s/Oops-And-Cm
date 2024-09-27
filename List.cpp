#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class LIST {
public:
    virtual void store(int value) = 0;
    virtual int retrieve() = 0;
};

class Stack : public LIST {
private:
    vector<int> stk;
public:
    void store(int value) override {
        stk.push_back(value);
    }
    int retrieve() override {
        if (!stk.empty()) {
            int val = stk.back();
            stk.pop_back();
            return val;
        }
        return -1;
    }
};

class Queue : public LIST {
private:
    queue<int> que;
public:
    void store(int value) override {
        que.push(value);
    }
    int retrieve() override {
        if (!que.empty()) {
            int val = que.front();
            que.pop();
            return val;
        }
        return -1;
    }
};

int main() {
    LIST* listPtr;

    Stack stackObj;
    listPtr = &stackObj;
    listPtr->store(10);
    listPtr->store(20);
    listPtr->store(30);
    cout << "Stack Retrieve: " << listPtr->retrieve() << endl;

    Queue queueObj;
    listPtr = &queueObj;
    listPtr->store(10);
    listPtr->store(20);
    listPtr->store(30);
    cout << "Queue Retrieve: " << listPtr->retrieve() << endl;

    return 0;
}
