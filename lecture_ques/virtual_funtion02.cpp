#include <iostream>
using namespace std;

class CWH {
    protected :
        string title ;
        int rating ;
    public :
            CWH (string s , int r ){
                title = s;
                rating = r;
            }
            virtual void display (){}
};

class CWHvideo: public CWH{
    float videoLength;
    public :
        CWHvideo(string s, int r, float vL ):CWH (s,r){
            videoLength = vL;
        }        
        void display (void){
            cout << "Title of the video is "<< title << endl;
            cout << "Rating of the video is "<< rating <<" (out of 5 ). " <<endl;
            cout << "Video length is "<<videoLength<<" min"<<endl;
        }
};

class CWHtext: public CWH{
    int words;
    public :
        CWHtext(string s, int r, int w): CWH(s,r){
            words = w;
        }
        void display (void ){
            cout << "Title of the article is "<<title << endl;
            cout << "Rating of the article is "<< rating <<"(out of 5 ). " <<endl;
            cout << "Article has "<<words<<" words."<<endl;
        }
};

int main (){
    string title = "lets learn python";
    int rating = 4;
    int words = 550;
    float videolength = 45;
    CWHvideo pyvideo(title,rating,videolength);
    CWHtext pytext(title,rating,words);

    //without pointers
    // pyvideo.display();
    // cout <<endl;
    // pytext.display();

    //using pointers
    CWH *ptr [2];
    ptr[0] = &pyvideo;
    ptr[1] = &pytext;
    ptr[0]->display();
    cout << endl;
    ptr[1]->display();

}
/*
    The movemennt we define virtual funtion after declaring the base class pointers and passing the address of respective derived classes , pointer we will call
    display function of respective derived class.
    what if there is no display function in the derived class in that case the set code will run virtual display function.

        // Rules of virtual function 
1.    They cannot be static.
2.    They are accessed by object pointer.
3.    virtual fuunction can be friend to the another class.
4.    A virtual funtion in the base class might not be used.

*/
