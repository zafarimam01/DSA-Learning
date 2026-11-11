#include<iostream>
using namespace std;

class Engine{
    public:
        Engine(){
            cout<<"Engine Created \n";
        }
        ~Engine(){
            cout<<"Engine Destryoed \n";
        }
        void start(){
            cout<<"Engine is started \n";
        }
};
class Car{
    Engine engine;
    public:
        Car(){
            cout<<"Car Created \n";
        }
        ~Car(){
            cout<<"Car Destroyed \n";
        }

        void drive(){
            engine.start();
            cout<<"Car is Moving \n";
        }
};

int main(){
    Car myCar;
    myCar.drive();
}