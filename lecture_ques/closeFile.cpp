#include <iostream>
#include <fstream>
using namespace std;

int main (){

//WRITTING ;
    ofstream write ("greeting.txt");
    string name;
    cout << "Enter your name : ";
    cin>> name;
    write << "Myself "<<name<<endl;
    write.close();  //function to close the file on which we were working so that wae could perform read function further as of now.

//READING
    ifstream read("greeting.txt");
    getline(read , name);
    cout << name;
    read.close();
}
