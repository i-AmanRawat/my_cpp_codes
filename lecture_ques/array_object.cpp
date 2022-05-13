#include <iostream>
using namespace std ;

class items{
    int inum;
    int price;
    public :
        int setData (int a, int b){
            inum = a;
            price = b;
        }
        void display(void){
            cout << "Item code : "<< inum << endl;
            cout << "Item price : "<< price << endl;
        }
};

int main(){
    int n;
    int i,p,q;
    cout<<"How many entries would you like to enter ?"<<endl;
    cin>>n;
    items *ptr = new items[n];
    items *ptrtemp = ptr;   
    /*
        storing the address in ptr temporarily in ptrtemp bcz at the end of first looop basically after last iteration the ptr will 
        exit the loop with the address of last value +1 and we need initial value of ptr so for that we initially stored ptr in another vaiable 
    */
    for(i=0;i<n;i++){
        cout <<"Enter Item code for 0"<< i+1 << " item"<<endl;
        cin >> p;
        cout <<"Now, Enter Item price for 0"<< i+1 << " item"<<endl;
        cin >> q;
        ptr->setData(p,q);
        ptr++;
    }
    for(i=0;i<n;i++){
        ptrtemp->display();
        ptrtemp++;
    }
return 0;
}
