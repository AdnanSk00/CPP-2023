// *****************************    Abstract Base Class & Pure Virtual Functions     ****************************

#include<iostream>
#include<cstring>
using namespace std;

// Abstract Base Class me at least one Pure Virtual function hota hi hai

class RGI{                                // Abstract Base Class
    protected:
        string title;
        float rating;
    public:
        RGI(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display() = 0 ;      // do-nothing function --> 'Pure Virtual function'
};

class RGIVideo : public RGI{
    float videoLength;
    public:
        RGIVideo(string s, float r, float vL) : RGI(s, r){
            videoLength = vL;
        }
        void display(){
            cout<<"\nThis is an amazing video with title "<<title<<endl;
            cout<<"Ratings : "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is : "<<videoLength<<" minutes"<<endl;
        }
};

class RGIText : public RGI{
    int words;
    public:
        RGIText(string s, float r, int wc) : RGI(s, r){
            words = wc;
        }
        void display(){
            cout<<"\nThis is an amazing tutorial with title "<<title<<endl;
            cout<<"Ratings of this text tutorial : "<<rating<<" out of 5 stars"<<endl;
            cout<<"Number of words in this text tutorial is : "<<words<<endl;
        }
};

// Pure virtual function kisi bhi haalat me execute nahi hota hai balke wo dusri classes ko majboor karta hai ke wo uske(virtual) jaise same function banaaye Compulsary.

int main(){
    string title ;
    float rating, vlen;
    int words;

    // For Raisoni Group of Institutions Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    RGIVideo djVideo(title, rating, vlen);
    // djVideo.display();
    
    // For Raisoni Group of Institutions Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    RGIText djText(title, rating, words);
    // djText.display();

    RGI * tuts[2];              // Array of objects
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();


    return 0;
}
