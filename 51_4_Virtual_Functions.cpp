#include <iostream>
using namespace std;

class CWH
{
public:
    float rating;
    string title;
    CWH(float r, string t)
    {
        rating = r;
        title = t;
    }
    virtual void displayFunc() {}
};

class CWHVideo : public CWH
{
public:
    float video_length;
    CWHVideo(float r, string t, float vl) : CWH(r, t) // Inheriting constructor of base class
    {
        video_length = vl;
    }
    void displayFunc()
    {
        cout << "Rating is: " << rating << endl;
        cout << "Title is: " << title << endl;
        cout << "Video Length is: " << video_length << endl;
    }
};

class CWHText : public CWH
{
public:
    float word_count;
    CWHText(float r, string t, float wc) : CWH(r, t) // Inheriting constructor of base class
    {
        word_count = wc;
    }
    void displayFunc()
    {
        cout << "Rating is: " << rating << endl;
        cout << "Title is: " << title << endl;
        cout << "Word Count is: " << word_count << endl;
    }
};

int main()
{
    system("cls");

    CWHVideo videoObj(9.8, "C++ Complete Playlist", 10.46); // Parameterized constructor object syntax
    CWHText textObj(9.1, "C++ Website Tutorial", 480);

    CWH *ptr_CWH[2];
    ptr_CWH[0] = &videoObj;
    ptr_CWH[1] = &textObj;

    ptr_CWH[0]->displayFunc(); // Even though pointer of Base class, still function of Derived class will be called
    cout << endl;
    ptr_CWH[1]->displayFunc();

    return 0;
}