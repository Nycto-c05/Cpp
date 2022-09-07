#include<iostream>
#include <cmath>
using namespace std;

class Point{
    friend void distance(Point, Point);
    int x, y;
    
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};

void distance(Point o1, Point o2){//Gonna access private var, so make it a friend function
//Using Distance formula
    int x_diff = o2.x - o1.x;
    int y_diff = o2.y - o1.y;
    float dist = sqrt(pow(x_diff,2) + pow(y_diff,2));
    cout<<"The distance between the 2 points is "<<dist<<" unit/s"<<endl;
}

int main() {
//Implicit call    
    Point p1(1,1);
    p1.displayPoint();

//Explicit call
    Point p2 = Point(4,6);
    p2.displayPoint();

    distance(p1, p2);


    return 0;
}