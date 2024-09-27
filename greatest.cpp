#include<iostream>
using namespace std;

class ClassB;
class ClassA{
    int numA;
    public: 
    void setData(int a){
        numA= a;
    } 
    friend void greatest(ClassA,ClassB);
};

class ClassB{
    int numB;
    public: 
    void setData(int b){
        numB = b;
}
friend void greatest(ClassA,ClassB);
};

void greatest(ClassA objA,ClassB objb){
if(objA.numA > objb.numB){
    cout<<"greatest is "<<objA.numA<<endl;
}
else{
    cout<<"greatest is "<<objb.numB;
}
}

int main(){
ClassA objA;
ClassB objB;
objA.setData(10);
objB.setData(50);

greatest(objA,objB);
}