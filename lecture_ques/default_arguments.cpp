#include <iostream>
using namespace std;
float money (int paisa , float interest= 1.2 ){
    return paisa * interest;
}

int main (){
    int paisa ;
    cout << " Enter the amount of money you have in your bank account : " << endl;
    cin >> paisa ;
    cout << "When you pass interest along with paisa : " << money (paisa , 1.1)<< endl;
    cout << "When you don't pass interest along with paisa (inorder to use, by default value of the function) : " << money (paisa )<< endl;
    return 0 ;
}
