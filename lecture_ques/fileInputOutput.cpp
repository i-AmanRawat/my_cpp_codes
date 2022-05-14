#include <iostream>
#include<fstream>
using namespace std;

/*
with the help of    #include <fstream>  we get acess to below written 3 classes.
        USEFUL CLASSES FOR WORKING WITH FILES IN CPP :
1.    fstreambase
2.    ifstream    --> derived from fstreambase
3.    ofstream    --> derived from fstreambase

        INORDER TO WORK WITH FILE IN CPP, YOU WILL HAVE TO OPEN IT , PRIAMARILY THEIR ARE TWO WAYS TO OPEN IT : 
1.    using the constructor.
2.    using the member function " open() " of the class.
*/

int main (){
    string s = "Yet i didn't understood file handling fully , no doubt i will, in upcoming lectures.";
    string str ;
//opening file using constructor and writing in it 
    ofstream likho("sample.txt");   //this class helps in write operation : here instead of likho we can name it with different name as well it is just a constructor and a object 
    likho << s<<endl;      // writting into the sample.txt file                  

//opening file using constructor and reading it 
    ifstream pdho("sample.txt");
    // pdho >> str;        //file k andar ka content str mein aajayega   
    getline(pdho , str);    //if we will cout the str then we will get only first word of the statement in order to display whole statement we are using "getline" function
    cout << str;    
}
