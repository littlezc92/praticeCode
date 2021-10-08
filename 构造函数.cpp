#include<iostream>

using namespace std;

class Entity{
    public:
        float x, y;
        Entity(){
            x = 0.0f;
            y = 0.0f;
        }
        Entity(float X, float Y){
            x = X;
            y = Y;
        }
        void print(){
            cout << x << "," << y;
        }

};
int main(){
    Entity e;
    e.print();
    return 0;
}