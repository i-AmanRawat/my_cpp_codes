/*
     Array as a object. 
      cool thing            */
      
#include<iostream>
using namespace std;
class employee {
    int ID ;
    int salary; 

    public :
        void get_id (void){
            salary = 1,00,000;
            cout << "Enter the ID of the employee : "<< endl;
            cin >> ID ; 
        }

        void display (void){
            cout << " ID of the employee is "<<ID << endl;
        }

};

int main(){
    employee array[3];
    for (int i =0 ; i < 3 ; i++ ){
        array[i].get_id();
    }

    for (int i =0 ; i < 3 ; i++ ){
        array[i].display();
    }

    // array[0].get_id();
    // array[0].display();

    return 0;
}
