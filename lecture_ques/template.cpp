#include <iostream>
using namespace std;
//simple class
// class vec {
//     public :
//         int *arr;
//         int size;
//         vec(int s){
//             size = s;
//             arr = new int[size];
//         }
//     int dotproduct (vec v){
//         int dot = 0;
//         for (int i =0 ; i < size ; i++){
//             dot += this->arr[i] * v.arr[i]; //this keyword refers to the current instance of the class;
//         }
//         return dot;
//     }    
// };
//why do we need template ?
/*
    bcz in our vector class the members are capable of playing with only one datatype i.e. int what i want to play with float datatype
    for that purpose we make template bcz it helps in DRY principle (do not repeat yourself)
    basically the datatype we want to customize we using T as a datatype while defining the template.
*/
//template class
template <class T>      // "T" --> custum datatype
class vec {
    public :
        T *arr;
        int size;
        vec(int s){
            size = s;
            arr = new T[size];
        }
    T dotproduct (vec v){
        T dot = 0;
        for (int i =0 ; i < size ; i++){
            dot += this->arr[i] * v.arr[i]; //this keyword refers to the current instance of the class;
        }
        return dot;
    }    
};


int main(){
    vec <int> v1(3);    //inside angular brackets we will write datatype we want to use this time int 
    v1.arr[0]=1;
    v1.arr[1]=2;
    v1.arr[2]=3;
    vec <int> v2(3);
    v2.arr[0]=3;
    v2.arr[1]=2;
    v2.arr[2]=1;
    int sum = v1.dotproduct(v2);
    cout << sum<<endl;

    vec <float> v3(3);    //inside angular brackets we will write datatype we want to use this time float 
    v3.arr[0]=1.5;
    v3.arr[1]=2.3;
    v3.arr[2]=3.6;
    vec <float> v4(3);
    v4.arr[0]=3.2;
    v4.arr[1]=2.3;
    v4.arr[2]=1.7;
    float s = v3.dotproduct(v4);
    cout << s<<endl;
}
/*
    Just because of the template it saved us from writting another class with same members but different datatypes 
*/
