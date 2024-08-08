// *************************  **  Virtual Functions Example  **  ************************

#include<iostream>
#include<cstring>
using namespace std;

class RGI{
    protected:
        string title;
        float rating;
    public:
        RGI(string s, float r){
            title = s;
            rating = r;
            cout<< "I am Emotional"<<endl;
        }
        virtual void display(){}            // Virtual functio
            // cout<<"-: Bogus code :-"<<endl;
                        
};

class RGIVideo : public RGI{
    float videoLength;
    public:
        RGIVideo(string s, float r, float vL) : RGI(s, r){
            videoLength = vL;
            cout<<"I am Sad"<<endl;
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
            cout<<"I am Happy"<<endl;
        }
        void display(){
            cout<<"\nThis is an amazing text tutorial with title "<<title<<endl;
            cout<<"Ratings of this text tutorial : "<<rating<<" out of 5 stars"<<endl;
            cout<<"Number of words in this text tutorial is : "<<words<<" words"<<endl;
        }
};


// i)  Virtual Function dusro ka haq nahi chhinta hai balke dusro ko apni jage execute hone ka mauka deta hai
// ii) Laikin Virtual ke jaisa same function dusri class me na hoto Virtual function 'virtual' hone ke ba wajood us function ki jage execute ho jata hai. 
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


// Rules for Virtual function :-
// 1. They cannot be static
// 2. They are accessed by object pointers
// 3. Virtual functions can be a friend of another class
// 4. A virtual function in base class might not be used.
// 5. If a virtual function defined in a base class, there is no necessity of redefining it in the derived class
