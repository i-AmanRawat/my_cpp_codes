#include <iostream>
#include <fstream>
using namespace std;
/*
    problem is i m not able to enter more than one word at a time although now i m usting 2 variables but still its not the proper way 
    of doing so there must be some function { like getline()-->bcz it copy whole sentence in one go } which can take whole string in one go.
*/
int main (){
//WRIIE FILE
    ofstream write;
    write.open("greeting.txt");
    string daalo1, daalo2;
    int likho = 1;
    cout << "Continue to enter the data you want to enter in the file."<< endl;
    while (likho){
        cin>>daalo1>>daalo2;
        write <<daalo1<<daalo2<<endl;
        cout << "1 to continue writting in file or 0 to exit file."<<endl;
        cin >> likho;
    }
    write.close();
}
