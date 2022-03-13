#include <iostream>
using namespace std;

class bazar {
    private:
        int itemid[100];
        int itemprice[100];
        int count ;

    public :
        void item_details(void);
        void display(void);
        void counter(void){
            count =0 ;
        }
};

void bazar::item_details(void){
    cout << "Enter the item ID : "<< endl;
    cin>> itemid[count];
    cout << "Enter the item price : "<< endl;
    cin>> itemprice[count];
    count+=1;
}

void bazar::display(void){
    for (int i =0 ; i<count; i++){
        cout << "Item ID : "<< itemid[i]<<endl;
        cout << "Item price : "<< itemprice[i]<<endl;
    }
}

int main (){
    bazar shop; 
    int n;
    cout << "How many entries you want to take ? "<<endl;
    cin>> n;
    for (int i =0 ;i<n ; i++){
        shop.item_details();
    }
    shop.display();
    return 0;
}
