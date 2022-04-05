#include <iostream>
#include <math.h>
using namespace std ;
class points{
    int x ,y;
    int dis;

    public:
        points(int m , int n){
            x = m;
            y = n;
        }
    friend int distance (points , points );

};

int distance (points p1 , points p2 ){
    return  (sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2)));
}

int main (){
    points A(2,-4),B(10,-10);
    int length = distance(A,B);
    cout << "The separation between point p1 and p2 is "<< length<<endl;
    return 0;
}
